#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("\nEnter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int *ptr = array;

    printf("\nElements of the array accessed using pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr++;
    }

    return 0;
}
