#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define SIZE 10

int main(){

    srand( time(0) );

    //rand()%(b-a+1) + a
    int tal = 0;

    int randomNumbersArray[SIZE] = {0};

    for(int i = 0; i < SIZE; i++)
    {
        tal = rand()%(20-5+1) + 5;
        randomNumbersArray[i] = tal;
    }
    // nu er array fyldt med random tal mellem 5 og 20

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ",randomNumbersArray[i]);
    }
    char test;
    scanf("%c", &test);

    return 0;
}