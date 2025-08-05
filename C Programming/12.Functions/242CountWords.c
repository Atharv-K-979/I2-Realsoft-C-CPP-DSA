#include <stdio.h>
int countWords(char p[])
{
    int i = 0, cnt = 1;
    while (p[i] != '\0')
    {
        if (p[i] == 32)
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}
int main()
{
    int countWords(char[]);
    char p[10];
    printf("Enter String");
    gets(p);
    printf(" Word Counts Are %d", countWords(p));
    return 0;
}