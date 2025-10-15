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

 class Number{
    int no;
    public:
        Number(){no=0;}
        Number(int a){no=a;}
        ~Number(){}
        void setData(){
            cout<<"\nNo: ";
            cin>>no;
        }
        void display(){
            cout<<"\nNo: "<<no;
        }
        int getNo(){return no;}
};
// class ExNumber : private Number{
//     string nm;
//     public: 
//      ExNumber() : Number(){}
//     // {
//     //     nm[0]='\0';
//     // }
//     ExNumber(int a,string b):Number(a){
//         strcpy(nm,b);
//     }
//     ~ExNumber(){}
//     void setData(){
//         Number::setData();
//         cout<<"\n Name";
//         cin>>nm;
//     }
//     void display(){
//         Number::display();
//         cout<<"\nName:"<<nm;
//     }
//     int getNo(){
//         return Number::getNo();
//     }
//     string getName(){return nm;}
// };
class ExNumber : private Number {
    char nm[20];
public: 
    ExNumber() : Number() { nm[0] = '\0'; }
    ExNumber(int a, string b) : Number(a) {
        strcpy(nm, b.c_str());  
    }
    ~ExNumber() {}

    void setData() {
        Number::setData();
        cout << "\nName: ";
        cin >> nm;
    }

    void display() {
        Number::display();
        cout << "\nName: " << nm;
    }

    int getNo() { return Number::getNo(); }
    string getName() { return string(nm); }
};

//throughout class fun with same prototypebut implementation is different
int main() {
    ExNumber a(123,"Suraj");
    a.display();
    ExNumber b;
    b.setData();
    b.display();
    ExNumber c;
    c.setData();
    cout<<"\nRoll no: "<<c.getNo();
    cout<<"\nName : "<<c.getName();
    return 0;
}