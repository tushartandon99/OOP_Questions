/*Create a Book class with private data members (title, author, price) and public member
functions to set and display details*/
#include <iostream>
using namespace std;

class Book{
    string Title;
    string Author;
    float Price;

    public:

    Book(string Title,string Author,float Price ){
        this->Title =Title;
        this->Author=Author;
        this->Price =Price;
    }

    void Display_data(){
        cout<<"Title of The Book : "<<Title<<endl;
        cout<<"Author of The Book : "<<Author<<endl;
        cout<<"Price of The Book : "<<Price<<endl;
    }
};


int main() {
    Book B1("YOU CAN", "GEORGE MATTHEW ADAMS",499);
    B1.Display_data();
    return 0;
}