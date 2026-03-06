/*Create a Student class where the constructor has default parameters for name and age*/

#include <iostream>
using namespace std;

class Student{
    string name;
    int age;

    public:
    Student(string name ="Unknown", int age = 00){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};


int main() {
   Student S;
   Student V("Rohit",19);
   S.display();
   V.display();
    return 0;
}