/*Create two classes Box and Cylinder. Write a friend function that can access private members
of both to compare their volumes.*/

#include <iostream>
using namespace std;

class cylinder;

class box{
    int length;
    int width;
    int height;

    public:

    box(int l,int w, int h){
        length=l;
        width=w;
        height=h;
    }
    friend void comparevolume(box,cylinder);
};

class cylinder{
    int radius;
    int height;

    public:

    cylinder(int r, int h){
        radius=r;
        height=h;
    }
    friend void comparevolume(box,cylinder);
};

void comparevolume(box b, cylinder c){
    float boxVolume = b.length * b.width * b.height;
    float cylinderVolume = 3.14 * c.radius * c.radius * c.height;
    
    cout << "Box Volume: " << boxVolume << endl;
    cout << "Cylinder Volume: " << cylinderVolume << endl;

    if(boxVolume > cylinderVolume)
        cout << "Box has greater volume\n";
    else if(cylinderVolume > boxVolume)
        cout << "Cylinder has greater volume\n";
    else
        cout << "Both volumes are equal\n";
}


int main() {
    box b1(4,5,6);
    cylinder c1(3,7);

    comparevolume(b1,c1);
    return 0;
}