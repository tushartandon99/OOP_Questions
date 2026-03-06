/*Create a Marks class that stores marks of 5 subjects in an array. Write a function to calculate
the average.*/

#include <iostream>
using namespace std;

class Marks{
   int marks[5];

    public:
    void setMarks()
    {
        cout<<"Enter marks of 5 subjects:"<<endl;

        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void avg(){
       int sum = 0;

        for(int i=0;i<5;i++)
        {
            sum += marks[i];
        }

        float avg = sum / 5.0;

        cout<<"Average Marks = "<<avg<<endl;
    }
};


int main() {
    Marks M;
    M.setMarks();
    M.avg();
    return 0;
}