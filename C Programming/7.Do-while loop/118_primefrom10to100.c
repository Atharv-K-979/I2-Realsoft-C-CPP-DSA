#include <stdio.h>
int main()
{
    int no, i;
    for (no = 10; no <= 100; no++)
    {
        for (i = 2; i < no; i++)
        {
            if (no % i == 0)
            {
                break;
            }
        }
        if (i == no)
        {
            printf("Prime:%d\n\n", no);
        }
    }
    return 0;
}