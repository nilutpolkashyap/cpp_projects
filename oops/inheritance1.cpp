#include <iostream>
using namespace std;

class ParentClass
{
    public:
        int p_id;
};

class ChildClass : public ParentClass
{
    public:
        int c_id;

        void print_values()
        {
            cout << "ParentClass ID : " << p_id << endl;
            cout << "ChildClass ID : " << c_id << endl;
        }
};

int main(int argc, char **argv)
{
    ChildClass obj1;

    obj1.p_id = 100;
    obj1.c_id = 30;

    obj1.print_values();

    return 0;
}