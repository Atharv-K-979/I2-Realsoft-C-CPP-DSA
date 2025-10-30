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
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;
class A
{
    int a;
public:
    void set()
    {
        cout << "\nA: ";
        cin >> a;
    }
    void display()
    {
        cout << "A: " << a << endl;
    }
};
class B : public A
{
    int b;
public:
    void set()
    {
        cout << "\nB: ";
        cin >> b;
    }
    void display()
    {
        cout << "B: " << b << endl;
    }
};
class C : public B
{
    int c;
public:
    void set()
    {
        cout << "\nC: ";
        cin >> c;
    }
    void display()
    {
        cout << "C: " << c << endl;
    }
};

// int main()
// {
//     A obja;
//     obja.set();
//     obja.display();

//     B objb;
//     objb.A::set();
//     objb.set();
//     objb.A::display();
//     objb.display();

//     C objc;
//     objc.set();
//     objc.display();
//     return 0;
// }


int main(){
    A *aptr; // jya class cha pointer tya class chy methods call hotat
    A obja;
    aptr=&obja;
    aptr->set();
    aptr->display();

    B objb;
    aptr=&objb;
    aptr->set();
    aptr->display();

    ((B*)aptr)->set();
    ((B*)aptr)->display();


    C *cptr;
    cptr=new C;
    cptr->set();
    cptr->display();
    
    return 0;
}