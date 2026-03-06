/*Write a program that creates an array of Employee objects and displays their details.*/

#include <iostream>
using namespace std;

class Employee{
    int id;
    string name;
    float salary;

    public:
    void setData(){
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display(){
        cout << "----------------------" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};


int main() {
    int n;
    cout<<"No of employee :";
    cin>>n;

    Employee E[n]; 

    cout<<"Enter details of "<<n <<" employees \n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i+1 << endl;
        E[i].setData();
    }
    cout << "\nEmployee Details\n";

    for(int i = 0; i < n; i++)
    {
        E[i].display();
    }
    return 0;
}