#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeFile(FILE* file, char str[50]);

int main(int argc, char** argv){

    FILE* file;
    char str[500];

    file= fopen("out.txt", "w+");
    if(file == (FILE*) NULL){
        printf("File %s not found\n", "out.txt");
        return EXIT_FAILURE;
    }
    
    writeFile(file, str);
    fclose(file);

    return EXIT_SUCCESS;
}

void writeFile(FILE* file, char str[500]){
    printf("Enter text: \n");
    gets(str);
    fprintf(file, "%s", str);
}