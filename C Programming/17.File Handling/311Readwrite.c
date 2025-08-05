#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "311Readwritestu.h" // Removed as it is not needed
int main()
{
	FILE *fs;
	int no, mrk;
	char nm[15];
	fs = fopen("stu.txt", "r");
	if (fs == NULL)
	{
		printf("\nFile not found");
		return 1;
	}
	printf("\nStudent list");
	while (1)
	{
		fscanf(fs, "%d %s %d", &no, nm, &mrk);
		if (feof(fs))
		{
			break;
		}
		printf("\n%5d %-15s %5d", no, nm, mrk);
	}
	fclose(fs);
	return 0;
}