/*Modify the above Complex class so that add() returns a new Complex object instead of
modifying the existing one.*/

#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;

    public:
    complex(int r=0, int c=0){
        real=r;
        imag=c;

    }
    complex add(complex c){
        return complex(real+c.real,imag+c.imag);
    }
    void display(){
        cout<<real <<" + "<<imag<<"i "<<endl;
    }
    
};


int main() {
    complex c1(2,7);
    complex c2(6,1);
    complex c3;

    c3=c1.add(c2);
    cout << "Sum of complex numbers: ";
    c3.display();

    return 0;
}
