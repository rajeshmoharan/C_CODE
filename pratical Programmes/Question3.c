#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, digit, digit_sum = 0, digit_product = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    num = abs(num);

    while (num > 0) {

        digit = num % 10;

        digit_sum += digit;

        digit_product *= digit;

        num /= 10;
    }

    printf("Sum of digits: %d\n", digit_sum);
    printf("Product of digits: %d\n", digit_product);

    return 0;
}
