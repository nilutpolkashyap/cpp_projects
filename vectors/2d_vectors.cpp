/* Vectors belong to a C++ library
called STL so we need to import
it first! */
#include <vector>
using namespace std;
int main()
{
	/*
	In the case of a normal vector we initialize it as:
	
	1. vector<datatype> variable_name
	
	Now in the case of a 2D vector all we do is create
	a vector of datatype vector.
	
	We simply replace "datatype" with "vector<int>":
	
	1. vector<vector<int>> variable_name
	
	That's literally it! We just created a 2D vector!
	On line 23 below we declare an actual 2D vector
	named "vect".
	*/
	
	vector<vector<int>> vect;

	return 0;
}
