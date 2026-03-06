/*Write a program where a Complex class has a function add() that takes another Complex
object as an argument and returns the sum.*/

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
        complex temp;
        temp.real = real+c.real;
        temp.imag = imag+c.imag;
        return temp;
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