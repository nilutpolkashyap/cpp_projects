#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int var1 (24), var2 (5);
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    cout << "\nUsing '&' operator " << endl;
    cout << "address of var1 (&var1) = " << &var1 << endl;
    cout << "address of var2 (&var2) = " << &var2 << endl;

    int *pointer1;
    int* pointer2;      // preferred syntax

    pointer1 = &var1;
    pointer2 = &var2;

    cout << "\nUsing Pointers" << endl;
    cout << "value of var1 (*pointer1) : " << *pointer1 << endl;
    cout << "address of var1 (pointer1) : " << pointer1 << endl;
    cout << "value of var2 (*pointer2) : " << *pointer2 << endl;
    cout << "address of var2 (pointer2) : " << pointer2 << endl;


    // changing value of variable using pointers
    *pointer1 = 7;
    *pointer2 = 15;

    cout << "\nUpdated values " << endl;
    cout << "value of var1 : " << var1 << endl;
    cout << "value of var2 : " << var2 << endl;

    return 0;
}