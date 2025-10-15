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

class Student
{
    int no;
    char nm[15];
    int mrk;

public:
    Student();
    Student(int, const char*, int);
    Student(Student &);

    ~Student() {
        cout<<"\nDest called";
    }
    void setData(int);
    void setData(int, const char *,int);
    void display();
    int getNo()
    {
        return no;
    }
    int getMrk()
    {
        return mrk;
    }
    char *getName()
    {
        return nm;
    }
};
Student::Student()
{
    mrk = no = 0;
    strcpy(nm, " ");
}
Student::Student(int a,const char *b, int c)
{
    no = a;
    strcpy(nm, b);
    mrk = c;
}
Student::Student(Student &t)
{
    no = t.no;
    strcpy(nm, t.nm);
    mrk = t.mrk;
}
void Student::setData(int a)
{
    no = a;
    cout << "\nName: ";
    cin >> nm;
    cout << "\nMarks: ";
    cin >> mrk;
}
void Student::setData(int a, const char *b, int c)
{
    no = a;
    strcpy(nm, b);
    mrk = c;
}
void Student::display()
{
    cout << "\nRoll no: " << no << "\nName: " << nm << "\nMark: " << mrk;
}
int main()
{
    Student a;
    a.setData(100);
    a.display();
    {
        Student a(200,"Ram",98);
        a.display();
    }
    Student b;
    b.setData(76,"Suhas",92);
    b.display();
    Student c;
    c.setData(13);
    cout<<"\nRoll No: "<<c.getNo();
    cout<<"\nName :"<<c.getName();
    cout<<"\nMarks: "<<c.getMrk();
    return 0;
}