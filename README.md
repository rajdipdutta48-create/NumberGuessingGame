Number Guessing Game (C++)

A console-based number guessing game where the player has 5 attempts to guess a randomly generated number between 1 and 100. Each guess unlocks a unique clue — ranging from parity checks to a custom primality test — layered on top of standard greater/lesser feedback, along with a position-based scoring system that rewards earlier correct guesses.

Features
Randomized target number — a new number between 1–100 is generated each round using a seeded RNG, so no two playthroughs are the same.
Progressive clue engine — every guess gives a different type of hint:
Guess 1: whether the target is composite (via a custom prime() function)
Guess 2: whether the target is even or odd
Guess 3: a range-narrowing hint (above/below the midpoint)
Guesses 4–5: a fun fixed clue (Sam Curran's jersey number)
Position-based scoring — guessing correctly earlier earns more points (5 points for guess 1, down to 1 point for guess 5).
Replay support — play multiple rounds in a single session without restarting the program.
Input safety — the target number is re-initialized correctly each round, so scoring stays accurate even on repeat plays.
How to Build & Run

Requires a C++ compiler (g++ recommended).

bash
g++ -std=c++17 -Wall number_guessing_game.cpp -o guess_game
./guess_game
How to Play
Enter your name when prompted.
You get 5 guesses to find a hidden number between 1 and 100.
After each guess, you'll be told if your guess is Greater or Lesser than the target, plus a bonus clue.
Guess correctly to score points — the earlier you guess, the more points you earn:
Guess #	Points
1	5
2	4
3	3
4	2
5	1
After the round, choose whether to play again (Y) or exit (N).
Example
Enter Your name: Rajdip

Welcome new user Rajdip

Enter your 1nd guess: 50
Lesser
Yes, the number is composite but you need to subtract more
Enter your 2st guess: 30
Greater
The number is even
...
Congrats Rajdip You guessed correctly

Rajdip ,here is your point details:
Rajdip You have answerd correctly in your 3th guess
so your point is: 3

Do you want to play again(Type Y for Yes and N for No)?: N
Thank you Rajdip for playing the game
