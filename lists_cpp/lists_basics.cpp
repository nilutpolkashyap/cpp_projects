// C++ code to demonstrate the working of
// emplace(), emplace_front() and emplace_back()
#include<iostream>
#include<list> // for list functions
using namespace std;
int main()
{
	// Declaring a list
	list<int> gqlist;
	
	// Initialising list iterator
	list<int>::iterator it= gqlist.begin();
	
	// Entering list element using emplace_back()
	for (int i=1; i<=5; i++)
	gqlist.emplace_back(i);
	
	// Displaying list elements
	cout << "List after emplace_back operation is : ";
	for (int &x : gqlist) cout << x << " ";
	cout << endl;
	
	// Entering list element using emplace_front()
	for (int i=10; i<=50; i+=10)
	gqlist.emplace_front(i);
	
	// Displaying list elements
	cout << "List after emplace_front operation is : ";
	for (int &x : gqlist) cout << x << " ";
	cout << endl;
	
	// using advance() to advance iterator position
	advance(it,2);
	
	// inserting element at 2nd position using emplace()
	gqlist.emplace(it,100);
	
	// Displaying list elements
	cout << "List after emplace operation is : ";
	for (int &x : gqlist) cout << x << " ";
	cout << endl;
	
	return 0;
	
}
