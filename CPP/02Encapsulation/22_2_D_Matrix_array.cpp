#include <bits/stdc++.h>
using namespace std;

class Matrix
{
    int x[3][3];

public:
    void init();
    void setData();
    void display();
    void add(Matrix &, Matrix &);
    void sub(Matrix &, Matrix &);
    void mul(Matrix &, Matrix &);
    void transpose();
};

// Initialize with zeros
void Matrix::init()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            x[i][j] = 0;
}

// Input matrix
void Matrix::setData()
{
    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }
}

// Display matrix in grid
void Matrix::display()
{
    cout << "Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(5) << x[i][j]; // neatly aligned
        }
        cout << endl;
    }
}

// Transpose in-place
void Matrix::transpose()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(x[i][j], x[j][i]);
        }
    }
}

// Matrix addition
void Matrix::add(Matrix &p, Matrix &q)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = p.x[i][j] + q.x[i][j];
        }
    }
}

// Matrix subtraction
void Matrix::sub(Matrix &p, Matrix &q)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = p.x[i][j] - q.x[i][j];
        }
    }
}

// Matrix multiplication
void Matrix::mul(Matrix &p, Matrix &q)
{
    init();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                x[i][j] += p.x[i][k] * q.x[k][j];
            }
        }
    }
}

int main()
{
    Matrix a, b, c;

    cout << "--- Enter Matrix A ---\n";
    a.setData();
    a.display();

    cout << "--- Enter Matrix B ---\n";
    b.setData();
    b.display();

    cout << "--- A + B ---\n";
    c.add(a, b);
    c.display();

    cout << "--- Transpose of A ---\n";
    a.transpose();
    a.display();

    cout << "--- A * B ---\n";
    c.mul(a, b);
    c.display();

    return 0;
}
