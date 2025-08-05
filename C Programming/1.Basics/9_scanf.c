#include <stdio.h>
int main()
{
    int no;
    char ch;
    printf("\n Type a no");
    scanf("%d", &no);
    printf("\n Type a char");       /////doubt
    scanf("%c", &ch);
    printf("\nRoll no:%d \nGrade:%c",no,ch);
    return 0;
}