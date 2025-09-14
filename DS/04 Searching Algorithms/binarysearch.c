// // Array must be in order
// #include <stdio.h>
// int main()
// {
//     int x[10], i = 0;
//     int r, l, mid, sv;
//     printf("\nData\n");
//     while (i < 10)
//     {
//         scanf(" %d", &x[i]);
//         if (i > 0)
//         {
//             if (x[i] < x[i - 1])
//             {
//                 printf("invalid i/p");
//                 continue;
//             }
//         }
//         i++;
//     }
//     printf("Print search dig\n");
//     scanf("%d", &sv);
//     l = 0;
//     r = 9;
//     do
//     {
//         mid = (l + r) / 2;
//         if (sv == x[mid])
//         {
//             break;
//         }
//         else
//         {
//             if (sv < x[mid])
//                 r = mid - 1;
//             else
//                 l = mid + 1;
//         }
//     } while (l <= r);
//     if (l <= r)
//     {
//         printf("Found");
//     }
//     else
//         printf("Not Found");

//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

bool isFound(int n, int sv)
{
    int arr[n];
    int tmp;

    printf("Enter %d elements\n", n);
    // for (int i = 0; i < n;)
    // {
    //     scanf("%d", &arr[i]);

    //     // Check if the current element is in ascending order
    //     if (i > 0 && arr[i] < arr[i - 1])
    //     {
    //         printf("Enter value >= %d\n", arr[i - 1]);
    //         continue; // Don't increment i, repeat input
    //     }

    //     i++; // Move to next element
    // }
    int i = 0;
    printf("\nArray Data");
    while (i < n)
    {
        scanf("%d", (arr + i));
        if (i > 0 && arr[i] < arr[i - 1])
        {
            continue;
        }
        i++;
    }

    // Binary Search
    int st = 0, ed = n - 1, mid;
    while (st <= ed)
    {
        mid = (st + ed) / 2;

        if (arr[mid] == sv)
            return true;
        else if (sv < arr[mid])
            ed = mid - 1;
        else
            st = mid + 1;
    }

    return false;
}

int main()
{
    int n, sv;

    printf("Enter size of array:\n");
    scanf("%d", &n);

    printf("Enter number to search:\n");
    scanf("%d", &sv);

    if (isFound(n, sv))
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}