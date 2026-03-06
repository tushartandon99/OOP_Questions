/*Write a program that defines a struct Student and a class StudentClass. Show the difference
in default access specifiers by trying to access members directly.*/
#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    float marks;
};

class student_class{
    public://as default private rehta hai
        string name;
        int age;
        float marks;
};


int main() {

    //structure classification 
    student s1;

    s1.name = "Rahul";
    s1.age = 20;
    s1.marks = 85.5;
    // this will print as structure me default access public rehta hai 
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    student_class s2;
    s2.name = "Tarun";
    s2.age = 17;
    s2.marks = 93.4;

    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Marks: " << s2.marks << endl;


    return 0;
}