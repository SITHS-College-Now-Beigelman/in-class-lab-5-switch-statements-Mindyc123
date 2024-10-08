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
int direct;
int northTotal = 0;
int southTotal = 0;
int eastTotal = 0;
int westTotal = 0;

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
*/

    while (( eastTotal != 2 ) || ( northTotal != 3 ))
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
}
cout << "It took " << northTotal + southTotal + eastTotal + westTotal << " blocks to get to the destination" <<endl;





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