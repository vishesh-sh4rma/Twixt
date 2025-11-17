Twixt Game Phase 1 submition:
Name: Vishesh Sharma
Roll Number: 2025113012

This repo includes 6 files:
1. Makefile - Compiles all the .c and .h files.
2. board.c - Has functions to initialize the board at the start of the game and place pegs at valid positions. 
3. board.h - Header file for board.
4. main.c - main .c file that runs the game.
5. ui.c - Displays the current state of the board.
6. ui.h - Header file for ui

To compile:
1. Download this repo as a zip file and extract at a place where Make and GCC/GDB are installed
2. Open a terminal window inside folder
3. type make and press enter
4. type ./twixt and press enter

To play:
(since this is phase 1 submission, I have only added functionality to take inputs and display the pegs based on the current player's turn)
1. enter <row> <column> when prompted
2. RED cannot play on right and left edge
3. BLACK cannot play on top and bottom edge
4. to exit - press -1 and enter. Press any key and press enter again.

Note: there is a chance that the Makefile appears as a txt file, in which case you will have to copy the contents of the file and save it inside a new Makefile and then run the program.

