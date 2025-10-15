#include <iostream>
#include "myArray.h"
using namespace std;

class Result
{
    int rno;
    MyArray mrk;

public:
    Result()
    {
        rno = 0;
    }
    ~Result() {}
    void setData()
    {
        cout << "\nRoll no: ";
        cin >> rno;
        mrk.setData();
    }
    void setData(int a)
    {
        rno = a;
        mrk.setData();
    }
    int getNo()
    {
        return rno;
    }
    int getTot()
    {
        return mrk.total();
    }
    int getAvg()
    {
        return mrk.avg();
    }
    void display()
    {
        cout << "\nRoll No.: " << rno;
        mrk.display();
        cout << "\nTotal: " << getTot();
        cout << "\nAvg: " << getAvg();
    }
};
// int main(){
//     Result ak;
//     ak.setData(74);
//     ak.display();
//     return 0;
// }

// int main(){
//     Result *ptr;
//     ptr = new Result;
//     ptr->setData();
//     ptr->display();
//     delete ptr;
//     return 0;
// }

// int main()
// {
//     Result *ptr;
//     ptr = new Result[3];
//     for (int i = 0; i < 3; i++)
//     {
//         (ptr + i)->setData(i + 1);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         (ptr + i)->display();
//     }
//     delete[] ptr;
//     return 0;
// }

// int main(){
//     Result ak[5],tmp;
//     int i,j,pos;
//     for(int i=0;i<5;i++){
//         ak[i].setData();
//     }
//     cout<<"\nBefore";
//     for(int i=0;i<5;i++){
//         ak[i].display();
//     }
//     for(int i=0;i<4;i++){
//         pos=i;
//         for(int j=i+1;j<5;j++){
//             if(ak[j].getNo()<ak[pos].getNo()){
//                 pos=j;
//             }
//             if(i!=pos){
//                 tmp=ak[i];
//                 ak[i]=ak[pos];
//                 ak[pos]=tmp;
//             }
//         }
//     }
//     cout<<"\nAfter";
//     for(int i=0;i<5;i++){
//         ak[i].display();
//     }
//     return 0;
// }

int main()
{
    Result ak[5], tmp;
    int i, j, pos;
    for (int i = 0; i < 5; i++)
    {
        ak[i].setData();
    }
    cout << "\nBefore";
    for (int i = 0; i < 5; i++)
    {
        ak[i].display();
    }
    for (int i = 0; i < 4; i++)
    {
        pos = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (ak[j].getTot() < ak[pos].getTot())
            {
                pos = j;
            }
            if (i != pos)
            {
                tmp = ak[i];
                ak[i] = ak[pos];
                ak[pos] = tmp;
            }
        }
    }
    cout << "\nAfter";
    for (int i = 0; i < 5; i++)
    {
        ak[i].display();
    }
    return 0;
}
