#include <stdio.h>
void toUpper(char p[])
{
    int i = 0;
    while (p[i] != '\0')
    {
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            p[i] = p[i] - 32;
        }
        i++;
    }
    printf("\n%s", p);
    return;
}
int main() {
    char p[50];
    void toUpper(char[]);
    printf("Enter string");
    gets(p);
    toUpper(p);
    return 0;
}