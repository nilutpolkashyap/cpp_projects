#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    // while loop
    cout << "Use of for loop" << endl;
    for(int i =0; i < 10; i++)
    {
        cout << "Value : " << i << endl;
    }

    cout << "\n\nUse of while loop" << endl;

    int i = 0;
    while(i < 10)
    {
        cout << "value : " << i << endl;
        i++;
    }

    cout << "\n\nUse of do-while loop" << endl;

    i = 0;
    do{
        cout << "Value : " << i << endl;
        i++;
    }while(i<10);

    // rnage based for loops
    cout << "\n\nUse of range based for loops " << endl;
    int list[] = {5,96,1,47,33,17};
    for(auto c : list)
    {
        cout << "List element : " << c << endl;
    }

    string str = "Nilutpol";
    for (auto c : str)
    {
        cout << c << " ";
    }
    cout << endl;

    for (auto c : {7, 3, 1, 6, 4})
    {
        cout << c << "  ";
    }
    cout << endl;

}