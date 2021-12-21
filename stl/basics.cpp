#include <iostream>
// iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.
#include <string>      //header for string class
#include <sstream>      //for using stringstream
#include <map>          //for using MAP
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
    cout << "\nBook name = \t" << book << endl;
    book = "probabilistic robotics";
    cout << "\nBook name = \t" << book << endl;

    string stra = "this is " "a " \
    "single " "sentence" \
    " written" " over " \
    "multiple lines";
    cout << "stra = " << stra << endl;
    cout << NEWLINE;

    int i;
    float f {3.14};
    i = (int) f;
    cout << "\ni = " << i << endl;

    //increment/decrement operator
    int varx {14};
    cout << "\nvarx = " << varx;
    cout << "\nvarx++ = " << varx++;
    cout << "\nvarx = " << varx;
    cout << NEWLINE;

    int vary {14};
    cout << "\nvary = " << vary;
    cout << "\n++vary = " << vary++;
    cout << "\nvary = " << vary;

    //logical operator
    bool val {true};
    cout << "\n\nvalue : " << val;
    cout << "\n!value : " << !val;
    cout << NEWLINE;

    a = (bool) a;
    b = (bool) b;
    a = true;
    b = false;
    cout << "\ntrue && false = " << a && b;
    cout << "\nfalse && false = " << !a && b;
    cout << "\ntrue && true = " << a && !b;


    //ternary operators
    int m {5}, n {7};
    int value;
    value = (m > n) ? 1 : 0;
    cout << "\n\n(5 > 7) ? yes(1) : no(0) = " << value << endl;
    cout << NEWLINE;

    int zip;
    //cout << "Enter zipcode : " << endl;
    //cin >> zip;
    //cout << "Zipcode : " << zip << endl; 

    string fullname;
    //cout << "Enter  full name : ";

    cin.sync();

    //getline(cin, fullname);
    //cout << "Full Name : " << fullname << endl;

    cerr << "This is a error output stream." << endl;

    clog << "This a logging output stream. " << endl;

    cout << NEWLINE;
    string pricestr;
    cout << "Enter Price : ";
    getline(cin, pricestr);
    int priceint;
    stringstream(pricestr) >> priceint;
    cout << "Price = " << priceint << endl;

    if (priceint > 100)
    {
        cout << "Price is greater than 100" << endl;
    }
    else if (priceint < 100)
    {
        cout << "Price is less than 100" <<endl;
    }
    else if (priceint == 100)
    {
        cout << "Price is exact 100" << endl;
    }
    cout << NEWLINE;

    //while loop
    cout << "Starting countdown!!!" << endl;
    n = 10;
    while (n >= 0)
    {
        cout << "\nCountdown: " << n;

        if (n == 0)
        {
            cout << "\nHere we go!! TAKEOFF!!!";
        }

        --n;
    } 
    

    //do-while loop
    cout << "\n\nCounting till 4 ";
    m = 10;
    do {
        if(m == 10)
        {
            cout << "\nFirst Statement at " << m;
        }
        cout << "\nNumber is  " << m;
    }while(m-- > 4);
    cout << "\n\n";

    //for loop
    for(int i = 0; i <= 10; i+=2)
    {
        cout << "Value of i : " << i << endl;
    }
    cout << "LiftOFF!!";
    cout << "\n\n";


    // important ***********************************************************************************
    for(n=0, i =100; n !=i; ++n, --i)
    {
        cout << "\n( n = " << n << " i = " << i << " )";
    }

    cout << NEWLINE;
    //range based for loop *************************************************************************
    cout << "\nUse of Range based for loop " << endl;
    int arr[] = {23,3, 64, 34, 6, 44};
    for(auto a : arr)
    {
        cout << "\nvalue : " << a;
    }

    cout << "\n\n";

    string str = "nilutpol";
    for (auto c : str)
    {
        cout << c << " ";
    }

    cout << "\n\n";

    // Printing keys and values of a map
    // Maps are associative containers that store elements in a mapped fashion
    std::map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
    {
        std::cout << '{' << i.first << ", " << i.second << "}\n";
    }

    cout << "\n\nUse of break statement";

    //break statement
    for (auto i = 0; i< 10; i++)
    {
        if (i == 6)
            break;

        cout << i << " ";
    }

    cout << "\n\nUse of continue statement";

    //continue statement
    for(auto i = 0; i < 10; i++)
    {
        if((i == 3) || (i ==7))
            continue;
        cout << i << " ";
    }

    cout << "\n\nUse of goto statement\n";
    n = 10;
    justgothere:
        cout << n << ", ";
    n--;
    if (n > 0)
        goto justgothere;
    cout << "Liftoff!!!";

    cout << "\n\n";

    //switch statement
    string item {"0"};
    //cout << "Enter an item number (book-32, pen-6, laptop-76, phone-13) : ";
    //getline(cin, item);
    int num_item;
    stringstream (item) >> num_item;
    //cout << "Item entered : " << item;
    switch (num_item)
    {
        case 32:
            cout <<"\nYou are reading a book" << endl;
            break;
        case 6:
            cout <<"\nYou are using a pen" << endl;
            break;
        case 76:
            cout << "\nYou are working on your laptop" << endl;
            break;
        case 13:
            cout << "\nYou are using your phone" << endl;
            break;
        default:
            cout << "\nWhat are you doing!!! I am confused!!" << endl;
    }

}