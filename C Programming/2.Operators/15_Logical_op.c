#include <stdio.h>
int main()
{
    char ch;
    int no;
    printf("\n Character: ");
    scanf("%c", &ch);
    printf("InEnter No: ");
    scanf("%d", &no);
    printf("\n%d", no >= 0 && no <= 100);
    printf("\n%d", no <= 0 || no >= 100);
    printf("\n%d ", !(no <= 0 || no >= 100));
    printf("\n%d",( ch>= 'A' && ch <= 'Z'));
    printf("\n%d", ch = 'a'|| ch == 'A');
    printf("\n%d", (ch>= 'A' && ch <= 'F')|| (ch >= 0 && ch <='9'));
    return 0;
}