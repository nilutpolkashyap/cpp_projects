#include <iostream>
using namespace std;

int sum(int w, int x, int y, int z);
int sum(int w, int x, float y, float z);

int main()
{
    int a, b, c, d;

    cout << "\nsum(3,8) : " << sum(3,8,4);
    cout << "\nsum(3,8,2,4) : " << sum(3,8,2,4);

    cout << "\nsum(6,9,3.2) : " << sum(6,9, 3.2, 6.5);

}

int sum(int w, int x, int y = 5, int z = 2)
{
    return (w +x+y+z);
}

int sum(int w, int x, float y = 3.4, float z= 7.3)
{
    return (w+x+y+z);
}