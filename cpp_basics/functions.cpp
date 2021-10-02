#include <iostream>
using namespace std;

float add(float a, float b)
{
    float temp = a + b;
    return temp;
}

float diff(float a, float b)
{
    float temp = a - b;
    return temp;
}

float mult(float a, float b)
{
    auto temp = a * b;
    return temp;
}

float divi(float a, float b)
{
    auto temp = a / b;
    return temp;
}

int remin(int a, int b)
{
    int temp = a % b;
    return temp;
}

void calculation(float a, float b)
{
    float sum = add(a,b);
    float sub = diff(a, b);
    float prod = mult(a,b);
    float div = divi(a, b);
    int rem = remin(((int) a), ((int) b));


    string calc[] = {"Sum = ", "Sub = ", "Prod = ", "Div  = ", "Rem = "};

    cout << calc[0] << sum << "\n" << calc[1] << sub << "\n" << calc[2] << prod << "\n" << calc[3] << div << "\n" << calc[4] << rem << "\n";
}

void print_intro()
{
    cout << "This is a simple calculator!\n";
}

void call_by_reference (int& a, int& b, int& c)
{
    a*=3;
    b*=2;
    c*=7;
}

void concat(const string& a,  const string& b)
{
    string temp {"oh"};
    //a.append(temp);
    //b.append(temp);

    /*By qualifying them as const, the function is forbidden to modify 
    the values of neither a nor b, but can actually access their values as references*/
}

inline int cube(const int num)
{
    return num * num * num;
}

//default values in parameters 
int addit(int a = 4, int b = 5)
{
    int res;
    res = a * b;
    return res;
}

//function prototypes
void odd(int x);
void even(int x);


int main()
{
    print_intro();
    cout << "Enter two numbers : ";
    float num1 {5.2}, num2 {3.6};
    //cin >> num1 >> num2;

    calculation(num1, num2);

    //use of pass by reference in function parameters
    int a {10}, b {4}, c{7};
    cout << "\na = " << a << " b = " << b << " c = " << c << endl;
    cout << "After function call" << endl;
    call_by_reference(a, b, c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl;

    string str1 {"Hello"};
    string str2 {" World"};
    string str3;
    
    cout << "str1 = " << str1 << "  str2 = " << str2 << endl;
    cout << "\nAfter funciton call" << endl;
    concat(str1, str2);
    cout << "str1 = " << str1 << " str2 = " << str2 << endl;

    //inline function
    int d {3};
    cout << "\nd = " << d << endl;
    cout << "Using inline funtion, cube of d = " << cube(d) << endl;

    cout << "\na and b default : " << addit() << endl;
    cout << "a = 7 : " << addit(3) << endl;
    cout << "a = 2 & b = 8 : " << addit(2,8) << endl;


    //demo of use of function prototypes
    int i;
    do{
        cout << "\nEnter any integer (0 to exit) : " ;
        cin >> i;
        odd(i);
    } while(i != 0);

}

void odd(int x)
{
    if (x%2 != 0)
        cout << "\nIt is an odd number";
    else
        even(x);

}

void even(int x)
{
    if (x%2 == 0)
        cout << "\nIt is an even number";
}