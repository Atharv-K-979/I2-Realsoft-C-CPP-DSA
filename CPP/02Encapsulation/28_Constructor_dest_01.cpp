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
        Number(){
            no=0;
            cout<<"\nDefault";
        }
        Number(int a){
            no=a;
            cout<<"\nPara Const.";
        }
        Number(Number &t){ 
            no=t.no;
            cout<<"\nCopy";
        }
        ~Number(){
            cout<<"\nDestructor called";
        }
        void display(){
            cout<<"\nNo: "<<no;
        }
        void setData(){
            cout<<"\nNo :";
            cin>>no;
        }
        void setData(int a){
            no=a;
        }
        int getInfo(){return no;}
};
// int main() {
//     Number n1,n2(15),n3(n2);
//     {
//         Number n4;
//         n4.setData(100);
//         n4.display();
//     }
//     n1.setData();
//     n1.display();
//     n2.setData();
//     n2.display();
//     return 0;
// }
// int main() {
//     Number k=100;       // this is explicit call
//     k.display();
//     return 0;
// }
