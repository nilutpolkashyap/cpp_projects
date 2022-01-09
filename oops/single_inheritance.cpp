#include <iostream>
using namespace std;

class Parent
{
    public:
        int x;
        
        void get_x()
        {
            cout << "Enter value of x " << endl;
            cin >> x;
        }
};

class Child : public Parent
{
    private:
        int y;

    public:
        void get_y()
        {
            cout << "Enter value of y " << endl;
            cin >> y;
        }

        void product()
        {
            cout << "Product of x & y : " << x * y << endl;
        }
};

int main(int argc, char **argv)
{
    Child obj;

    obj.get_x();
    obj.get_y();

    obj.product();

    return 0;
}