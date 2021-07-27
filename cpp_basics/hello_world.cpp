#include <iostream>
#include <string>      //header for string class
using namespace std;

//Typed constant expressions
const double pi = 3.14;
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

    bool z (true);
    z = false;
    cout << "\nz = " << z;

    //string - sequence of characters 
    //endl - printing a newline character and flushing the stream
    string book  ("robotics");
    book = "probabilistic robotics";
    cout << "\nBook name = \t" << book << endl;

    string stra = "this is " "a " \
    "single " "line";
    cout << "stra = " << stra << endl;
    cout << NEWLINE;


}