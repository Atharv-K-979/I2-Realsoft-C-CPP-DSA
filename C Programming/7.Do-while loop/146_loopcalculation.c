#include <stdio.h>
int main()
{
    int v1, v2, res, flg = 0;
    char opr;
    while (1)
    {
        if (flg == 0)
        {
            printf("Enter n1 :");
            scanf("%d", &v1);
            flg = 1;
        }
        else
        {
            v1 = res;
            printf("\nOperator\n:+ for addition\n- for subtraction\n* for multiplication\n/ for division\n%% for modulus\nE for exit\n");
            scanf(" %c", &opr);
            if (opr == 'E' || opr == 'e')
            {
                break;;
            }
            printf("Enter n2 :");
            scanf("%d", &v2);
            switch (opr)
            {
            case '+':
                res = v1 + v2;
                break;
            case '-':
                res = v1 - v2;
                break;
            case '*':
                res = v1 * v2;
                break;
            case '/':
                res = v1 / v2;
                break;
            case '%':
                res = v1 % v2;
                break;
            }
        }
    }
    printf("Result %d",res);
return 0;
}