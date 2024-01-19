# C programming important questions
## 1. Power using recursion
Write a program in C to find x raised to the power y, using recursion.
### Code
``` c
#include <stdio.h>

int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent-1);
    }
}

int main() {
    int base, exponent, power_value;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    power_value = power(base, exponent);

    printf("The power of %d to the power of %d is %d.\n", base, exponent, power_value);
    return 0;
}
```

### Output
```
Enter the base : 2
Enter the exponent : 5
The power of 2 to the power of 5 is 32.
```