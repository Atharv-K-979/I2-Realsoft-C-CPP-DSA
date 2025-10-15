#include<iostream>
#include<stdio.h>

using namespace std;

class MyTime{
    int h, m, s;

    long int toSeconds(){
        return h*360l + m*60 + s; // 360l is treated as long
    }

    public:
       
        MyTime(){
            h = m = s = 0;
        }

        MyTime(int a, int b = 0, int c = 0){
            h = a;
            m = b;
            s = c;
        }

        MyTime(long int r){
            h = r / 3600;
            r = r % 3600;
            m = r / 60;
            s = r % 60;
        }

        MyTime(MyTime &t){
            h = t.h;
            m = t.m;
            s = t.s;
        }

        ~MyTime(){}

        void setData(){
            cout << "\nHr: ";
            cin >> h;

            cout << "\nMin:";
            cin >> m;

            cout << "\nSec: ";
            cin >> s;
        }

        void setData(int a, int b = 0, int c = 0){
            h = a;
            m = b;
            s = c;
        }

        void setData(long int r){
            h = r / 3600;
            r = r % 3600;
            m = r / 60;
            s = r % 60;
        }

        int getHr(){return h;}
        int getMin(){return m;}
        int getSec(){return s;}

        void display(){
            cout << "\tHr: "<< h;
            cout << "\tMin: " << m;
            cout << "\tSec: " << s;
        }

        MyTime add(MyTime &t){
            long int a = toSeconds();
            long int b = t.toSeconds();
            MyTime c( a + b );
            return c;
        }

         MyTime sub(MyTime &t){
            long int a = toSeconds();
            long int b = t.toSeconds();
            MyTime c( labs(a - b) );
            return c;
        }

        int isMore(MyTime &a){
            return (toSeconds() > a.toSeconds());
        }

        int isLess(MyTime &a){
            return (toSeconds() < a.toSeconds());
        }
};


