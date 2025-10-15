#include <iostream>

using namespace std;
class Result
{
    int rno;
    double mrk;

public:
    Result()
    {
        rno = 0;
        mrk = 0.0;
    }
    Result(Result &t)
    {
        rno = t.rno;
        mrk = t.mrk;
    }
    ~Result() {}
    friend istream &operator>>(istream &in, Result &t)
    {
        cout << "\nRoll No:";
        in >> t.rno;
        cout << "\nMarks:";
        in >> t.mrk;
        return in;
    }
    friend ostream &operator<<(ostream &out, Result &t)
    {
        out << "\nroll no:" << t.rno;
        out << "\nMarks:" << t.mrk;
        return out;
    }
    int operator>(int a)
    {
        return rno > a;
    }
    int operator<(int a)
    {
        return (rno < a);
    }
    int operator>(Result &a)
    {
        return (rno > a.rno);
    }
    int operator<(Result &a)
    {
        return (rno < a.rno);
    }
    Result operator+(double a)
    {
        Result t;
        t.rno = rno;
        t.mrk = mrk + a;
        return t;
    }
    Result operator-(double a)
    {
        Result t;
        t.rno = rno;
        t.mrk = mrk - a;
        return t;
    }
    int getNo() { return rno; }
    double getMrk() { return mrk; }
};
// int main()
// {
//     Result k;
//     cin >> k;
//     cout << k;
//     Result p;
//     p = k + 1.2;
//     cout << p;
//     if (k > p)
//     {
//         cout << "k is max";
//     }
//     else
//     {
//         cout << "p is max"
//     }
//     return 0;
// }
// sorting of selection type result
// int main()
// {
//     Result k[5];
//     int i = 0, j = 0, pos;
//     while (i < 5)
//     {
//         cin >> k[i];
//         i++;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         pos = i;
//         for (int j = 0; j < 4; j++)
//         {
//             if (k[j] < k[pos])
//             {
//                 pos = j;
//             }
//         }
//         if (i != pos)
//         {
//             Result tmp;
//             tmp = k[i];
//             k[i] = k[pos];
//             k[pos] = tmp;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << k[i];
//     }
//     return 0;
// }

int main()
{
    Result k[5];
    int i = 0, j = 0, pos;
    while (i < 5)
    {
        cin >> k[i];
        i++;
    }
    for (int i = 0; i < 5; i++)
    {
        pos = i;
        for (int j = 0; j < 4; j++)
        {
            if (k[j] < k[pos])
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            Result tmp;
            tmp = k[i];
            k[i] = k[pos];
            k[pos] = tmp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << k[i];
    }
    return 0;
}
