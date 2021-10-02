// It is not recommended to put function definitions
// in a header file. Ideally there should be only
// function declarations. Purpose of this code is
// to only demonstrate working of header files.

#include <iostream>
using namespace std;

void add(int a, int b)
{
	cout << "Added value : " << a + b << endl;
}

void multiply(int a, int b)
{
	cout << "Multiplied value : " << a * b << endl;
}
