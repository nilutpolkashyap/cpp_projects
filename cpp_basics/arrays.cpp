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

    cout << arr1;
    cout << "\n";
    cout << arr1 +3;

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Value : " << arr1[i] << " Index : " << i << " Address : " << & arr1[i] << endl;

    }
}