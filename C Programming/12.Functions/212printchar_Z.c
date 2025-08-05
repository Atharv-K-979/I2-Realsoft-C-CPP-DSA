#include <stdio.h>
int main()
{
    void characterN();
    characterN();
    return 0;
}
void characterN()
{
    int no, i, j;
    printf("Enter a line no");
    scanf("%d", &no);
    for (i = 0; i <= no; i++)
    {
        for (j = 0; j <= no; j++)
        {
            if (i == 0 || i == no || i + j == no + 1)
            {

                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}