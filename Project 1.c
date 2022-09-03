/*          Project 1: Number Guessing Game

Problem:
		We will write a program that generates a random number and asks the player to guess it.
If the player’s guess is higher than the actual number,
the program displays “Lower number please.” Similarly,
if the user’s guess is too low,
    the program prints “Higher number please.”

When the user guesses the correct number,
 the program displays the number of guesses the player used
 to arrive at the number.*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>

 int main()
 {
     int num , guess , n=1;
     srand(time(0));
     num= rand()%100+1; // Generates a random number between 1 & 100
    // printf("The number is %d ", num);
     //Keep running the loop until the number is guessed
     do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>num){
            printf("Lower number please!\n");
        }
        else if(guess<num){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts \n",n);
        }
       // n++;
     }while(guess!=num);
     return 0;
 }



 
