#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void even();
void odd();
void sum_and_avg();
void max_and_min();
void remove_duplicates();
void reverse();

int main()
{
    int option;
    char choice;

    do
    {  
        printf("\n _______________MENU__________");

        printf("\n 1. Print the even-valued elements of the array");

        printf("\n 2. Print the odd-valued elements of the array");

        printf("\n 3. Calculate and print the sum and average of the elements of array");

        printf("\n 4. Print the maximum and minimum element of array");

        printf("\n 5. Remove the duplicates from the array");

        printf("\n 6. Print the array in reverse order");

        printf("\n 7. Exit");

        printf("\n\n  Enter Your Choice : ");  
        scanf("%d", &option);  //1

        switch (option)
        {
        case 1:
            even();
            break;
        case 2:
            odd();
            break;
        case 3:
            sum_and_avg();
            break;
        case 4:
            max_and_min();
            break;
        case 5:
            remove_duplicates();
            break;
        case 6:
            reverse();
            break;
        case 7:
            printf("Exiting Program........");
            exit(1);
        default:
            printf("\n Invalid Choice !");
            break;
        }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %s", &choice);
        //  y == 'Y' || y == 'y'
    } while (choice == 'Y' || choice == 'y');
    return 0;
}

void even()
{
    char op;
    int i, num, even = 0;

    printf("\n  Enter the size of an array : ");
    scanf("%d", &num);  //5
        //array[5]
    int array[num]; // Initializing array of same size
    printf("\n  Enter the elements of the array : ");
    //0<5 1<5 2<5 3<5 4<5
    for (i = 0; i < num; i++)
    {
        // 0 1 2 3 4
      // 10 20 50 51 45       
        scanf("%d", &array[i]);
    }
    printf("\n  Even numbers in the array are : ");
     // 10 20  50 51 45
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++; 
                // array[0] = 10 20 50
            printf("%d \t", array[i]);
        }
    }

} // End

// Defining the function odd()
void odd()
{
    char op;             // Initialization of variable
    int i, num, odd = 0; // Initialization and Declaration of Variables

    printf("\n  Enter the size of an array : "); // Initializations and declaration of variables
    scanf("%d", &num);

    int array[num];                                   // Initializing array of same shirt
    printf("\n  Enter the elements of the array : "); // Inputtin the size of the array
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n  Odd numbers in the array are: "); // Displaying the odd elements of the array

    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd++;
            printf("%d \t", array[i]);
        }
    }

} // End of function odd()

// Defining the function sum_and_avg()
void sum_and_avg()
{
    char op;
    int size, i, sum = 0; // Initialization and Declaration of Variables

    printf("\n  Enter the size of the arrays : "); // Inputting the size of the array
    scanf("%d", &size);

    int arr[size];                                   // Initializing the array of entered size
    printf("\n  Enter the elements of the array :"); // Inputting the elements in the array

    // Calculating the Sum of elements of the array
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\n  The sum of the array is : %d \n", sum);                // Displaying the sum of the elements of the array
    printf("\n  The average of the array is : %f", (float)sum / size); // Displaying the average of the     elements                                                                                                                                                                                  of the array

} // End of function sum_and_avg()

// Defining the function max_min()
void max_and_min()
{
    char op;
    int i, max, min, size; // Declaration of Variables

    printf("\n  Enter the size of the arrays : "); // Inputting the size of the array
    scanf("%d", &size);

    int arr[size];
    printf("\n  Enter the elements of the array : "); // Inputting the elements in the array

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Assume first element as maximum and minimum */
    max = arr[0];
    min = arr[0];

    /* Find maximum and minimum in all array elements*/
    for (i = 1; i < size; i++)
    {
        /* If current element is greater than max */
        if (arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    /* Print maximum and minimum element */
    printf("\n  Maximum element = %d\n", max);
    printf("\n  Minimum element = %d", min);

} // end of function max_and_min()

// Defining the function remove_duplicates()
void remove_duplicates()
{
    char op;
    int i, j, k, n; // Declaration of variables

    printf("\n   Enter array size: "); // Inputting the size of the array
    scanf("%d", &n);

    int arr[n]; // Initializing an array of entered size

    printf("\n   Enter %d array elements: ", n); // Entering the elements into the array

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n   Original array is: "); // Displaying the Original array
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\n   New array is: "); // Displayin the new array after removing duplicate items

    // Calculating the duplicate items and deleting those elements
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Displaying elements
    }

} // end

void reverse()
{
    char op;     // Declarations of Variables
    int size, i; // Declarations of Variables

    /* Input size of array */
    printf("\n  Enter size of the array : ");
    scanf("%d", &size);

    int arr[size];
    /* Input array elements */
    printf("\n  Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*Print array in reversed order*/
    printf("\n  Array in reverse order: ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}