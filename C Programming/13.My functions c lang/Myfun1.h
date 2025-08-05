// Defination of all functions

// to check no is odd or even
int oddEven(int no)
{
    return (no % 2);
}
// to compute dig sum
int digSum(int no)
{
    int tot = 0;
    while (no > 0)
    {
        tot += no % 10;
        no /= 10;
    }
    return tot;
}
// to generate a rev no
int reverse(int no)
{
    int rev = 0;
    while (no > 0)
    {
        rev = rev * 10 + no % 10;
        no /= 10;
    }
    return rev;
}
// to find no is prime
int isPrime(int no)
{
    int i = 2;
    while (i < no)
    {
        if (no % i == 0)
        {
            break;
        }
        i++;
    }
    return (i == no);
}
// to display table
int tableDisplay(int no)
{
    int i = 1;
    printf("\n Table");
    while (i <= 10)
    {
        printf("%4d", no * i);
        i++;
    }
}
// to count digits from a no
int digcnt(int no)
{
    int cnt = 0;
    while (no > 0)
    {
        cnt++;
        no /= 10;
    }
    return cnt;
}