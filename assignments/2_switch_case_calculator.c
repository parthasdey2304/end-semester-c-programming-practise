#include <stdio.h>

int main() {
    int choice, num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("\nEnter 1 for addition of 2 numbers. \nEnter 2 for subtraction of 2 numbers. \nEnter 3 for multiplication of 2 numbers. \nEnter 4 for division of 2 numbers. \nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Addition of %d and %d is %d.", num1, num2, num1+num2);
        break;

        case 2:
            printf("Subtraction of %d and %d is %d.", num1, num2, num1-num2);
        break;

        case 3:
            printf("Multiplication of %d and %d is %d.", num1, num2, num1*num2);
        break;

        case 4:
            printf("Division of %d and %d is %d.", num1, num2, num1/num2);
        break;

        default:
            printf("Invalid choice.");
        break;
    }
    return 0;
}