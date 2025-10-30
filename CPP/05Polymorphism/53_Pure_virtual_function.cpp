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
class Dim{                          // abstract base class is the class having atleast one pure virtual function
    protected:
        int  w,h;
    public:
        void set(){
            cout<<"ENter width: ";
            cin>>w;
            cout<<"Enter height: ";
            cin>>h;
        }
        void display(){
            cout<<"Width and height is :"<<w<<"  "<<h<<endl;
        }
        virtual void area()=0;   // pure virtual function
};
class Rect : public Dim{
    public:
        void area(){
            cout<<"\nArea :"<<w*h;
        }
};
class Triang : public Dim{
    public:
        void area(){
            cout<<"\nArea :"<<(w*h)/2;
        }
};
int main() {
    int opt;
    Dim *dptr;
    cout<<"Enter 1 for Rect or 2 for Triangle";
    cin>>opt;
    if(opt==1){
        dptr= new Rect;
        dptr->set();
        dptr->display();
        dptr->area();
    }
    else if(opt==2){
        dptr=new Triang;
        dptr->set();
        dptr->display();
        dptr->area();
    }
    else{
        cout<<"Enter valid choice";
    }
    return 0;
}