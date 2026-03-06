/*Demonstrate how a destructor is called when objects go out of scope by printing a message*/

#include <iostream>
using namespace std;

class Demo
{
public:

    // Constructor
    Demo()
    {
        cout << "Constructor called (Object created)" << endl;
    }

    // Destructor
    ~Demo()
    {
        cout << "Destructor called (Object destroyed)" << endl;
    }
};

int main()
{
    cout << "Entering main()" << endl;

    Demo d1;   // object created

    {
        Demo d2;   // object created in inner block
        cout << "Inside block" << endl;
    }   // d2 goes out of scope → destructor called

    cout << "Back in main()" << endl;

    return 0;
}   // d1 goes out of scope → destructor called