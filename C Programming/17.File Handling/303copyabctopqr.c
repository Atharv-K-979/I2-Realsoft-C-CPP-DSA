#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1,*f2;
    char ch;
    f1 = fopen("abc.txt","r");
    if (f1==NULL)
    {
        printf("\nFIle not found");
        return 1;
    }
    f2 = fopen("prq.txt","w");
    while (1)
    {
        ch = fgetc(f1);// The fgetc function reads the next character from the file and assigns it to the variable ch
        if (feof(f1))//feof function detects the end of the file
        {
            break;
        }
        fputc(ch,f2);//copies f2 from f1
    }
    while (1)
    {
        ch = fgetc(f2);// The fgetc function reads the next character from the file and assigns it to the variable ch
        if (feof(f2))//feof function detects the end of the file
        {
            break;
        }
        printf("%c", ch); 
    }
    fclose(f1);
    fclose(f2);
    return 0;
}