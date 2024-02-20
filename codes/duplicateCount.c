#include <stdio.h>

void printAlphabetAddresses(const char *str) {
    while (*str != '\0') {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            printf("Address of %c: %d\n", *str, (int *)str);
        }
        str++;
    }
}

int main() {
    int size;
    printf("Enter array size:");
    scanf("%d",&size);
    char inputString[size];
    printf("Enter String :");
    scanf("%s",&inputString); 

    printf("String: %s\n", inputString);
    printf("Addresses of alphabets in the string:\n");
    printAlphabetAddresses(inputString);

    return 0;
}
