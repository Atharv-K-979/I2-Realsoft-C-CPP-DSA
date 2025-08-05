#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fs;
    int no,mrk;
    char nm[15];
    fs=fopen("stu.txt","w");
    while (1)
    {
        printf("\nRoll no:");
        scanf("%d",&no);
        if (no==0)
        {
            break;   
        }
        printf("\nName");
        scanf("%s",&nm);
        printf("\nMarks");
        scanf("%d",&mrk);
        fprintf(fs,"%d %s %d\n",no,nm,mrk);
    }
    fclose(fs);
    return 0;
}