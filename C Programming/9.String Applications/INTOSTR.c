#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    printf("Enter");
    scanf("%d", &num);
    char b[10][10] = {" Zero ", " One ", " Two ", " Three ", " Four ", " Five ", " Six ", " Seven ", " Eight ", " Nine "};
    char ans[50] = "";
    while (num > 0)
    {
        int tmp = num % 10;
        num /= 10;
        strcat(ans, strrev(b[tmp]));
    }
    printf("%s", strrev(ans));
    return 0;
}