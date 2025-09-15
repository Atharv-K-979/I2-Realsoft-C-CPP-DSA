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
class student{
    private:
        int rno;
        char nm[15];
    public:
        void setData(){
            cout<<"\nRoll No: ";
            cin>>rno;
            cout<<"\nName: ";
            cin>>nm;
        }
        void display(){
            cout<<"\nName :"<<nm<<endl<<"Roll no.:"<<rno<<endl;
        }
};
int main() {
    student p,q;
    p.setData();
    p.display();
    q.setData();
    q.display();
    return 0;
}