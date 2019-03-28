#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//#define A 65
#define Z 90
#define SIZEOFALPHABET 29

int main(){
    char alphabet[SIZEOFALPHABET] = {0};
    alphabet[26] = '\x92';//Æ
    alphabet[27] = '\x9D';//Ø
    alphabet[28] = '\x8F';//Å

    int LETTER = 65;
    for(int j = 0; j <= 25; j++)
    {
        alphabet[j] = LETTER;
        LETTER++;
    }

    for(int i = 0; i < SIZEOFALPHABET; i++)
    {
        printf("%c", alphabet[i]);
    }
    
    return 0;
    
}