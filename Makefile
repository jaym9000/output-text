GCC = gcc
CFLAGS = -g -Wall -Wshadow -std=c99
TARGETS = convertToHex writeFile

writeFile: writeFile.o
	$(GCC) -o $@ writeFile.o $(CFLAGS)

convertToHex: convertToHex.o
	$(GCC) -o $@ convertToHex.o $(CFLAGS)

%.o: %.c
	$(GCC) $(CFLAGS) -c $*.c

clean: *.o
	rm -f *.o $(TARGETS)

all: $(TARGETS)