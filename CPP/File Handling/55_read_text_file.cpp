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
    ifstream in("abc.txt");
    int no;
    while(1){
        in>>no;
        if(in.eof()) break;
        cout<<no<<" ";
    }
    in.close();
    return 0;
}