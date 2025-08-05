#include <stdio.h>
void toLower(char p[]) {
    int i = 0;
    while (p[i] != '\0') {
        if (p[i] >= 'A' && p[i] <= 'Z') {
            p[i] = p[i] + 32;
        }
        i++;
    }
    printf("\n%s", p);
    return;
}
int main() {
    char p[50];
    void toLower(char[]);
    printf("Enter string");
    gets(p);
    toLower(p);
    return 0;
}