#include <stdio.h>
void digitSum()
{
    int no, dig, dsum = 0;
    printf("Enter no :");
    scanf("%d", &no);
    for (int i = 0; i < 4; i++)
    {
        dig = no % 10;
        no /= 10;
        dsum += dig;
    }
    printf("%d", dsum);
}
int main()
{
    void digitSum();
    digitSum();
    return 0;
}