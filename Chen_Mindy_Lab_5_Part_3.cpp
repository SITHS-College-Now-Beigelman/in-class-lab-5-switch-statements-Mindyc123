//Mindy Chen
//Lab 5 part 3
//10.8.24


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {



srand(time(0));
//int direct;
//int northTotal = 0;
//int southTotal = 0;
//int eastTotal = 0;
//int westTotal = 0;
int totalBlocks = 0;

/*for ( int i = 0; i <= 24; i++ )
{
    direct = rand() % 4 + 1;
    if ( direct == 1 )
        {
        northTotal = northTotal + 1;
        cout << northTotal << " blocks north from starting point" <<endl;
        }
    else if ( direct == 2 )
        {
        southTotal = southTotal + 1;
        cout << southTotal << " blocks south from starting point" <<endl;
        }
    else if ( direct == 3 )
        {
        eastTotal = eastTotal + 1;
        cout << eastTotal << " blocks east from starting point" <<endl;
        }
    else if ( direct == 4 )
        {
        westTotal = westTotal + 1;
        cout << westTotal << " blocks west from starting point" <<endl;
        }

        //For each direction the random genrator lands on it add 1 to the total of that direction
*/

    for (int i = 0; i < 10; i++) {  
        
        // Repeat 10 times
        
        int direct;
        int northTotal = 0, southTotal = 0, eastTotal = 0, westTotal = 0; 
        
        // Reset the total to 0 for each run

        while ((eastTotal != 2) || (northTotal != 3)) {
            direct = rand() % 4 + 1;
            if (direct == 1) {
                northTotal = northTotal + 1;
                cout << northTotal << " blocks north from starting point" << endl;
            } else if (direct == 2) {
                southTotal = southTotal + 1;
                cout << southTotal << " blocks south from starting point" << endl;
            } else if (direct == 3) {
                eastTotal = eastTotal + 1;
                cout << eastTotal << " blocks east from starting point" << endl;
            } else if (direct == 4) {
                westTotal = westTotal + 1;
                cout << westTotal << " blocks west from starting point" << endl;
            }
        }

        int blocks = northTotal + southTotal + eastTotal + westTotal; // Calculate blocks for this run
        totalBlocks = totalBlocks + blocks; // Add to the total blocks

        cout << "Run " << i + 1 << " took " << blocks << " blocks to get to the destination" << endl;
    }

    // Calculate and output the average number of blocks

    cout << "It took an average of " << totalBlocks / 10 << " blocks to get to the destination." << endl;

    return 0;
}

/*
1 blocks north from starting point
2 blocks north from starting point
1 blocks south from starting point
1 blocks west from starting point
3 blocks north from starting point
1 blocks east from starting point
2 blocks south from starting point
2 blocks west from starting point
3 blocks west from starting point
2 blocks east from starting point
3 blocks east from starting point
3 blocks south from starting point
4 blocks west from starting point
4 blocks south from starting point
5 blocks south from starting point
5 blocks west from starting point
4 blocks east from starting point
5 blocks east from starting point
4 blocks north from starting point
6 blocks south from starting point
6 blocks west from starting point
6 blocks east from starting point
5 blocks north from starting point
6 blocks north from starting point
7 blocks east from starting point
*/
/*
1 blocks south from starting point
1 blocks north from starting point
1 blocks east from starting point
2 blocks east from starting point
1 blocks west from starting point
2 blocks south from starting point
3 blocks south from starting point
2 blocks west from starting point
2 blocks north from starting point
3 blocks north from starting point
It took 10 blocks to get to the destination
*/
/*
1 blocks east from starting point
1 blocks north from starting point
1 blocks west from starting point
2 blocks west from starting point
2 blocks east from starting point
1 blocks south from starting point
2 blocks north from starting point
3 blocks west from starting point
4 blocks west from starting point
5 blocks west from starting point
3 blocks north from starting point
Run 1 took 11 blocks to get to the destination
1 blocks south from starting point
2 blocks south from starting point
3 blocks south from starting point
1 blocks east from starting point
2 blocks east from starting point
1 blocks west from starting point
2 blocks west from starting point
4 blocks south from starting point
5 blocks south from starting point
3 blocks west from starting point
1 blocks north from starting point
4 blocks west from starting point
2 blocks north from starting point
3 blocks north from starting point
Run 2 took 14 blocks to get to the destination
1 blocks north from starting point
2 blocks north from starting point
3 blocks north from starting point
1 blocks west from starting point
1 blocks east from starting point
2 blocks east from starting point
Run 3 took 6 blocks to get to the destination
1 blocks west from starting point
1 blocks east from starting point
1 blocks south from starting point
2 blocks west from starting point
3 blocks west from starting point
4 blocks west from starting point
1 blocks north from starting point
2 blocks north from starting point
3 blocks north from starting point
2 blocks east from starting point
Run 4 took 10 blocks to get to the destination
1 blocks south from starting point
1 blocks north from starting point
2 blocks south from starting point
2 blocks north from starting point
3 blocks north from starting point
1 blocks west from starting point
1 blocks east from starting point
2 blocks east from starting point
Run 5 took 8 blocks to get to the destination
1 blocks east from starting point
1 blocks north from starting point
1 blocks west from starting point
2 blocks west from starting point
2 blocks north from starting point
3 blocks north from starting point
2 blocks east from starting point
Run 6 took 7 blocks to get to the destination
1 blocks north from starting point
2 blocks north from starting point
3 blocks north from starting point
1 blocks east from starting point
2 blocks east from starting point
Run 7 took 5 blocks to get to the destination
1 blocks north from starting point
1 blocks west from starting point
2 blocks north from starting point
1 blocks east from starting point
2 blocks east from starting point
3 blocks north from starting point
Run 8 took 6 blocks to get to the destination
1 blocks north from starting point
1 blocks west from starting point
2 blocks north from starting point
1 blocks east from starting point
2 blocks east from starting point
3 blocks north from starting point
Run 9 took 6 blocks to get to the destination
1 blocks north from starting point
1 blocks east from starting point
2 blocks north from starting point
1 blocks west from starting point
3 blocks north from starting point
2 blocks west from starting point
2 blocks east from starting point
Run 10 took 7 blocks to get to the destination
It took an average of 8 blocks to get to the destination.
*/
