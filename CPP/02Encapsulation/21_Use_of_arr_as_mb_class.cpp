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
class Result{
    int rno;
    int mrk[5];
public:
    Result(){
        rno=0;
        for(int i=0;i<5;i++){
            mrk[i]=0;
        }
    }
    void setData();
    void setResult(int);
    void display();
    int total();
    int avg(){
        return total()/5;
    }
};
void Result::setResult(int a){
    rno=a;
    cout<<"\nEnter marks of 5 subjects: ";
    for(int i=0;i<5;i++){
        cin>>mrk[i];
    }
}
void Result::setData(){
    cout<<"\nRoll No: ";
    cin>>rno;
    setResult(rno);
}
void Result::display(){
    cout<<"\nRoll No: "<<rno;
    cout<<"\nMarks: ";
    for(int i=0;i<5;i++){
        cout<<mrk[i]<<" ";
    }
    cout<<"\nTotal: "<<total();
    cout<<"\nAverage: "<<avg();
}
int Result::total(){
    int tot=0;
    for(int i=0;i<5;i++){
        tot+=mrk[i];
    }
    return tot;  
}

    
int main() {
    Result a;
    a.setData();
    a.display();
    return 0;
}