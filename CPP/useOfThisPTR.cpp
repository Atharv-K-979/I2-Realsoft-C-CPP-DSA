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
    }
public:
    void setData()
    {
        cout << "\nData 1";
        cin >> x;
        cout << "\nData 2";
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
    void setX(int a){
        x=a;
    }
    void setY(int b){
        y=b;
    }
    Number add(Number &t){
        Number k;
        // k.x=x+t.x;
        // k.y=y+t.y;

        // k.setX(x+t.x);
        // k.setY(y+t.y);

        k.setData(x+t.x,y+t.y);
        return k;
    }
     Number sub(Number &t){
        Number k;
        // k.x=x-t.x;
        // k.y=y-t.y;

        // k.setX(x-t.x);
        // k.setY(y-t.y);

        k.setData(x-t.x,y-t.y);
        return k;
    }
};
int main()
{
     Number p, q, r;
    //p.setX();
    //q.setData(10);
    p.setX();
    p.display();
    q.setData();
    q.display();
    r=p.add(q);
    r.display();

    r=p.sub(q);
    r.display();
    // r.setData(5, 7);
    // p.display();
    // q.display();
    // r.display();
    // r.callSwap();
    // r.display();
    // Number s;
    // s.setData();
    // s.display();
    // return 0;
}
