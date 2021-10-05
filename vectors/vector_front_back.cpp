// CPP program to illustrate
// application Of front() and back() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector;
	myvector.push_back(8);
	myvector.push_back(7);
	myvector.push_back(6);
	myvector.push_back(5);
	myvector.push_back(4);
	myvector.push_back(3);
	myvector.push_back(2);
	myvector.push_back(1);

	// Vector becomes 1, 2, 3, 4, 5, 6, 7, 8

	if (myvector.front() > myvector.back()) {
		cout << myvector.front() - myvector.back();
	}
	else if (myvector.front() < myvector.back()) {
		cout << myvector.back() - myvector.front();
	}
	else
		cout << "0";
}
