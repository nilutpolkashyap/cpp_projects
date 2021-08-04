#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {5,3,8,7,1};

    for(auto i : arr1)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    arr1[5/2] = 12;
    arr1[4] = 15;

    for (auto i : arr1)
    {
        cout << i << " ";
    }
    cout << "\n\n";


}