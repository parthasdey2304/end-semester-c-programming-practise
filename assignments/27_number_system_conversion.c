#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal != 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert binary to decimal
void binaryToDecimal(int binary) {
    int decimal = 0, base = 1;

    while (binary != 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent: %d\n", decimal);
}

int main() {
    int choice, num;

    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            decimalToBinary(num);
            break;

        case 2:
            printf("Enter a binary number: ");
            scanf("%d", &num);
            binaryToDecimal(num);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
