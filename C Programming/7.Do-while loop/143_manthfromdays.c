#include <stdio.h>
int main()
{
    int mno, days;
    printf("Month :");
    scanf("%d", &mno);
    if (mno < 1 || mno > 12)
    {
        return 0;
    }
    else
    {
        switch (mno)
        {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30; break;
        default:
            days = 31;
        }
        printf("Noof days in %d is %d", mno, days);
    }
    return 0;
}