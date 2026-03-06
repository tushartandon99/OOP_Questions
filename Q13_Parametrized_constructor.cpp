/*Extend the Car class to allow initialization with brand and model passed as arguments*/

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
    }
};


int main() {
    Car c1;   
    Car c2("BMW", "X5");
    
    c1.display();
    c2.display();
    return 0;
}