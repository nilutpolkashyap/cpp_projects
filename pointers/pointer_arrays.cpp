#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int *ptr;
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        arr[i] = i*i + 1;
        cout << "arr " << i << " : " << arr[i] << endl;
    }

    cout << "\nUsing & operator : " << endl;
    for (int i = 0;i < 5; i++)
    {
        cout << "Address of " << arr[i] <<  " (&arr[i]) : " << &arr[i] << endl;
    }

    ptr = arr;

    cout << "\nUsing pointers " << endl;
    cout << "\n\nValues :-> " << endl;
    cout << "0 : " << *ptr << endl;
    cout << "1 : " << *(ptr+1) << endl;
    cout << "2 : " << *(ptr+2) << endl;
    cout << "3 : " << *(ptr+3) << endl;
    cout << "4 : " << *(ptr+4) << endl;

    cout << "\nAddress :-> " << endl;
    cout << "0 : " << ptr << endl;
    cout << "1 : " << (ptr+1) << endl;
    cout << "2 : " << (ptr+2) << endl;
    cout << "3 : " << (ptr+3) << endl;
    cout << "4 : " << (ptr+4) << endl;

    cout << "\n";
    int* ptr2;
    ptr2 = &arr[2];
    cout << "&arr[2] : ptr2 : " << ptr2 << endl;
    cout << "arr[2] : *(ptr2) : " << *(ptr2) << endl;

    cout << "&arr[1] : (ptr2 - 1) : " << (ptr2 - 1) << endl;
    cout << "arr[1] : *(ptr2 - 1) : " << *(ptr2 - 1) << endl;

    cout << "&arr[3] : (ptr2 +1) : " << (ptr2 + 1) << endl;
    cout << "arr[3] : *(ptr2 +1) : " << (ptr2 + 1) << endl;

    return 0;

}