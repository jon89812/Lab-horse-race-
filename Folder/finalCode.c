#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function Prototypes
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() {
    
    srand(time(NULL));

    
    int horses[5] = {0, 0, 0, 0, 0};

    // Main race loop
    while (true) {
       
        for (int i = 0; i < 5; i++) {
            printLane(i, horses);
        }

        // 2. Check if any horse has won
        bool raceOver = false;
        int winningHorse = -1;
        for (int i = 0; i < 5; i++) {
            if (isWinner(i, horses)) {
                raceOver = true;
                winningHorse = i;
                break; 
            }
        }

        // If someone won, announce it and end the game
        if (raceOver) {
            cout << "Horse " << winningHorse << " WINS!!!" << endl;
            break;
        }

        // 3. 
        cout << "Press enter for another turn";
        cin.get(); 

        // 4. Advance each horse for the next turn
        for (int i = 0; i < 5; i++) {
            advance(i, horses);
        }
    }

    return 0;
}

// Function Definitions

void advance(int horseNum, int* horses) {
    

    int coin = rand() % 2; 
    if (coin == 1) {
        horses[horseNum]++;
    }
}

void printLane(int horseNum, int* horses) {
 
    for (int i = 0; i < 15; i++) {
        if (i == horses[horseNum]) {
            cout << horseNum;
        } else {
            cout << ".";
        }
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses) {
    if (horses[horseNum] >= 14) {
        return true;
    }
    return false;
}
