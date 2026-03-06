/*Write a program that dynamically allocates memory for a Matrix class and initializes it using a
constructor.*/
/*Nhiiiii samajhh aayaaa*/
#include <iostream>
using namespace std;

class Matrix{
    int rows, cols;
    int **mat;

    public:

    Matrix(int r , int c){
        rows=r;
        cols=c;

        mat = new int*[rows];

        for(int i = 0; i < rows; i++)
        {
            mat[i] = new int[cols];
        }

        
    }
    void input()
    {
        cout<<"Enter matrix elements:\n";

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

      void display()
    {
        cout<<"Matrix is:\n";

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};


int main() {
     int r, c;

    cout<<"Enter rows and columns: ";
    cin >> r >> c;

    // dynamic object creation
    Matrix *m = new Matrix(r, c);

    m->input();
    m->display();

    return 0;
}