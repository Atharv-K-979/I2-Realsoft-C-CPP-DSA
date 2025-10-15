#include<math.h>
#include"myTime.h"


int main(){
    MyTime p, q, r;

    p.setData();
    p.display();

    q.setData();
    q.display();

    r = p.add(q);
    r.display();


}