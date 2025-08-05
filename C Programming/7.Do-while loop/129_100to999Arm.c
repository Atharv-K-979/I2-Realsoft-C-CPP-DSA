#include <stdio.h>
int main()
{
    int no, dig, cube, sum = 0, tmp;
    for (tmp = 100; tmp < 1000; tmp++)
    {
        sum = 0;
        no = tmp;
        while (no > 0)
        {
            dig = no % 10;
            cube = dig * dig * dig;
            sum = sum + cube;
            no = no / 10;
        }
        if (tmp == sum)
        {
            printf("%d\n", tmp);
        }
    }
    return 0;
}