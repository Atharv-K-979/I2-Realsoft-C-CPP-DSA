#include <stdio.h>
char noWords()
{
    char p[10];
    int i=0, cnt = 1;
    printf("Enter String");
    gets(p);
    while (p[i] != '\0')
    {
        if (p[i] == 32 && p[i + 1] != 32)
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}
int main()
{
    char noWords();
    noWords();
    printf("%d", noWords());
    return 0;
}
