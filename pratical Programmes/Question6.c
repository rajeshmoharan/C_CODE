#include <stdio.h>

int main() {
    int n, i = 1, sum = 0, sign = 1;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    while (i <= n) {
        sum += sign * i;
        i++;
        sign = -sign;
    }

    printf("The sum of the first %d terms is: %d\n", n, sum);

    return 0;
}
