#include <stdio.h>

int main() {
    // Open a file for writing
    FILE *file = fopen("input_output.txt", "w");

    // Check if the file is successfully opened
    if (file == NULL) {
        printf("Error opening the file!\n");
        return 1; // Exit with an error code
    }

    // Prompt user for input
    printf("Enter some text: ");
    char input[100];
    fgets(input, 100, stdin);

    // Write input to the file
    fprintf(file, "User Input: %s", input);

    // Process the input (you can modify this part based on your program's logic)
    // For simplicity, let's just print the input back to the user
    printf("You entered: %s", input);

    // Write output to the file
    fprintf(file, "Program Output: %s", input);

    // Close the file
    fclose(file);

    return 0;
}
