#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n, guess, choice=1;
    srand(time(0));
    n = rand()%100 + 1;
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess > n){
            printf("Lower number please\n");
        }
        else if(guess < n){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed it in %d attempts\n", choice);
        }
        choice++;
    }
    while(guess!=n);

    return 0;
}