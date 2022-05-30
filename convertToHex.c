#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int bitToInt(char string01[]);

int main(int argc, char** argv){

    char bits[16];

    printf("Enter 16 bits (1's and/or 0's): ");
    scanf("%s", bits);

    printf("%d\n", bitToInt(bits));

    return EXIT_SUCCESS;
}

int bitToInt(char string01[]){
    int i=0, answer=0;
    for(i=0; i<16; i++){
        if(string01[i] == '1')
            answer = answer + pow(2, 15-i);
    }

    return answer;
}