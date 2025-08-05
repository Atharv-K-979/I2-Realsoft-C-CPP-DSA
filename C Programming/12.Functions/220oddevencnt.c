// Fun calling but not returning
#include <stdio.h>
int main()
{
    int oddeven();
    int i=1,cnt=0;
   while (i<=10)
   {
     cnt+=oddeven();
     i++;
   }
   printf("Odd cnt %d",cnt);
   printf("Even cnt %d",10-cnt);

       
    return 0;
}
int oddeven()
{
    int no;
    printf("\nEnter no ");
    scanf(" %d",&no);
    return (no%2);
}
