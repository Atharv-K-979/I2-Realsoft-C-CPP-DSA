#include <iostream>
using namespace std;

class Number
{
    int x, y;
    void swap()
    {
        int temp = x;
        x = y;
        y = temp;
        ;
    }

public:
    void setData()
    {
        cout << "\nData1";
        cin >> x;
        cout << "\nData2";
        cin >> y;
    }

    void setData(int a)
    {
        x = y = a;
    }

    void setData(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void setData(Number &t)
    {
        x = t.x;
        y = t.y;
    }

    void display()
    {
        cout << "\nx" << x;
        cout << "\ny" << y;
    }

    void callSwap()
    {
        swap();
    }
    int getX() { return x; }
    int getY() { return y; }
};
int main()
{
    Number p, q, r;
    p.setData();
    q.setData(10);
    r.setData(5, 7);
    p.display();
    q.display();
    r.display();
    r.callSwap();
    r.display();
    Number s;
    s.setData();
    s.display();
    return 0;
}
