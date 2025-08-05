#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    if ( a < 0 || a > 100)
    {
        printf("Out of range");
    }
    else
    {
        if ( a < 50)
        {
            printf("Grade : X");
        }
        else
        {
            printf("Grade : %c",'E'-(a - 50)/10); //////////////////////////Best approch ever seen
        }
        
    }
    
}