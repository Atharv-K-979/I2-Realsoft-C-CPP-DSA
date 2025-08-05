#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1;
    char p[80];
    f1=fopen("abc1.txt","r");
    if(f1==NULL){
        printf("\nFile not found");
        return 0;
    }
    printf("\nMessage\n\n");
    while (1)
    {
        fgets(p,79,f1); //fgets reads up to n-1 characters from the file (in this case, 79 characters) or until a newline character (\n) is encountered, whichever comes first.
        // It appends a null terminator (\0) at the end of the string to make it a valid C string.
        if (feof(f1))
        {
            break;
        }
        puts(p);        
    }
    fclose(f1);
    return 0;
}