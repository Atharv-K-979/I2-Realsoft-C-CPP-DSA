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
    FILE *f = fopen("book.txt", "rb"); // write a binary file
    if (f==NULL)
    {
        printf("File not found");
        return 0;
    }
    printf("Book data\n");
    while (1)
    {
        fread(&b, sizeof(BOOK), 1, f);
        if (feof(f))
        {
            break;
        }
        printf("\n%4d %-15s %4d",b.bno,b.bnm,b.bprice);
       
        
    }
    fclose(f);
    return 0;
}