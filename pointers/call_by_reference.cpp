#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(int argc, char **argv)
{
    int a (12), b (4);

    cout << "Before swapping : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a,b);

    cout << "After swapping using pointers : " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}