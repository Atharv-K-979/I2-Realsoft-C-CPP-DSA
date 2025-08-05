#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1;
    char p[80];
    f1=fopen("city.txt","r");
    if(f1==NULL){
        printf("File not found\n");
        return 0;
    }
    printf("\nMessage\n\n");
    while (1)
    {
        fgets(p,79,f1);
        if (feof(f1))
        {
            break;
        }
        puts(p);        
    }
    fclose(f1);
    return 0;
}