#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    int x[3][3];

public:
    Matrix()
    {
        cout << "Default\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                x[i][j] = 0;
    }
    Matrix(int arr[3][3])
    {
        cout << "Para.\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                x[i][j] = arr[i][j];
    }
    Matrix(const Matrix &t)
    {
        cout << "Copy\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                x[i][j] = t.x[i][j];
    }
    ~Matrix()
    {
        cout << "Destructor called.\n";
    }
    void setData()
    {
        cout << "Enter elements: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "[" << i << "][" << j << "]: ";
                cin >> x[i][j];
            }
        }
    }
    void display()
    {
        cout << "Matrix:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << " " << x[i][j];
            }
            cout << endl;
        }
    }
    void transpose()
    {
        int tmp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                tmp = x[i][j];
                x[i][j] = x[j][i];
                x[j][i] = tmp;
                // swap(x[i][j], x[j][i]);
            }
        }
    }
    void add(Matrix &p, Matrix &q)
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                x[i][j] = p.x[i][j] + q.x[i][j];
    }
    void sub(Matrix &p, Matrix &q)
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                x[i][j] = p.x[i][j] - q.x[i][j];
    }
    void mul(Matrix &p, Matrix &q)
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                x[i][j] = 0;
                for (int k = 0; k < 3; k++)
                    x[i][j] += p.x[i][k] * q.x[k][j];
            }
    }
};

int main()
{
    Matrix a;
    Matrix b;
    cout << "Enter Matrix-1\n";
    a.setData();
    a.display();
    cout << "Enter Matrix-2\n";
    b.setData();
    b.display();
    cout << "Matrix B\n";
    b.display();
    Matrix c(b);
    cout << "Matrix C\n";
    c.display();
    cout << "A + B\n";
    Matrix d;
    d.add(a, b);
    d.display();
    cout << "Transpose of A\n";
    a.transpose();
    a.display();
    cout << "A * B\n";
    d.mul(a, b);
    d.display();
    return 0;
}
