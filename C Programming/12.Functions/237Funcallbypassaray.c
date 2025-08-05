#include <stdio.h>
int main()
{
    int x[5], i = 0;
    void display(int[], int);
    printf("Array data");
    while (i < 5)
    {
        scanf("%d", &x[i]);
        i++;
    }
    display(x, 5);
    return 0;
}
void display(int x[],int n){
    int i=0;
    printf("\nData\n");
    while (i<n)
    {
        printf("%4d",x[i]);
        i++;
    }
    return;
}
// Output:
// Array data1
// 2
// 3
// 4
// 5
// Data
//    1   2   3   4   5
// The function display() is called with the array x[] and the number of elements in the array. The function display() displays the array elements. The function display() is defined after the main() function. The function display() is defined with the return type void. The function display() is defined with two arguments, an integer array x[] and an integer n
