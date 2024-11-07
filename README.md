
# Number Guessing Game

This is a simple Number Guessing game built in C. The objective of the game is to guess a randomly generated number between 1 and 100. After each guess, the program provides hints to help the player guess correctly.

## How It Works

1. The program generates a random number between 1 and 100 using the current time as a seed for randomness.
2. The player is prompted to enter guesses.
3. After each guess:
   - If the guess is too high, the program suggests trying a lower number.
   - If the guess is too low, the program suggests trying a higher number.
4. When the player guesses the correct number, the program congratulates them and displays the total number of attempts.

## Getting Started

### Prerequisites

- A C compiler like GCC (GNU Compiler Collection)

### Compiling the Game

To compile the program, run the following command in the terminal:

```bash
gcc -o number_guessing_game number_guessing_game.c
```

### Running the Game

After compiling, you can run the game with:

```bash
./number_guessing_game
```

## Code Explanation

The core of the game consists of:

1. **Random Number Generation**: Uses `srand(time(0))` to seed the random number generator, ensuring a different number each run.
2. **User Input and Feedback**: `scanf("%d", &guess);` captures the player's guess, and conditional statements (`if` and `else`) provide feedback based on the guess.
3. **Guess Counter**: Tracks the number of attempts taken to guess correctly.

## Sample Output

```
Guess the Number: 50
Higher number, please

Guess the Number: 75
Lower number, please

Guess the Number: 60
Congratulations!!
Your number of guesses: 3
```

## Author

Paras Jain
