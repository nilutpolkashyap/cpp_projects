#include <iostream>
using namespace std;

class Student
{
	public:
		// class  data 
		string name;
		int id;

		// class member function - inside class declaration
		void print_id();

		// class member function - inside class definition
		void print_name()
		{
			cout << "Student Name : " << name << endl;
		}
};

// class member function - outside class defintion
void Student::print_id()
{
	cout << "Student ID : " << id << endl;
}

int main(int argc, char **argv)
{
	Student student1;

	student1.name = "Nilutpol";
	student1.id = 24;

	student1.print_name();
	student1.print_id();

	return 0;
}