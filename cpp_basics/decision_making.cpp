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


    return 0;
}