#include <iostream>
using namespace std;

int sum(int , int , int , int);
float sum(float , float , float , float );
float sum(float, float, float);

int main()
{
    int a, b, c, d;

    cout << "\nsum(4,3,9,5) : " << sum(4,3,9,5);
    //cout << "\nsum(4,9) : " << sum(4,9);
    //cout << "\nsum(9.1, 4.5, 6.3) : " << sum(9.1, 4.5,6.3);
    cout << "\nsum(6.0,9.7,3.2) : " << sum(6 ,9 , 3.2, 6.5);

    cout << "\nsum(6.0,9.7,3.2) : " << sum(6.2 , 3.2, 6.5);

}

int sum(int w, int x, int y = 5, int z = 2)
{
    return (w +x+y+z);
}

float sum(float w, float x, float y, float z)
{
    return (w+x+y+z);
}

float sum(float a, float b, float c)
{
    return (a + b + c);
}

