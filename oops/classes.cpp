#include <iostream>
using namespace std;

class MyClass
{
	public:
		string name;
		int num;

		void print_values()
		{
			cout << "Name : " << name << endl;
			// cout << "Num : " << num << endl;
		}

		void print_num();
};

void MyClass::print_num()
{
	cout << "Num : " << num << endl;
}

int main(int argc, char **argv)
{
	MyClass obj1;

	obj1.name = "Nilutpol";
	obj1.num = 24;

	obj1.print_values();
	obj1.print_num();

	return 0;
}