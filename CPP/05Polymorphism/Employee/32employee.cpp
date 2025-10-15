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
#include "employee.h"
using namespace std;

int main() {
    Employee p;
    p.setData(13);
    p.display();
    Employee q;
    q.setData(17);
    q.display();

    if(p.getSalary()>q.getSalary()){
        cout<<"\nMore Salary Name: "<<p.getName();
    }
    else{
        cout<<"\nMore Salary Name: "<<q.getName();
    }
    return 0;
}