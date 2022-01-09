#include <iostream>
using namespace std;

class Parent1
{
    public:
        int x;

        void get_x()
        {
            cout << "Enter value of x " << endl;
            cin >> x;
        }
};

class Parent2
{
    public:
        int y;

        void get_y()
        {
            cout << "Enter value of y " << endl;
            cin >> y;
        }
};

class Child : public Parent1, public Parent2
{
    public:
        void info()
        {
            cout << "Code for Multiple Inheritance" << endl;
        }

        void print_sum()
        {
            cout << "Sum of x & y : " << x + y << endl;
        }
};

int main(int argc, char **argv)
{
    Child obj;

    obj.info();

    obj.get_x();
    obj.get_y();

    obj.print_sum();

    return 0;

}