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
#include <iostream>
#include "stu.h"
using namespace std;

int main() {
    STU s;
    int no;
    ifstream in;
    in.open("stu.dat",ios::in | ios::binary);
    while(1){
        in.read((char*)&s,sizeof(s));
        if(in.eof()) break;
        s.display();
    }
    in.close();
    return 0;
}