/*Demonstrate accessing class members using a pointer to an object.*/

#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    
};


int main() {

    student s;
    student *p;

    p=&s;

    p->name="Rahul";
    p->age = 20; 
    p->display();
    
    return 0;
}