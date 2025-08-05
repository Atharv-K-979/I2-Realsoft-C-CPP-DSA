#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *f1;
    char ch;
    f1 = fopen("abc.txt", "w+");
    printf("Enter the data\n");
    while(1){
        scanf("%c", &ch);
        if(ch=='*'){
            break;
        }
        fputc(ch,f1);
    }
    fclose(f1);
    return 0;
}