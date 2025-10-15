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
#include <cctype>
#include <chrono>
#include <limits>
using namespace std;
#define N 5
class MyArray
{
    int arr[N];
public:
    MyArray();
    MyArray(int);
    MyArray(MyArray &);

    ~MyArray() {}
    void setData();
    void display();
    int total();
    int avg()
    {
        return total() / N;
    }
    int findMax();
    int findMin();
    int search(int);
    void findRelp(int, int);
};


MyArray::MyArray()
{
    for (int i = 0; i < N; i++)
        arr[i] = 0;
}

MyArray::MyArray(int val)
{
    for (int i = 0; i < N; i++)
        arr[i] = val;
}

MyArray::MyArray(MyArray &t)
{
    for (int i = 0; i < N; i++)
        arr[i] = t.arr[i];
}

void MyArray::setData()
{
    int i = 0;
    cout << "\nEnter data: \n";
    for (int i = 0; i < N; i++)
        cin >> arr[i];
}

void MyArray::display()
{
    cout <<"\nData: ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
}
int MyArray::total()
{
    int tot = 0;
    for (int i = 0; i < N; i++)
    {
        tot += arr[i];
    }
    return tot;
}

int MyArray::findMax()
{
    int maxi = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}

int MyArray::findMin()
{
    int mini = INT_MAX; 
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

int MyArray::search(int sv){
    for (int i = 0; i < N; i++)
    {
        if(arr[i]==sv) return 1; 
    }
    return 0;
}

void MyArray::findRelp(int sv,int rv){
    for (int i = 0; i < N; i++)
    {
        if(arr[i]==sv){
            arr[i]=rv;
        }
    }
}