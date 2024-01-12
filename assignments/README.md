# C Programming Assignment Questions

## 1. Display Fibonacci Sequence
Write a C program to display the Fibonacci sequence up to a specified number of terms. The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones.
### Code
``` c
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 0, i = 0;
    
    printf("Enter the number of terms in the fibonacci series : ");
    scanf("%d", &n);

    printf("The %d numbers of the fibonacci series is : \n0, 1, ");
    while((n-2) != i) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
        i++;
    }

    return 0;
}
```

### Output
```
Enter the number of terms in the fibonacci series : 10
The 10 numbers of the fibonacci series is : 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
```

## 2. Make a Simple Calculator Using switch...case
Develop a simple calculator using the switch...case statement. The program should take two numbers and an operator as input and perform the corresponding arithmetic operation.
### Code
``` c
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
```

### Output
```
Enter the first number : 5
Enter the second number : 4

Enter 1 for addition of 2 numbers. 
Enter 2 for subtraction of 2 numbers. 
Enter 3 for multiplication of 2 numbers. 
Enter 4 for division of 2 numbers. 
Enter your choice : 3
Multiplication of 5 and 4 is 20.
```

## 3. Find GCD of two Numbers
Create a C program to find the Greatest Common Divisor (GCD) of two given numbers using the Euclidean algorithm.
### Code
``` c
#include <stdio.h>

int gcd(int dividend, int divisor) { // this method returns the gcd of two numbers using recursion
    if(divisor == 0) {
        return dividend;
    }
    else {
        return gcd(divisor, dividend%divisor);
    }
}

int main() {
    int a, b, gcd_of_two;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    gcd_of_two = gcd(a, b);

    printf("\nThe GCD of %d and %d is %d.", a, b, gcd_of_two);
    return 0;
}
```

### Output
```
Enter the first number : 25
Enter the second number : 5

The GCD of 25 and 5 is 5.
```

## 4. Find LCM of two Numbers
Write a C program to find the Least Common Multiple (LCM) of two numbers. The LCM is the smallest positive integer that is divisible by both numbers.
### Code
``` c
#include <stdio.h>

int gcd(int dividend, int divisor) { // this method returns the gcd of two numbers using recursion
    if(divisor == 0) {
        return dividend;
    }
    else {
        return gcd(divisor, dividend%divisor);
    }
}

int main() {
    int a, b, lcm_of_two;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    lcm_of_two = (a * b)/gcd(a, b);

    printf("\nThe LCM of %d and %d is %d.", a, b, lcm_of_two);
    return 0;
}
```

### Output
```
Enter the first number : 5
Enter the second number : 7

The LCM of 5 and 7 is 35.
```


## 5. Display Character from A to Z Using Loop
Implement a C program to display characters from 'A' to 'Z' using loops. This program should print the uppercase English alphabet.
### Code
``` c
#include <stdio.h>

int main() {
    char i;
    printf("The alphabetical characters are : \n");

    for(i = 'a'; i <= 'z'; i++) {
        printf("%c, ", i);
    }

    return 0;
}
```
### Output
```
The alphabetical characters are : 
a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z,
```

## 6. Count Number of Digits of an Integer
Develop a C program to count and display the number of digits in an integer entered by the user.
### Code
``` c
#include <stdio.h>

int main() {
    int m, n, c = 0;
    printf("Enter a number : ");
    scanf("%d", &m);
    n = m;

    while(m != 0) {
        c++;
        m /= 10;
    }

    printf("\nThe number of digits in the number %d is %d.", n, c);
    return 0;
}
```

### Output
```
Enter a number : 123

The number of digits in the number 123 is 3.
```


## 7. Reverse a Number
Create a C program to reverse the digits of a given integer. For example, if the input is 123, the output should be 321.
### Code
``` c
#include <stdio.h>

int main() {
    int n, m, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("\nThe reverse of the number %d is %d.", m, rev);
    return 0;
}
```
### Output
```
Enter a number : 1234

The reverse of the number 1234 is 4321.
```

