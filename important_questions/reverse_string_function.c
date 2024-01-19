#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n")] = 0;

    // Call the function to reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed String: %s\n", inputString);

    return 0;
}
