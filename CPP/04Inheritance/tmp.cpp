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
class Solution {
public:
    int sqSum(int a){
        int sum=0;
        while(a>0){
            int dig=a%10;
            sum+=dig*dig;
            a/=10;
        }
        return sum;
    }
    int isHappy(int n) {
        int happyNo=n;
        while(1){
            if(happyNo/10<=0 && happyNo!=1){
                cout<<"false";
                return 0;
            }
            if(happyNo==1){
                cout<<"true";
                return 0;
            }
            happyNo = sqSum(happyNo);
        }

        return 0;
    }
};

int main(){
    Solution s;
    s.isHappy(2);
    return 0;
}

// Input: n = 19
// Output: true
// Explanation:
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1