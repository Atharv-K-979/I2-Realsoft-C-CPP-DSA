#include <stdio.h>
int main()
{
    void table();
    table();
    return 0;
}
void table()
{
    int no, i = 1;
    printf("Enter a no");
    scanf("%d", &no);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", no, i, no * i);
        i++;
    }
}