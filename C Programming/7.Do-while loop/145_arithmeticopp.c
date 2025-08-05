#include<stdio.h>
int main()
{
    int v1, v2, res;
    char opr;
    printf("Enter two values :");
    scanf("%d%d", &v1, &v2);
    printf("Operator\n:+ for addition\n- for subtraction\n* for multiplication\n/ for division\n%% for modulus\n");
    scanf(" %c", &opr);
    if (opr=='E'||opr=='e')
    {
        return 0;
    }
    else
    {
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
        default:
            printf("Invalid operator");
            return 0;
        }
        printf("Result of %d %c %d is %d", v1, opr, v2, res);
    }
    return 0;
}