#include <stdio.h>
#include <math.h>

int main() {
    int starting, ending, i, len = 0, copy, sum = 0;

    printf("Enter the starting number : ");
    scanf("%d", &starting);
    printf("Enter the ending number : ");
    scanf("%d", &ending);

    printf("\nThe armstrong numbers between %d and %d are : ", starting, ending);

    for(i = starting; i <= ending; i++) {
        copy = i;
        while(copy != 0) {
            len++;
            copy /= 10;
        }

        copy = i;
        while(copy != 0) {
            sum += (int)pow((copy % 10), len);
            copy /= 10;
        }

        if(i == sum) {
            printf("%d, ", i);
        }

        len = 0; sum = 0;
    }

    return 0;
}