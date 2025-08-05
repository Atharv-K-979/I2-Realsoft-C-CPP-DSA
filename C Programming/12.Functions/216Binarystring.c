#include<stdio.h>
int main()
{    
    char binary();
    binary();

return 0;
}
char binary(){
    char p[10];
    int i;
    printf("Enter String");
    scanf("%s",p);
    for ( i = 0; p[i]!='\0'; i++)
    {
        if (p[i]=='0'||p[i]=='1')
        {
            i++;
        }
        else
            break;
    }
    if (p[i]=='\0')
    {
        printf("Binary String");
    }
    else
    printf("Not Binary String");
}