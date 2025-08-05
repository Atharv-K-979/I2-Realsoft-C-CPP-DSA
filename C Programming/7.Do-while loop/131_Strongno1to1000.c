#include <stdio.h>

int main() {
    for (int i = 1; i <= 1000; i++) {
        int num = i, sum = 0;

        while (num > 0) {
            int digit = num % 10;
            int fact = 1;

            for (int j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            num /= 10;
        }

        if (sum == i) {
            printf("Strong number: %d\n", i);
        }
    }
    return 0;
}