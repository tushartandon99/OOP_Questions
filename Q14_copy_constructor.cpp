/*Write a program to demonstrate copy constructor by copying one Car object into another.*/

#include <iostream>
using namespace std;

class Car{
    string brand;
    string model;
    public:

    Car(string brand="Toyota",string model = "Fortuner")
    {
        this->brand = brand;
        this->model = model;
        cout<<"Default constructor is called\n";
        
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout<<"----------------------\n";
    }
    Car(Car &B){
        brand =B.brand;
        model=B.model;
       
    }
};


int main() {
    Car c1;   
    Car c2("BMW", "X5");
    Car c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}