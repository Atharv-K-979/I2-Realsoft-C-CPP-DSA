#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// fwrite(&var,sizeof(var),<no_of_copies>,FILE*)-- lib fun used to write data to the binary file RETURNS INT
// fread(&var,sizeof(var),<no_of_copies>,<no of var>,FILE*)-- lib fun used to read data from the binary FILE
typedef struct book
{
    int bno;
    char bnm[15];
    int bprice;
} BOOK;
int main()
{
    BOOK b;
    int no;
    FILE *f = fopen("book.txt", "wb"); // write a binary file
    printf("Book data\n");
    while (1)
    {
        printf("Book no -");
        scanf("%d", &no);
        if (no == 0)
        {
            break;
        }
        b.bno=no;
        printf("Book name -");
        scanf("%s", b.bnm);
        printf("Book price -");
        scanf("%d", &b.bprice);
        fwrite(&b, sizeof(BOOK), 1, f);
    }
    fclose(f);
    return 0;
}