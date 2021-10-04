#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> vec1;
    // cout << sizeof(vec1) << endl;

    for (auto i= 0; i < 6; i++)
    {
        vec1.push_back(i+3);
    }

    // Using range based for loop
    cout << "\nElements of vector are : ";
    for (auto i : vec1)
    {
        cout << i << " ";       // no star * operator
    }

    // using vector begin and end functions
    // begin() – Returns an iterator pointing to the first element in the vector
    // end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    cout << "\nUse of begin() and end() : ";
    for(auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";       // use of star * operator
    }

    // cbegin() – Returns a constant iterator pointing to the first element in the vector.
    // cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    cout << "\nUse of cbegin() and cend() : ";
    for (auto i = vec1.cbegin(); i != vec1.cend(); i++)
    {
        cout << *i << " ";
    }

    // rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    // rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cout << "\nUse of rbegin() and rend() : ";
    for (auto i = vec1.rbegin(); i != vec1.rend(); i++)
    {
        cout << *i << " ";
    }

    // crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    // crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cout << "\nuse of crbegin() and crend() : ";
    for (auto i = vec1.crbegin(); i != vec1.crend(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n"<< endl;

    cout << "Size of vec1 : " << vec1.size() << endl;
    cout << "Max size of vec1 : " << vec1.max_size() << endl;
    cout << "Capacity of vec1 : " << vec1.capacity() << endl;
    //  capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.

    // resize(n) – Resizes the container so that it contains ‘n’ elements.
    vec1.resize(5);
    cout << "New size of vec1 after resize() : " << vec1.size() << endl;

    cout << "\nNew elements of vec1 : " ;
    for(auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";

    if (vec1.empty() == true)
    {
        cout << "vec1 is empty" << endl;
    }    
    else{
        cout << "vec1 is not empty" << endl;
    }

    // shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    vec1.shrink_to_fit();
    cout << "\nCapacity after shrink_to_fit() : " << vec1.capacity() << endl;

    // reserve() – Requests that the vector capacity be at least enough to contain n elements.
    vec1.reserve(10);
    cout << "\nCapacity after reserve() : " << vec1.capacity() << "\n" << endl;

    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";

    cout << "\nusing size() : ";
    for(auto i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    return 0;
}