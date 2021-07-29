#include <iostream>
using namespace std;

void calculation(float a, float b)
{
    float sum = a + b;
    float sub = a - b;
    float prod = a * b;
    float div = a / b;
    int rem = ((int) a) % ((int) b);

    string calc[] = {"Sum = ", "Sub = ", "Prod = ", "Div  = ", "Rem = "};

    cout << calc[0] << sum << "\n" << calc[1] << sub << "\n" << calc[2] << prod << "\n" << calc[3] << div << "\n" << calc[4] << rem << "\n";
}

int main()
{
    cout << "Enter two numbers : ";
    float num1, num2;
    cin >> num1 >> num2;

    calculation(num1, num2);
    
}