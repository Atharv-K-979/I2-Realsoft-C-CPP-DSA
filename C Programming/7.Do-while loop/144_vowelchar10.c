#include <stdio.h>
int main()
{
    int ma = 0, me = 0, mi = 0, mo = 0, mu = 0,oth =0;
    char ch;
    printf("Enter a char :");
    for (int i = 1; i <= 10; i++)
    {
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'A':
        case 'a':
            ma++;
            break;
        case 'E':
        case 'e':
            me++;
            break;
        case 'I':
        case 'i':
            mi++;
            break;
        case 'O':
        case 'o':
            mo++;
            break;
        case 'U':
        case 'u':
            mu++;
            break;
        default:
            oth++;
        }
    }
    printf("A=%d E=%d I=%d O=%d U=%d oth=%d", ma, me, mi, mo, mu,oth);
    return 0;
}