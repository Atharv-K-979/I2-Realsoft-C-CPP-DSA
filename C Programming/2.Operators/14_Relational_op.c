#include <stdio.h>
int main()
{
    int a;
    char ch;
    printf("\n Type a \n Enter a char");
    scanf("%d %c", &a, &ch);
    printf("\n%d", a < 0);
    printf("\n%d", a > 0);
    printf("\n%d", a == 0);
    printf("\n%d", a != 0);
    printf("\n%d", ch <= 0);
    printf("\n%d", ch >= 'z');
    printf("\n%d", ch == 'A');
    printf("\n%d", ch >= 48);

    return 0;
}
