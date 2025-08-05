#include <stdio.h>
int main()
{
    void message(); // declaration
    for (int i = 0; i <= 3; i++)
    {
        message(); // calling
    }
    return 0;
}
void message()
{

    printf("Hello World !\n\n"); // defination
    return;
}