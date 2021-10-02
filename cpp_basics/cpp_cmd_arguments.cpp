#include <iostream>
using namespace std;
  
// argc - Argument Count - stores number of command-line arguments passed by the user
// argv - Argument vector - array of character pointers listing all the arguments.

int main(int argc, char** argv)
{
    // cout << "No of command line arguments entered : " << argc << endl;

    // for (int i = 0; i < argc; ++i)
    //     cout << argv[i] << "\n";
    
    if(argc == 1)
    {
        cout << "No command line arguments entered " <<endl;
        cout << "No of arguments : " << argc << endl;
    }  

    if ( argc > 1 )
    {
        cout << "No of arguments : " << argc << endl;

        cout << "Name of executable file is " << argv[0] << endl;

        cout << "Arguments passed are : " << endl;
        for(int i = 1; i < argc; i++)
        {
            cout << "argv [" << i << "] : " << argv[i] << endl;
        }
    }

    return 0;
}