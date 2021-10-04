#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char ** argv)
{
    vector<int> vec1{1, 2, 3, 4};
    vector<int> vec2;

    cout << "vec1 : ";
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }

    for (auto i = 0; i < vec1.size(); i++)
    {
        vec2.push_back(vec1[i]);
    }

    cout<< "\nvec2 : ";
    for(auto i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}