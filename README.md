# Rush Hour Game

This is a C++ project for the Programming Fundamentals (CS1002) course. The project is a single-player game called Rush Hour, where the player takes on the role of a taxi driver who must collect money by dropping passengers to their destinations.

## Features
- Game Start Menu: When the game starts, the user can view the leaderboard displaying the top 10 scores along with player names. The high-scores and player names are read from a file named `highscores.txt` on the hard-disk and stored in arrays of size 10.
- Taxi Selection: The game can be played using either a yellow or red taxi. The user can either assign the taxi color randomly or select it themselves.
- Player Name: Once the player has selected a taxi, they will enter their name.
- Board: A 20x20 board is drawn on the screen with two areas - roads (shown in white) and buildings (shown in black). Cars can be driven anywhere on the roads. The board consists of the player’s taxi, other cars, obstacles, and passengers. At the start of the game, the player’s taxi is at the top left corner of the board and other cars, obstacles, and passengers are randomly spread out on the board. The board always has at least 3 and at most 5 passengers waiting to be picked up.

## How to Run
1. Install required libraries by executing `bash install-libraries.sh`.
2. Compile the project by writing `make`.
3. Run the main file by executing `./game`.

