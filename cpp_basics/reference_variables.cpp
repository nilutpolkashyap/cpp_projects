#include <iostream>
#include <vector>
using namespace std;

void swap(int& first, int& second);

int main()
{
    int x = 10;
    int& y = x;         //y is reference variable of x

    cout << "x = " << x;
    x = 20;

    cout << "\nx = " << x;

    y = 30;

    cout << "\nx = " << x;

    cout << "\n\nSwapping variables using reference" ;
    int a {5}, b {8};

    cout << "\nBefore swap, a = " << a << " b = " << b;

    swap(a, b);

    cout << "\nAfter swap, a = " << a << " b = " << b;


    cout << "\n\nUse of vectors \n";
    vector<int> vect;

    for (auto i =1; i <= 5; i++)
    {
        vect.push_back(i*10);
    }    
    for (auto i : vect)
    {
        cout << i << " ";
    }
    cout << "\n";

    for(auto& i : vect)
    {
        i = i * 5;
        cout << i << " ";        
    }

    //use references in each loop to avoid a copy of individual objects when objects are large.  
    cout << "\n\nUse of Reference in string vectors\n";

    vector<string> strvect {"Hello", "Hi", "Hey"};

    for(const auto& x : strvect)
    {
        cout << x << " ";
    }

}

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}