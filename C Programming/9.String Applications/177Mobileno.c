#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int st = strlen(s), i = 0;
    printf("Enter a string");
    scanf("%c", s);
    printf("stringc len %d", st);
    if ((st == 10) && (s[i] >= 6 && s[i] <= 9))////////////////////////doubt
    {
        while (s[i] != '\0')
        {
            if (s[i] >= 0 && s[i] <= 9)
            {
                i++;
            }
            else
                break;
        }
    }
    else
        printf(" Invalid mobile no ");
    if (s[i] == '\0')
        printf(" valid mobile no ");

    return 0;
}