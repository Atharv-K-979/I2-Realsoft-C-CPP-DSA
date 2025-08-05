#include <stdio.h>
int main()
{
    void message(); // declaration
    message();      // calling
    return 0;
}
void message()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("Hello World !\n\n"); // defination
    }
    return;
}