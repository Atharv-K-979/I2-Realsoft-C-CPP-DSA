#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    char ch;
    f1 = fopen("abc.txt", "r+"); // The fopen function is called with the filename "abc.txt" and the mode "r+".
    if (f1 == NULL)// No work in abc.txt file
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File opened successfully\n");
    while (1)
    {
        ch = fgetc(f1);// The fgetc function reads the next character from the file and assigns it to the variable ch
        if (feof(f1))//feof function detects the end of the file
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(f1);
    return 0;
}