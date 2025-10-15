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
class oral{
    protected:
        int omrk;
    public:
        oral(){omrk=0;}
        ~oral(){}
        void set(){
            cout<<"\nOral marks:";cin>>omrk;
        }
        void display(){
            cout<<"\nOral marks:"<<omrk;
        }
};
class Theory{
    protected:
        int tmrk;
    public:
        Theory(){tmrk=0;}
        ~Theory(){}
        void set(){
            cout<<"\nTheory marks:";cin>>tmrk;
        }
        void display(){
            cout<<"\nTheory marks:"<<tmrk;
        }
};
class Number : public oral,Theory{  // 1
    protected:
        int rno;
        char nm[15];
    public:
        Number():Theory(),oral(){   // imp  see order of 1 then write here imp
            rno=0;
            nm[0]='\0';
        }
        ~Number(){}
        void set(){
            oral::set();
            Theory::set();
            cout<<"\nRoll no:";cin>>rno;
            cout<<"\nName:";cin>>nm;
        }
        void display(){
            cout<<"\nRoll no:"<<rno<<"\nName: "<<nm;
            oral::display();
            Theory::display();
            cout<<"\nTotal: "<<(omrk+tmrk);
        }
};
int main() {
    Number ak;
    ak.set();
    ak.display();
    return 0;
}