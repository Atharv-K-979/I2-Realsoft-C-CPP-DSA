#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>
#define N 20
typedef struct stack{
    int top;
    int arr[N];
}STK;

STK s;
void init(){
    s.top=-1;
}
void push(int val){
    s.top++;
    s.arr[s.top]=val;
}
int pop(){
    return s.arr[s.top--];
}
int isEmpty(){
    return (s.top==-1);
}
int comp(int a,int b,char opr){
    int res;
    switch (opr)
    {
    case '+':
        res=a+b;
        break;
    case '-':
        res=a-b;
        break;
    case '/':
        res=a/b;
        break;
    case '*':
        res=a*b;
        break;
    }
    return res;
}
int main() {
    char pstr[50],ch;
    static int  val[26];     /// initial val for all 0
    int i=0,a,b,res,index;
    init();
    printf("\nEnter Postfix Expr: ");
    scanf("%s",pstr);
    while (pstr[i]!='\0')
    {
        if (pstr[i]>=65 && pstr[i]<=90)
        {
            index=pstr[i]-65;
            printf("\nEnter value for %c : ",pstr[i]);
            scanf("%d",&val[index]);
        }
        i++;
    }
    for ( i = 0; pstr[i]!='\0'; i++)
    {
        if (isalpha(pstr[i]))
        {
            index=pstr[i]-65;
            push(val[index]);
        }
        else{
            ch=pstr[i];
            b=pop();
            a=pop();
            res=comp(a,b,ch);
            push(res);
        }
    }
    res=pop();
    printf("\nResult is %d : ",res);
    return 0;
}