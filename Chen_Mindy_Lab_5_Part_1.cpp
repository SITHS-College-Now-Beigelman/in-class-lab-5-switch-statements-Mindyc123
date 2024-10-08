//Mindy Chen
//Lab 5 part 1
//10.8.24

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double minute;
    double weight;
    double caloriesWantBurn;
    char calories;
 
    cout <<"Input exercise duration in minutes:"<< endl;
    cin >> minute;
    cout <<"Input weight in kilograms:"<< endl;
    cin >> weight;

    cout << "Type A to walk slowly, B to walk quickly or C to jog" <<endl;
    cin >> calories;

    switch(calories)
    {
    case 'A':
        cout << minute * (2 * 3.5 * weight) /200 << " calories burned" << endl;
        break;
    case 'B':
        cout << minute * (3 * 3.5 * weight) /200 << " calories burned" << endl;
        break;
    case 'C':
        cout << minute * (8.8 * 3.5 * weight) /200 << " calories burned" << endl;
        break;
    }



    cout <<"How many calories do you want to burn?"<< endl;
    cin >> caloriesWantBurn;
    cout<<"______________________________________________"<<endl;
    cout<<"_______________|Minutes to Burn " << caloriesWantBurn << " calories" << endl;
    cout<<"Walking Slowly |"<< caloriesWantBurn / (2 * 3.5 * weight) * 200 << " minutes"<<endl;
    cout<<"_______________|______________________________"<<endl;
    cout<<"Walking Quickly|"<< caloriesWantBurn / (3 * 3.5 * weight) * 200 << " minutes"<<endl;
    cout<<"_______________|______________________________"<<endl;
    cout<<"Jogging        |"<< caloriesWantBurn / (8.8 * 3.5 * weight) * 200 << " minutes"<<endl;
    cout<<"_______________|______________________________"<<endl;
           


    return 0;

}