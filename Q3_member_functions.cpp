/*Implement a Rectangle class with member functions defined both inside and outside the
class using the scope resolution operator.*/
#include <iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;

    public:
    void setData(int l, int b);

    // function defined inside class
    int area()
    {
        return length * breadth;
    }

    void display();
};

//function defined outside the class

void rectangle ::setData(int l, int b){
    length = l;
    breadth = b;
}

void rectangle::display(){
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << area() << endl;
}

int main() {
    rectangle r1;

    r1.setData(10, 5);
    r1.display();
    return 0;
}