#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <sstream>
#include <iomanip>
#include <functional>
#include <numeric>
#include <utility>
#include <cassert>
#include <cctype>
#include <chrono>

using namespace std;
class Matrix
{

    int x[3][3];

public:
    Matrix();
    Matrix(Matrix &);

    ~Matrix() {}

    friend istream &operator>>(istream &, Matrix &);
    friend ostream &operator<<(ostream &, Matrix &);

    Matrix operator+(Matrix &);
    Matrix operator-(Matrix &);
    Matrix operator*(Matrix &);

    void operator-();
};
Matrix::Matrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = 0;
        }
    }
}
Matrix::Matrix(Matrix &t)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            x[i][j] = t.x[i][j];
        }
    }
}
istream &operator>>(istream &kin, Matrix &t)
{
    int i, j;
    cout << "\nData";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            kin >> t.x[i][j];
        }
    }
    return kin;
}
ostream &operator<<(ostream &kout, Matrix &t)
{
    int i, j;
    kout << "\nMatrix :"<<endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            kout << " " << t.x[i][j];
        }
        kout << endl;
    }
    return kout;
}
Matrix Matrix ::operator+(Matrix &a)
{
    Matrix b;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b.x[i][j] = x[i][j] + a.x[i][j];
        }
    }
    return b;
}
Matrix Matrix ::operator-(Matrix &a)
{
    Matrix b;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b.x[i][j] = x[i][j] - a.x[i][j];
        }
    }
    return b;
}
Matrix Matrix ::operator*(Matrix &a)
{
    Matrix b;
    int i, j,k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for ( k = 0; k < 3; k++)
            {
                 b.x[i][j] += (x[i][j] * a.x[i][j]);
            }
        }
    }
    return b;
}
void Matrix :: operator-()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            swap(x[i][j], x[j][i]);
        }
    }
}
int main()
{

    Matrix p, q, r;
    cout << "\nMatrix P: ";
    cin >> p;
    cout << "\nMatrix Q: ";
    cin >> q;
    r = p + q;
    cout << p << q << r;
    -r; // transpose
    cout << r;
    return 0;
}