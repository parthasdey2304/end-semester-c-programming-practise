#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *numbers, i;
    int largest;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    numbers = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code
    }

    // Input the elements of the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Assume the first element is the largest
    largest = numbers[0];

    // Find the largest number in the array
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Display the largest number
    printf("The largest number is: %d\n", largest);

    // Free dynamically allocated memory
    free(numbers);

    return 0;
}
