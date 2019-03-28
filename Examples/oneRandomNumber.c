#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 66

int main(){
    
    srand(time(0));

    int randomNumber;

    int a = 24;
    int b = 56;

    //mfksalmfæokasmfæsla fsal 
    //hej med dig.....f smakopfmsajo nfojpasjnfojp saojpf asoj foaj this is not compiled
    //rand()%(b-a+1) + a

    for(int i = 0; i < MAX; i++)
    {
        randomNumber = rand()%(b-a+1) + a;
        printf("%d ", randomNumber);
    }

    return 0;
}