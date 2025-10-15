#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<climits>
#include<limits>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<stack>
#include<queue>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<bitset>
#include<sstream>
#include<iomanip>
#include<functional>
#include<numeric>
#include<utility>
#include<cassert>
#include<cctype>
#include<chrono>

using namespace std;
inline void display(int n){
    cout<<"No : "<<n<<endl;
}
inline int sqr(int n){
    return n*n;
}
inline int cube(int n){
    return n*n*n;
}
int main() {
    int x;
    cin>>x;
    display(x);
    cout<<"Sq : "<<sqr(x)<<endl;
    cout<<"Cube : "<<cube(x)<<endl;
    return 0;
}