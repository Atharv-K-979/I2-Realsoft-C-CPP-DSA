#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no");
    scanf("%d", &no);
    int digCnt(int);
    printf("Dig count is %d", digCnt(no));
    return 0;
}
int digCnt(int k)
{
    int cnt = 0;
    while (k > 0)
    {
        cnt++;
        k /= 10;
    }

    return cnt;
}