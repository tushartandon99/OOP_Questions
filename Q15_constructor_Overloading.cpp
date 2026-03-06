/*Implement a BankAccount class with multiple constructors: default, parameterized, and
copy.*/

#include <iostream>
using namespace std;

class BankAccount{
    string name;
    int acc_no;
    float balance;

    public:
    BankAccount(){
        acc_no = 0;
        name = "Unknown";
        balance = 0;
    }

    BankAccount(int acc, string n, float bal)
    {
        acc_no = acc;
        name = n;
        balance = bal;
    }

    BankAccount(const BankAccount &obj)
    {
        acc_no = obj.acc_no;
        name = obj.name;
        balance = obj.balance;
    }

    void display()
    {
        cout << "Account Number: " << acc_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------" << endl;
    }


    
};


int main() {
    // Default constructor
    BankAccount b1;
    
    // Parameterized constructor
    BankAccount b2(101, "Rahul", 5000);
    
    // Copy constructor
    BankAccount b3 = b2;

    b1.display();
    b2.display();
    b3.display();
    return 0;
}