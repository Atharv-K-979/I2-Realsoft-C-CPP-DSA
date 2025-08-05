#include <stdio.h>
int main()
{
    int cont = 0, up = 0, lo = 0, dig = 0, other = 0;
    char a;
    printf("Enter a character:");
    while (cont <= 10)
    {
        //system("cls")
        scanf(" %c",&a);
        if (a >= 'A' && a <= 'Z') 
        {
            up++;
        }
        else if (a >= 'a' && a <= 'z')
        {
            lo++;
        }
        else if (a >= '0' && a <= '9')
        {
            dig++;
        }
        else
        {
            other++;
        }
        cont = cont + 1;
    }
    printf("there are ,dig %d,up %d,lo %d,other %d char", dig, up, lo, other);
    return 0;
}