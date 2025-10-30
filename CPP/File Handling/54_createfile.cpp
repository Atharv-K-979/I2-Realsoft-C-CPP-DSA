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
#include <fstream>

using namespace std;

int main() {
    ofstream out("abc.txt");
    int no;
    while(1){
        cout<<"Enter no. ";
        cin>>no;
        if(no==0) break;
        out<<no<<" ";
    }
    out.close();
    return 0;
}