## 8. Calculate the Power of a Number
Write a C program to calculate the power of a number using a loop. Take the base and exponent as input and display the result.
### Code
``` c
#include <stdio.h>
#include <math.h>

int main() {
    int base, power;

    printf("Enter the base of the number : ");
    scanf("%d", &base);
    printf("Enter the power of the number : ");
    scanf("%d", &power);

    printf("\nThe value of the number %d^%d is %d.", base, power, (int)pow(base, power));
    return 0;
}
```

### Output
```
Enter the base of the number : 8
Enter the power of the number : 2

The value of the number 8^2 is 64.
```


## 9. Check Whether a Number is Palindrome or Not
Implement a C program to check whether a given number is a palindrome or not. A palindrome number remains the same when its digits are reversed.
### Code
``` c
#include <stdio.h>

int main() {
    int n, copy, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    copy = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf((copy == rev)? "\nThe number %d is a palindrome." : "\nThe number %d is not a palindrome.", copy);
    return 0;
}
```
### Output
```
Enter a number : 121

The number 121 is a palindrome.
```

## 10. Check Whether a Number is Prime or Not
Develop a C program to determine whether a given number is prime or not. A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers.
### Code
``` c
#include <stdio.h>

int main() {
    int n, c = 0, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }

    printf((c == 2)? "\nThe number %d is a prime number." : "\nThe number %d is not a prime number.", n);
    return 0;
}
}
```
### Output
```
Enter a number : 17

The number 17 is a prime number.
```

## 11. Display Prime Numbers Between Two Intervals
Write a C program to display all prime numbers within a specified range. Take the starting and ending values from the user.
### Code
``` c
#include <stdio.h>

int main() {
    int starting, ending, i, c;

    printf("Enter the starting number : ");
    scanf("%d", &starting);
    printf("Enter the ending number : ");
    scanf("%d", &ending);

    printf("\nThe prime numbers between %d and %d are : ", starting, ending);

    for(i = starting; i <= ending; i++) {
        c = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                c++;
            }
        }
        if(c == 2) {
            printf("%d, ", i);
        }
    }
    return 0;
}
```

### Output
```
Enter the starting number : 1
Enter the ending number : 20

The prime numbers between 1 and 20 are : 2, 3, 5, 7, 11, 13, 17, 19,
```

## 12. Check Armstrong Number
Create a C program to check if a given number is an Armstrong number. An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
### Code
``` c
#include <stdio.h>
#include <math.h>

int main() {
    int n, m, copy, sum = 0, len = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;
    copy = n;

    while(m != 0) {
        len++;
        m /= 10;
    }

    while(n != 0) {
        sum = sum + (int)pow((n % 10), len);
        n /= 10;
    }

    printf((copy == sum)? "\nThe number %d is an Armstrong number." : "\nThe number %d is not an Armstrong number.", copy);
    return 0;
}
```
### Output
```
Enter a number : 153

The number 153 is an Armstrong number.
```

## 13. Display Armstrong Number Between Two Intervals
Develop a C program to display all Armstrong numbers within a given range. Allow the user to input the starting and ending values.
### Code
``` c
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
```
### Output
```
Enter the starting number : 1
Enter the ending number : 500

The armstrong numbers between 1 and 500 are : 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407,
```

## 14. Display Factors of a Number
Write a C program to display all the factors of a given positive integer. Factors are the numbers that divide another number without leaving a remainder.
### Code
``` c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The factors of the number %d are : ", n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d, ", i);
        }
    }

    return 0;
}
```
### Output
```
Enter a number : 64
The factors of the number 64 are : 1, 2, 4, 8, 16, 32, 64,
```


