#include <iostream>
using namespace std;

class GrandParent
{
    public:
        string g_name;

        void get_gname()
        {
            cout << "Enter name of Grand Parent " << endl;
            cin >> g_name;
        }
};

class Parent : public GrandParent
{
    public:
        string p_name;
        
        void get_pname()
        {
            cout << "Enter nameHeman of Parent " << endl;
            cin >> p_name;
        }
};

class Child : public Parent
{
    public:
        string c_name;

        void info()
        {
            cout << "Code for Multilevel Inheritance" << endl;
        }

        void get_cname()
        {
            cout << "Enter name of child" << endl;
            cin >> c_name;
        }

        void display()
        {
            cout << "Name of Grandparent : " << g_name << endl;
            cout << "Name of Parent : " << p_name << endl;
            cout << "Name of Child : " << c_name << endl;
        }
};

int main(int argc, char **argv)
{
    Child obj;
    obj.info();

    obj.get_gname();
    obj.get_pname();
    obj.get_cname();

    obj.display();

    return 0;
}