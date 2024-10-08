//Mindy Chen
//Lab 5 part 2
//10.8.24


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double giga;
    char quality;

    cout <<"How many Gigabytes are in your monthly hotspot plan"<<endl;
    cin >> giga;

    double mega = giga * 1000;

    cout << "Type L to download low quality music, N for normal quality music and H for high quality music" <<endl;
    cin >> quality;

    //Sets the user input to the char quality

    switch(quality)
{
    case 'L':
        cout << fixed << setprecision(2) << mega / 43.2 << " hours per month" <<endl;
        break;
    case 'N':
        cout << fixed << setprecision(2) << mega / 72 << " hours per month" <<endl;
        break;
    case 'H':
        cout << fixed << setprecision(2) << mega / 115.2 << " hours per month" <<endl;
        break;
}

    //Outputs the aprroiate hours per month based on the letter the user inputs 

    return 0;
}
/*
How many Gigabytes are in your monthly hotspot plan
15
Type L to download low quality music, N for normal quality music and H for high quality music
H
130.21 hours per month
*/

