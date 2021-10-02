#include <iostream>

#define LIMIT 10
//macros - Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code.

#define AREA(arg1, arg2) (arg1 * arg2 * arg2)
//macros with arguments - Macros defined with arguments works similarly as functions.

#include "user_defined_header.h"
//This type of preprocessor directive tells the compiler to include a file in the source code program. 

using namespace std;

int main(int argc, char **argv)
{
    for(int i = 0; i < LIMIT; i++)
    {
        cout << "Value : " << i << endl;
    }

    float radius;
    cout << "Enter radius of circle : " << endl;
    cin >> radius;

    float pi = 3.14;

    float area = AREA(pi,radius);

    cout << "Area : " << area << endl;


    cout << "\n\nUsing user defined header" << endl;

    int a = 5, b = 9;
    add(a, b);

    multiply(a,b);

    return 0;
}