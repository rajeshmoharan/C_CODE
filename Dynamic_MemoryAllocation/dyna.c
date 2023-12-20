#include <stdio.h>
#include <stdlib.h>

int main() {
    int *marks;
    int numSubjects;
    
    // Get the number of subjects from the user
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);
    
    // Dynamically allocate memory using malloc
    marks = (int *)malloc(numSubjects * sizeof(int));
    
    // Check if memory allocation was successful
    if (marks == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }
    
    // Input marks for each subject
    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Display entered marks
    printf("\nEntered marks: ");
    for (int i = 0; i < numSubjects; ++i) {
        printf("%d ", marks[i]);
    }
    
    // Ask the user if they want to reallocate memory
    char choice;
    printf("\nDo you want to reallocate memory? (y/n): ");
    scanf(" %c", &choice);
    
    if (choice == 'y' || choice == 'Y') {
        // Get the new number of subjects
        int newNumSubjects;
        printf("Enter the new number of subjects: ");
        scanf("%d", &newNumSubjects);
        
        // Reallocate memory using realloc
        marks = (int *)realloc(marks, newNumSubjects * sizeof(int));
        
        // Check if memory reallocation was successful
        if (marks == NULL) {
            printf("Memory reallocation failed. Exiting...\n");
            free(marks); // Free the previously allocated memory before exiting
            return 1;
        }
        
        // Input marks for each subject in the reallocated memory
        for (int i = numSubjects; i < newNumSubjects; ++i) {
            printf("Enter mark for subject %d: ", i + 1);
            scanf("%d", &marks[i]);
        }
        
        numSubjects = newNumSubjects; // Update the number of subjects
    }
    
    // Display final marks
    printf("\nFinal marks: ");
    for (int i = 0; i < numSubjects; ++i) {
        printf("%d ", marks[i]);
    }
    
    // Free allocated memory before exiting
    free(marks);
    
    return 0;
}
