// Write a Program to reverse a number.
#include <stdio.h>

int main() {
    int num, reversedNum = 0, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
