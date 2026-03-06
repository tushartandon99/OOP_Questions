/*Create a Car class with a default constructor that initializes brand and model.*/

#include <iostream>
using namespace std;

class Car{
    string brand;
    string model;
    public:

    Car()
    {
        brand = "Toyota";
        model = "Fortuner";
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
    c1.display();
    return 0;
}