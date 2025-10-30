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
    virtual void set()
    {
        cout << "\nA: ";
        cin >> a;
    }
    virtual void display()
    {
        cout << "A: " << a << endl;
    }
};
class B : public A
{
    int b;
public:
    void set3()
    {
        cout << "\nB: ";
        cin >> b;
    }
    void display3()
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

int main(){
    A *aptr;
    A obja;
    aptr=&obja;
    aptr->set();
    aptr->display();

    B objb;
    aptr=&objb;
    aptr->set();
    aptr->display();


    aptr= new C;
    aptr->set();
    aptr->display();
    
    return 0;
}