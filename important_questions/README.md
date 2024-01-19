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

## 2. String Concatination without strcpy()
Write a program in C to concatenate two strings without using strcpy() function.
### Code
``` c
#include <stdio.h> 

int main(){
    char a[100], b[100], new_str[100];
    int i, j;

    printf("Enter the first string : ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the second string : ");
    fgets(b, sizeof(b), stdin);

    for(i = 0; i < a[i] != '\0'; i++) {
        if(a[i] != '\n') {
            new_str[i] = a[i];
        }
    }

    for(j = 0; j < b[j] != '\0'; j++) {
        if(b[i] != '\n') {
            new_str[i - 1 + j] = b[j];
        }
    }

    printf("The new string after concatination is : %s", new_str);
    return 0;
}
```

### Output
```
Enter the first string : computer 
Enter the second string : applications
The new string after concatination is : computer applications
```

## 3. GCD Calculation using Recursion
Write a program in C to find the GCD of two numbers using recursion.
### Code
``` c
#include <stdio.h>

int gcd(int dividend, int divisor) {
    if(divisor == 0) {
        return dividend;
    }
    else {
        return gcd(divisor, dividend % divisor);
    }
}

int main() {
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    if(b > a) { // swapping the values of a and b if b is greater than a
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("The sum of %d and %d is %d.\n", a, b, gcd(a, b));
}
```

### Output
```
Enter the first number : 125
Enter the second number : 5
The sum of 125 and 5 is 5.
```

## 4. Reverse a number
Write a program in C to reverse a number.
### Code
``` c
#include <stdio.h>

int main() {
    int n, reverse = 0, copy;

    printf("Enter a number : ");
    scanf("%d", &n); 
    copy = n; 

    while(n!= 0) { 
        reverse = reverse * 10 + n % 10; 
        n /= 10;
    }

    printf("The reverse of %d is %d.\n", copy, reverse);

    return 0;
}
```

### Output
```
Enter a number : 1234
The reverse of 1234 is 4321.
```

## 5. Fibonacci Series
Write a program in C to display the fibonacci series upto n terms.
### Code
``` c
#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0, n, i;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("\nThe terms of the fibonacci series upto %d are : 0, 1, ", n);

    for(i = 1; i <= n - 2; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    return 0;
}
```

### Output
```
Enter the number of terms : 10

The terms of the fibonacci series upto 10 are : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
```

## 6. Sum of Numbers using Recursion
Write a program to find the sum of a natural numbers using recursion..
### Code
``` c
#include <stdio.h>

int sum(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum of %d numbers is : %d", n, sum(n));

    return 0;
}
```

### Output
```
Enter a number : 10
The sum of 10 numbers is : 55
```

## 7. Factorial using recursion
Write a program in C to find the factorial of a number using recursion.
### Code
``` c
#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The factorial of the number %d is %d.\n", n, factorial(n));
}
```

### Output
```
Enter a number : 5
The factorial of the number 5 is 120.
```

## 8. Prime between Intervals
Write a program in C to find the prime number between intervals.
### Code
``` c
#include <stdio.h>

int primeCheck(int n) {
    int i, c = 0;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }

    return c == 2;
}

int main() {
    int starting, ending, i;

    printf("Enter starting number : ");
    scanf("%d", &starting);
    printf("Enter ending number : ");
    scanf("%d", &ending);

    printf("All the prime numbers between %d and %d are : \n", starting, ending);

    for(i = starting; i <= ending; i++) {
        if(primeCheck(i)) {
            printf("%d, ", i);
        }
    }

    return 0;
}
```

### Output
```
Enter starting number : 1
Enter ending number : 50 
All the prime numbers between 1 and 50 are : 
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
```