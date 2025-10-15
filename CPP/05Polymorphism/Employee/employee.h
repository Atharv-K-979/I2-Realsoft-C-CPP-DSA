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
#include "myTime.h"
using namespace std;

class Employee{
    int eNo;
    char nm[15];
    MyTime wt;
    int sph;

    public:
        Employee(){
            eNo=sph=0;
            nm[0]='\0';
        }
        ~Employee(){}
        void setData(long int no){
            eNo=no;
            cout<<"\nName: ";
            cin>>nm;
            cout<<"\nWork SPH: ";
            cin>>sph;
            cout<<"\nWork Details: ";
            wt.setData();
        }
        const char *getName(){
            return nm;
        }
        int getNo(){
            return eNo;
        }
        int getSPH(){
            return sph;
        }
        MyTime getWt(){
            return wt;
        }
        int getSalary(){
            return wt.getHr()*sph;
        }
        void display(){
            cout<<"\nEmployee no: "<<eNo<<"\nEmployee Name: "<<nm<<"Salary Per Hr.: "<<sph<<"\nWork Time: ";
            wt.display();
            cout<<"\nSalary: "<<getSalary();
        }
};

