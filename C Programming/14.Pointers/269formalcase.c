#include <stdio.h>
void toUpper(char *a)
{
    int i = 0;
    if (*a >= 97 && *a <= 122)
    {
        *a -= 32;
    }
    else
    {
        if (*a >= 65 && *a <= 90)
        {
            *a += 32;
        }
    }
}
int main()
{
    char ch[50];
    int i = 0;
    printf("String\n");
    gets(ch);
    puts(ch);
    for (i = 0; i != '\0'; i++)
    {
        toFormal(&ch[i]);
    }
    puts(ch);
    return 0;
}