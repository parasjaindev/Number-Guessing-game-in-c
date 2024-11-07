#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main() {
 // Seed the random number generator with the current time
 srand(time(0)); 
 
 // Generate a random number between 1 and 100
 int randomNumber = (rand() % 100) + 1; 
 int guess; // Variable to store the user's guess
 int num = 0; // Counter to track the number of guesses
 // Loop until the user guesses the correct number
 do {
 // Prompt the user to enter a guess
 printf("Guess the Number: ");
 scanf("%d", &guess); // Read the user's guess
 // Compare the guess with the random number
 if (guess > randomNumber) {
 // If the guess is higher than the random number, give feedback
 printf("\nLower number, please\n");
 } else if (guess < randomNumber) {
 // If the guess is lower than the random number, give feedback
 printf("\nHigher number, please\n");
 } else {
 // If the guess is correct, congratulate the user
 printf("Congratulations!!\n");

 }
 num++; // Increment the guess counter
 } while (guess != randomNumber); // Continue the loop until the correct guess is made
 
 // After the loop ends, display the total number of guesses
 printf("Your number of guesses: %d\n", num);
}