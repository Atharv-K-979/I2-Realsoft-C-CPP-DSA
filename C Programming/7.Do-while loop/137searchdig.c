#include <stdio.h>
int main() {
    int sdig;
    int num, digit, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to search for: ");
    scanf("%d", &sdig);
    if (sdig<0||sdig>9)
    {
        return 0;
    }
    while (num > 0) {
        digit = num % 10;
        if (digit == sdig) {
            found = 1;
            break;
        }
        num /= 10;
    }

    if (found) {
        printf("Digit %d found in the number.\n", sdig);
    } else {
        printf("Digit %d not found in the number.\n", sdig);
    }
    return 0;
}