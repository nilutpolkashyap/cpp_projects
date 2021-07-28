#include <iostream>
#include <string>      //header for string class
using namespace std;

//Typed constant expressions
const double pi (3.14);
const char newline ('\n');

//Preprocessor definitions (#define)
#define PI 3.14
#define NEWLINE '\n'

int main()
{
    cout << "Hello World! Welcome";

    //c-line initialization
    int a = 10;
    cout << "\na = " << a;
    cout << "\nSize of a : " << sizeof(a);
    cout << "\nType of a : " << typeid(a).name();

    //constructor initialization
    int b (13);
    cout << "\nb = " << b;
    

    //uniform initialization
    int c {8};
    cout << "\nc = " << c;

    char x ('m');
    cout << "\nx = " << x;

    float y (1.535616132);
    cout << "\ny = " << y;
    cout << "\nSize of y : " << sizeof(y);
    cout << "\nType of y : " << typeid(y).name();

    bool z (true);
    z = false;
    cout << "\n\nz = " << z;

    //string - sequence of characters 
    //endl - printing a newline character and flushing the stream
    string book  ("robotics");
    book = "probabilistic robotics";
    cout << "\nBook name = \t" << book << endl;

    string stra = "this is " "a " \
    "single " "line";
    cout << "stra = " << stra << endl;
    cout << NEWLINE;

    int i;
    float f {3.14};
    i = (int) f;
    cout << "\ni = " << i;

    //increment/decrement operator
    //int varx {14};
    //cout << "\nvarx = " << varx;
    //cout << "\nvarx++ = " << varx++;
    //cout << "\nvarx = " << varx;

    int varx {14};
    cout << "\nvarx = " << varx;
    cout << "\n++varx = " << varx++;
    cout << "\nvarx = " << varx;

    //logical operator
    bool val {true};
    cout << "\n\nvalue : " << val;
    cout << "\n!value : " << !val;

    a = (bool) a;
    b = (bool) b;
    a = true;
    b = false;
    cout << "\ntrue && false = " << a && b;
    cout << "\nfalse && false = " << !a && b;
    cout << "\n true && true = " << a && !b;


    //ternary operators
    int m {5}, n {7};
    int value;
    value = (m > n) ? 1 : 0;
    cout << "\n\n(5 > 7) ? yes : no = " << value << endl;

    int zip;
    cout << "Enter zipcode : " << endl;
    cin >> zip;
    cout << "Zipcode : " << zip << endl; 
}