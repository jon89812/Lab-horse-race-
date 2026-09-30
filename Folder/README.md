#Algorithm

HORSE RACE ALGORITHM

DATA STRUCTURE:
- horses[5]: Array of 5 integers initialized to {0, 0, 0, 0, 0} to track positions.

FUNCTIONS:

1. advance(int horseNum, int* horses):
   - Generate a random coin flip: coin = rand() % 2.
   - If coin == 1, increment horses[horseNum] by 1.

2. printLane(int horseNum, int* horses):
   - Loop 'i' from 0 to 14:
     - If 'i' equals horses[horseNum], print the horseNum.
     - Else, print '.'.
   - Print a newline.

3. isWinner(int horseNum, int* horses):
   - If horses[horseNum] >= 14, return true.
   - Else, return false.

MAIN PROGRAM:
1. Seed random generator: srand(time(NULL)).
2. Initialize horses array.
3. Start infinite loop (while true):
   - Print all lanes by looping 'i' from 0 to 4 and calling printLane(i, horses).
   - Check for a winner by looping 'i' from 0 to 4:
     - If isWinner(i, horses) is true, print winner message and break loop.
   - Prompt user: "Press enter for another turn" and wait with cin.get().
   - Advance all horses by looping 'i' from 0 to 4 and calling advance(i, horses).
