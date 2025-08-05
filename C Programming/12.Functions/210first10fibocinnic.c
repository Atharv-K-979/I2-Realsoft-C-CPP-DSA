#include <stdio.h>
int main()
{
    void table();
    table();
    return 0;
}
void table()
{
    int no, i, a, b, c;
    for (a = -1, i = 1, b = 1; i <= 10; i++)
    {
        c = a + b;
        printf("%4d", c);
        a = b;
        b = c;
    }
}