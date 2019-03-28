#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    srand(time(0));

    int randomNumber;
    int a, b;

    scanf("%d", &a);

    printf("%d\n", a);

    scanf("%d", &b);

    printf("%d\n", b);

    randomNumber = rand()%(b-a+1) + a;

    printf("%d\n", randomNumber);

    int inputFromUser;

    do {

        printf("You have to guess a random number between %d and %d\n", a, b);
        printf("Number:\n");
        scanf("%d", &inputFromUser);
        
    } while ( randomNumber != inputFromUser );

    printf("You GUESSED RIGHT!!! CONGRATIOLATIONS!");

    return 0;
}