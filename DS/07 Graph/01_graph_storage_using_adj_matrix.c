#include <stdio.h>
#include <stdlib.h>
#define N 10
int adj[N][N], n;  // n vertices
void createGraph()
{
    int i, j, n;
    char type;
    printf("\nGraph Type\n D-Directed U-Undirected");
    scanf("%c", &type);
    if (type != 'U' && type != 'D')
    {
        printf("Invalid");
        return;
    }
    printf("\n Enter Vertices Count");
    scanf("%d", &n);
    while (1)
    {
        printf("\nSource Destination : ");
        scanf("%d %d", &i, &j);
        if (i == 0 && j == 0)
            break;
        if (i < 1 || i > n || j < 1 || j > n)
            continue;
        adj[i][j] = 1;
        if (type == 'U')
        {
            adj[j][i] = 1;
        }
    }
}
void displayGraph()
{
    printf("\nAdj Graph");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", adj[i][j]);
        }
        printf("\n");
    }
    return;
}
int main()
{
    createGraph();
    displayGraph();
    return 0;
}