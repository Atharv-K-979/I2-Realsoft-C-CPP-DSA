#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int display(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("\nWelcome\n");
    }
    return 1;
}
int table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%4d", i * n);
    }
    return 2;
}
int prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            break;
        }
        i++;
    }
    if (i == n)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    return 3;
}
int main()
{
    int opt, n;
    int (*ptr)(int); // function pointer declaration
    printf("Menu \n1. Display\n2. Table\n3. Prime\n4. Exit\n");
    printf("Enter option :");
    scanf("%d", &opt);
    if (opt < 1 || opt > 4)
    {
        printf("Invalid option\n");
        return 1;
    }
    switch (opt)
    {
    case 1:
        ptr = display;
        break;
    case 2:
        ptr = table;
        break;
    case 3:
        ptr = prime;
        break;
    }
    printf("Enter number :");
    scanf("%d", &n);
    (*ptr)(n); // function pointer call
    return 0;
}