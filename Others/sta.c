#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Variable to store the size of the array
    int *dynamicArray; // Pointer to the dynamically allocated array

    // Getting the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocating memory for the array
    dynamicArray = (int *)malloc(n * sizeof(int));

    // Checking if memory allocation was successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1; // Exit with an error code
    }

    // Reading elements into the dynamically allocated array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &dynamicArray[i]);
    }

    // Displaying the elements of the dynamically allocated array
    printf("Elements in the dynamically allocated array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", dynamicArray[i]);
    }

    // Freeing the dynamically allocated memory when done
    free(dynamicArray);

    return 0;
}
