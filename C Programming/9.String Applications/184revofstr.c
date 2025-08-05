#include <stdio.h>
int main()
{
    char p[50], q[50];
    int i = 0, j = 0, k = 0, r, tmp = 0, cnt = 0, l = 0, len[50], pos[50], wlen;
    printf("Enter String");
    gets(p);
    puts(p);
    while (1)
    {
        if (p[i] == 32 || p[i] == '\0')/////////////////doubt
        {
            r = i;
            wlen = r - l;
            len[j++] = wlen;
            pos[k++] = l;
            cnt++;
            if (p[i] == '\0')
            {
                break;
            }
            l = i + 1;
        }
        i++;
    }
    for (i = 0; i < cnt; i++)
    {
        printf("\n%d-%d-%d", i, pos[i], len[i]);
    }

    for (i = 0; i < cnt - 1; i++)
    {
        k = i;
        for (j = i + 1; j < cnt; j++)
        {
            if (len[j] < len[k])
                k = j;
        }
        if (i != k)
        {
            tmp = len[i];
            len[i] = len[k];
            len[k] = tmp;

            tmp = pos[i];
            pos[i] = pos[k];
            pos[k] = tmp;
        }
    }
    printf("\nOutput");
    for (i = 0; i < cnt; i++)
    {
        printf("\n%d-%d-%d", i, pos[i], len[i]);
    }
    for (i = 0, j = 0, k = 0; i < cnt; i++)
    {
        l = 0;
        j = pos[i];
        while (l < len[i])
        {
            q[k++] = p[j];
            j++;
            l++;
        }
        q[k++] = 32;
    }
    q[--k] = '\0';
    puts(q);
    return 0;
}