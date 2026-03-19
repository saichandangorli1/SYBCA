// 3)	Write a CPP program to find addition of two matrices using friend function.

#include <iostream>
using namespace std;
class Matrix
{
    int mat[2][2];
    friend Matrix addMatrices(Matrix m1, Matrix m2)
    {
        Matrix m3;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                m3.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
        return m3;
    }

public:
    void accept()
    {
        cout << "Enter elements of the matrix (2x2):" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void display()
    {
        cout << "Resultant Matrix (2x2):" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

};

int main()
{
    Matrix m1, m2;
    cout << "Matrix 1:" << endl;
    m1.accept();
    cout << "Matrix 2:" << endl;
    m2.accept();
    Matrix result = addMatrices(m1, m2);
    result.display();
    return 0;
}