## 15. Create Pyramid Structure
Implement a C program to create a pyramid structure using nested loops. Allow the user to input the number of rows.
### Code
``` c
#include <stdio.h>

int main() {
    int i, j, k;

    for(i = 1; i <= 5; i++) {
        for(k = 5; k >= i; k--) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```
### Output
```
     *
    * *
   * * *
  * * * *
 * * * * *
```


## 16. Find the Frequency of Characters in a String
Develop a C program to find and display the frequency of each character in a given string. Ignore case sensitivity.
### Code
``` c
#include <stdio.h>

int main() {
    char st[100], ch;
    int i, c;
    
    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    printf("\nThe frequency of characters is : \n");

    for(ch = 'a'; ch <= 'z'; ch++) {
        c = 0;
        for(i = 0; st[i] != '\0'; i++) {
            if(ch == st[i]) {
                c++;
            }
        }

        if(c > 0) {
            printf("\t%c : %d\n", ch, c);
        }
    }

    return 0;
}
```
### Output
```
Enter a string : partha

The frequency of characters is :
        a : 2
        h : 1
        p : 1
        r : 1
        t : 1
```

## 17. Count the Number of Vowels & Consonants
Write a C program to count the number of vowels and consonants in a given string. Consider both uppercase and lowercase letters.
### Code
``` c
#include <stdio.h>

int main() {
    char st[100], ch;
    int i, len = 0, vowels = 0;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        ch = st[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        len++;
    }

    len -= 1;

    printf("\nThe number of vowels present in the string is : %d.\nThe number of consonants present in the string is : %d.", vowels, len - vowels);
    return 0;
}
```
### Output
```
Enter a string : a quick brown jumped over the lazy dog

The number of vowels present in the string is : 11.
The number of consonants present in the string is : 27.
```

## 18. Remove all Characters in a String Except Alphabet
Create a C program to remove all characters from a string except alphabets. The modified string should be displayed as output.
### Code
``` c
#include <stdio.h>

int main() {
    char st[100], newst[100];
    int i, a = 0;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        if(st[i] >= 'a' && st[i] <= 'z') {
            newst[a] = st[i];
            a++;
        }

        if(st[i] >= 'A' && st[i] <= 'Z') {
            newst[a] = st[i];
            a++;
        }
        
        if(st[i] == ' ') {
            newst[a] == ' ';
            a++;
        }
    }

    printf("The new string after removing all the non alphabets is : %s", newst);

    return 0;
}
```
### Output
```
Enter a string : hello123
The new string after removing all the non alphabets is : hello
```


## 19. Find the Length of a String
Develop a C program to find and display the length of a given string without using standard library functions.
### Code
``` c
#include <stdio.h>

int main() {
    char st[100];
    int len = 0, i;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        len++;
    }

    len -= 1; // -1 because of the '\n' character at the end of the string needs to be ommited from the string

    printf("The length of the string is : %d.", len);

    return 0;
}
```
### Output
```
Enter a string : pneumonoultramicroscopicsilicovolcanoconiosis
The length of the string is : 45.
```


## 20. Concatenate Two Strings
Write a C program to concatenate two strings without using the strcat() function. Display the resulting string.
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
Enter the first string : Computer
Enter the second string : Application
The new string after concatination is : Computer Application
```

## 21. Copy String Without Using strcpy()
Implement a C program to copy one string into another without using the strcpy() function.
### Code
``` c
#include <stdio.h>

int main() {
    char st[100], copy[100];
    int i;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        if(st[i] != '\n') {
            copy[i] = st[i];
        }
    }

    printf("The new string after copying is : %s.", copy);
    return 0;
}
```
### Output
```
Enter a string : science
The new string after copying is : science.
```


## 22. Display Prime Numbers Between Intervals Using Function
Create a C program to display prime numbers within a specified range using a user-defined function for checking prime numbers.
### Code
``` c
#include <stdio.h>
#include <stdbool.h>

bool primeCheck(int n) {
    int c = 0, i;

    for(i = 1; i <= n; i++) {
        c += (n % i == 0)? 1 : 0;
    }

    return c == 2;
}

