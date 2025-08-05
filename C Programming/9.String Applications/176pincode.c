#include <stdio.h>
int main()
{

    char s[50];
    int i = 0;
    printf("Enter a string of pincode: ");
    scanf("%s", s);
    int st = strlen(s);
    if (st == 6)
    {
        while (s[i] != '\0')

            if (s[i] >= '0' && s[i] <= '9')
                i++;
            else
                break;
    }
    else
        return 0;

    if (s[i] == '\0')
        printf(" valid pincode ");
    else
        printf(" Invalid pincode ");
    return 0;
}
