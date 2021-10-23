#include <iostream>
using namespace std;

int main ()

{
    int num;
    
    cout <<"enter a number" <<endl;

    cin >> num;

    cout <<"num=" <<num <<endl;

    int mod;

    mod= num % 2;

    if ( mod == 0)

    {
        cout <<"even" <<endl;

    }
        else
    
    {
        cout <<"odd" <<endl;
        
    }
}