int main() {
    int starting, ending, i;

    printf("Enter the starting number : ");
    scanf("%d", &starting);
    printf("Enter the ending number : ");
    scanf("%d", &ending);

    printf("The prime numbers between %d and %d are : ", starting, ending);
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
Enter the starting number : 1
Enter the ending number : 50
The prime numbers between 1 and 50 are : 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
```

## 23. Check Prime Using User-defined Function
Develop a C program that uses a user-defined function to check whether a given number is prime or not.
### Code
``` c
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Found a factor, not a prime number
        }
    }

    return true; // If no factors found, it's a prime number
}

int main() {
    int number;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime and display the result
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

```
### Output
```
Enter a number: 23
23 is a prime number.
```

## 24. Find the Sum of Natural Numbers using Recursion
Write a C program to find the sum of the first N natural numbers using recursion.
### Code
``` c
#include <stdio.h>

int sum_of_n(int n) {
    if(n == 0) {
        return 0;
    }

    else {
        return n + sum_of_n(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum of %d natural numbers is : %d.\n", n, sum_of_n(n));
}
```
### Output
```
Enter a number : 5
The sum of 5 natural numbers is : 15.
```

## 25. Find Factorial of a Number Using Recursion
Develop a C program to find the factorial of a given number using a recursive function.
### Code
``` c
#include <stdio.h>

int factorial(int n) {
    return (n == 0)? 1 : n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The factorial of %d is : %d.\n", n, factorial(n));
    
    return 0;
}
```
### Output
```
Enter a number : 4
The factorial of 4 is : 24.
```

## 26. Find G.C.D Using Recursion
Create a C program to find the Greatest Common Divisor (GCD) of two numbers using a recursive function.
### Code
``` c
#include <stdio.h>

int gcd(int dividend, int divisor) { // this method returns the gcd of two numbers using recursion
    return (divisor == 0)? dividend : gcd(divisor, dividend%divisor);
}

int main() {
    int a, b, gcd_of_two;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    gcd_of_two = gcd(a, b);

    printf("\nThe GCD of %d and %d is %d.", a, b, gcd_of_two);
    return 0;
}
```
### Output
```
Enter the first number : 25
Enter the second number : 4

The GCD of 25 and 4 is 1.
```

## 27. Convert Binary Number to Decimal and vice-versa
Implement a C program that converts a binary number to its decimal equivalent and vice versa.
### Code
``` c
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

```
### Output
```
Choose an option:
1. Decimal to Binary
2. Binary to Decimal
Enter your choice (1 or 2): 2
Enter a binary number: 1011
Decimal equivalent: 11
```

## 28. Calculate Power Using Recursion
Write a C program to calculate the power of a number using recursion. Take the base and exponent as input.
### Code
``` c
#include <stdio.h>

int power(int base, int exponent) {
    return (exponent == 0)? 1 : power(base, exponent - 1) * base;
}

int main() {
    int base, exponent;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    printf("The number %d raised to the power %d is : %d.\n", base, exponent, power(base, exponent));

    return 0;
}
```
### Output
```
Enter the base : 5
Enter the exponent : 3
The number 5 raised to the power 3 is : 125.
```


## 29. Calculate Average Using Arrays
Develop a C program to calculate and display the average of elements in an array.
### Code
``` c
#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter the length of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements : ");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The average of the array elements is : %d.\n", sum / n);
    return 0;
}
```
### Output
```
Enter the length of the array : 5
Enter the array elements : 1
2
3
4
5
The average of the array elements is : 3.
```

## 30. Find Largest Element of an Array
Create a C program to find and display the largest element in an array.
### Code
``` c
#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the length of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements : ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    printf("The largest element of the array is : %d.\n", max);

    return 0;
}
```
### Output
```
Enter the length of the array : 5
Enter the array elements : 1
2
3
4
5
The largest element of the array is : 5.
```

## 31. Add Two Matrix Using Multi-dimensional Arrays
Write a C program to add two matrices using multi-dimensional arrays. Display the result.
### Code
``` c
#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    int arr1[rows][columns], arr2[rows][columns], sum[rows][columns];

    printf("Enter the elements of the first matrix : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // adding the two matrices and storing them in sum[][] matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
### Output
```
Enter the number of rows : 2
Enter the number of columns : 2
Enter the elements of the first matrix :
1
2
3
4
Enter the elements of the second matrix :
5
6
7
8
The sum of the two matrices is :
6 8
10 12
```

## 32. Find Transpose of a Matrix
Develop a C program to find the transpose of a matrix. Display both the original and transposed matrices.
### Code
``` c
#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe Original matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\nThe Transpose of the matrix is:\n");

    for (j = 0; j < columns; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}

```
### Output
```
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
1
2
3
4

The Original matrix is:
1 2
3 4

The Transpose of the matrix is:
1 3
2 4
```

## 33. Multiply two Matrices by Passing Matrix to a Function
Implement a C program that multiplies two matrices by passing them to a function. Display the original matrices and the result.
### Code
``` c
#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    // Initializing elements of matrix mult to 0
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

    // Input for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("Enter element b%d%d : ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Check if multiplication is possible
    if (columnFirst != rowSecond) {
        printf("Error! Multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
    } else {
        // Multiply the matrices
        multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

        // Display the matrices
        printf("\nFirst Matrix:\n");
        displayMatrix(firstMatrix, rowFirst, columnFirst);

        printf("\nSecond Matrix:\n");
        displayMatrix(secondMatrix, rowSecond, columnSecond);

        printf("\nResultant Matrix:\n");
        displayMatrix(result, rowFirst, columnSecond);
    }

    return 0;
}

```
### Output
```
Enter rows and columns for the first matrix: 2
2
Enter elements for the first matrix:
Enter element a11 : 1
Enter element a12 : 2
Enter element a21 : 3
Enter element a22 : 4

Enter rows and columns for the second matrix: 2
2
Enter elements for the second matrix:
Enter element b11 : 5
Enter element b12 : 6
Enter element b21 : 7
Enter element b22 : 8

First Matrix:
1 2
3 4

Second Matrix:
5 6
7 8

Resultant Matrix:
19 22
43 50
```

## 34. Access Elements of an Array Using Pointer
Write a C program to access elements of an array using pointers. Display the elements using pointer arithmetic.
``` c
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

```


## 35. Multiply two Matrix Using Multi-dimensional Arrays
Create a C program to multiply two matrices using multi-dimensional arrays. Display the original matrices and the result.
``` c

```


## 36. Write a Recursive Function to Find the Sum of n Natural Numbers
Develop a C program that uses a recursive function to find the sum of the first N natural numbers.
``` c

```


## 37. Program to Calculate Power (ab) using Recursion
Write a C program to calculate the power (ab) using recursion. Take the base and exponent as input.
``` c

```


## 38. Program to Concatenate Two Inputted Strings Without Using strcat()
Implement a C program to concatenate two inputted strings without using the strcat() function.
``` c

```


## 39. Program to Check Whether a Given String is a Palindrome or Not
Create a C program to check whether a given string is a palindrome or not. Ignore case sensitivity.
``` c

```


## 40. Program to Find the Sum of Two Diagonals of a Square Matrix
Write a C program to find and display the sum of the two diagonals of a square matrix.
``` c

```


## 41. Print the Series: 3,34,343,3434,34343,……. up to n Number of Terms
Develop a C program to print the series: 3, 34, 343, 3434, 34343, up to a specified number of terms.
``` c

```


## 42. Write a Program to Find the Largest Number from a Set of n Numbers Using Dynamic Memory
Allocate Memory Allocation.
``` c

```


