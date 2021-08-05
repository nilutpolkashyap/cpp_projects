#include <iostream>
#include <string>
using namespace std;

int main()
{
    //c-style string
    char str1[] = "Hello";
    cout << str1 << endl;

    //use of string class
    string str2 = "Hello world";
    cout << str2 << endl;

    string str3("Good day");
    cout << str3 << endl;

    string str4(str2);
    cout << str4 << endl;

    // initialization by character with number of occurrence
    string str5(5, 'i');
    cout << "str5(5, 'i') : " << str5 << endl;

    // initialization by part of another string
    str2 = "Welcome everyone";
    cout << "str : " << str2 << endl;
    string str6(str2, 3,9);
    cout << "Part initialized string : " << str6 << endl;


}