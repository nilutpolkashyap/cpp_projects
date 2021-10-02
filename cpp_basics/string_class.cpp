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
    cout << "Part initialized string : " << str4 << endl;
    cout << "\n";

    //use of begin() 
    string str7(str2.begin()+3, str2.begin()+12);
    cout << "using begin() : " << str7 << endl;

    int num = str2.length();
    cout << "Length of " << str2 << " using length() : " << num << endl;

    num = str2.size();
    cout << "Length of " << str2 << " using size() : " << num <<endl;

    cout << "3rd character of " << str2 << " is : " << str2.at(2) << endl;

    cout << "first character of " << str2 << " : " << str2.front() << endl;
    cout << "last character of " << str2 << " : " << str2.back() << endl;

    cout << " fifth";

    cout << "\n";
    str4.clear();       // clear function deletes all character from string
    
    cout << "string : " << str4 ;


}