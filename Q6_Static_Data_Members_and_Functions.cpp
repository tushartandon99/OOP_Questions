/*Implement a Counter class with a static data member that counts how many objects have
been created.*/
#include <iostream>
using namespace std;

class counter{
    public:
    static int count;

    counter(){
        count++;
    }
    
};
 int counter::count=0;


int main() {
    counter c1;
    counter c2;
    counter c3;
    counter c4;
    counter c5;
    counter c6;

    cout << "Total objects created: " << counter::count << endl;

    return 0;
}