
#include<iostream>
using namespace std;

// Member function of class B is friend function of class A

 class A; //Forward Declaration

class B{
    int b;

    public:
        void set(){
            cout<<"\nB b:";
            cin>>b;
        }

        void display(){
            cout<<"\nB b:"<<b;
        }
    void swap(A&);
};


class A{
    int a;

    public:

        void set(){
            cout<<"\nA a:";
            cin>>a;
        }

        void display(){
            cout<<"\nA a:"<<a;
        }
    friend void B :: swap(A&);
};

void B:: swap(A &y){
    int temp = y.a;
    y.a = b;
    b = temp;
}

int main(){
    A obja;
    B objb;

    obja.set();
    objb.set();
    obja.display();
    objb.display();
    //swap(obja, objb);
    objb.swap(obja);
    obja.display();
    objb.display();

    return 0;
}

