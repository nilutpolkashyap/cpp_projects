#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i = 24;
    if( i == 24)
    {
        cout << "Hey Nilutpol here" << endl;
    }

    int num;
    cout << "\n\nEnter a number : " << endl;
    cin >> num;
    if( num >0)
    {
        cout << "The number is positive " << endl;
    }
    else if (num < 0)
    {
        cout << "The number is negative" << endl;
    }
    else
    {
        cout << "The number is zero" << endl;
    }


    // Execute both if and else statements in C/C++ simultaneously
    cout << "\n\n";
    if(1)
    {
        label1 : cout << "Hello from if" << endl;

        goto label2;
    }
    else 
    {
        goto label1;

        label2 : cout << "Hello from else" << endl;
    }

    // use pf switch statements
    cout << "\n\nUse of switch case" << endl;
    cout << "Choose an option (a, b, c, d) : " << endl;
    char ch;
    cin >> ch;

    switch(ch)
    {
        case 'a': 
            cout << "Your answer is apple." << endl;
            break;

        case 'b':
            cout << "Your answer is banana." << endl;
            break;

        case 'c':
            cout << "Your answer is chicken." << endl;
            break;

        case 'd':
            cout << "Your answer is donut." << endl;
            break;

        default:
            cout << "LOL!!! You should have chosen wisely" << endl;
    }



    return 0;
}