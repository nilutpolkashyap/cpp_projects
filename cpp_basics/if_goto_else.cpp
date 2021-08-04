#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    if (i)
    {
        dest_1 : cout << "\nBody of if\n";

        goto dest_2;
    }

    else{
        goto dest_1;

        dest_2 : cout << "\nBody of else\n";
    }
}