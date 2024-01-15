<h1 align="center">
  <img src="https://skillicons.dev/icons?i=c" alt="Rust Logo" height="150px" width="150px">
</h1>

# Learn C Programming
Welcome to the learning repository for C programming basics. Whether you are a beginner or looking to refresh your knowledge, this repository will guide you through essential concepts.

## Table of Contents

1. [Basics of C Programming](#basics-of-c-programming)
2. [Variables](#variables)
3. [Data Types](#data-types)
4. [Taking Input](#taking-input)
5. [Operators](#operators)
6. [If Conditions](#if-conditions)
7. [Break & Continue](#break--continue)
8. [Switch Case](#switch-case)
9. [Functions](#functions)
10. [Function Types](#function-types)
11. [Return Types](#return-types)
12. [Recursion](#recursion)
13. [Arrays](#arrays)
14. [Array Declaration](#array-declaration)
15. [Initialization](#initialization)
16. [Adding Elements to Array](#adding-elements-to-array)
17. [Modifying Array Elements](#modifying-array-elements)

## Basics of C Programming

### Hello world program
``` c
#include <stdio.h>

int main() {
    printf("Hello world!");
    return 0;
}
```

+ `#include <stdio.h>` : This line is a preprocessor directive. It tells the compiler to include the standard input-output library `stdio.h`. This library provides functions like `printf` and `scanf` for input and output operations.
+ `int main() { ... }` : This is the main function. In C, the program execution begins from the `main` function. It returns an integer value `int`, typically used to indicate the success or failure of the program to the operating system.
+ `printf("Hello world!");` :This line is a function call to `printf`. It's a standard output function used to print formatted output to the console. In this case, it prints the string "Hello world!".
  + The format specifier `%s` is not used here because there are no additional arguments to be formatted. The string "Hello world!" is directly provided as an argument to `printf`.
+ `return 0;` : This statement indicates that the `main` function has finished executing, and it returns the value `0` to the operating system. A return value of `0` conventionally indicates successful execution to the calling environment.

+ In summary, this simple program includes the standard input-output library, defines the main function, uses `printf` to print the string "Hello world!" to the console, and returns 0 to indicate successful execution. When you run this program, it will print "Hello world!" to the console.

## Variables
### Definition:
In C programming, a variable is a named storage location in the computer's memory that can hold a value. Each variable has a specific data type, which determines the type of values it can store (e.g., integers, floating-point numbers, characters). Variables allow programmers to manipulate and store data during program execution.

``` c
#include <stdio.h>

int main() {
    // Declaration of variables
    int apples = 5;           // An integer variable to store the number of apples
    float temperature = 25.5; // A floating-point variable to store the temperature
    char grade = 'A';         // A character variable to store a grade

    // Using variables in a real-life context
    printf("I have %d apples.\n", apples);
    printf("The temperature is %.1f degrees Celsius.\n", temperature);
    printf("My grade is %c.\n", grade);

    return 0;
}

```

## Data Types
In C programming, data types define the types of data that a variable can hold. Data types specify the size and type of values that can be stored in variables, helping the compiler understand how to interpret and handle the data. C provides several fundamental data types, and they can be broadly categorized into the following:

### Basic Data Types
+ `int` : Integer data type is used to store whole numbers (positive or negative) without any decimal point.
``` c
int a = 5;
```
+ `float` : Float data type is used to store floating-point numbers (numbers with decimal points).
``` c
float price = 12.99;

```
+ `double` : Double data type is similar to float but has a higher precision, capable of holding larger and more accurate floating-point numbers.
``` c
double pi = 3.14159;
```
+ `char` : Char data type is used to store a single character or a small integer.
``` c
char grade = 'A';
```

### Derivatived Data Types
+ `Array` : An array is a collection of elements of the same data type stored in contiguous memory locations.
``` c
int numbers[5] = {1, 2, 3, 4, 5};
```
+ `Pointer` : A pointer is a variable that stores the memory address of another variable. It is used for dynamic memory allocation and manipulation.
``` c
int *ptr;
```

### Enumerate Data Types
+ `enum` : Enumerations provide a way to define named integer constants, making the code more readable.
```c
enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
```

### Void Data Type
+ `void` : Void is used to indicate that a function does not return any value.
``` c
void displayMessage() {
    printf("Hello, World!\n");
}
```
These data types allow C programmers to work with different kinds of data efficiently, ensuring appropriate memory allocation and manipulation. Choosing the right data type for a variable is crucial for optimizing memory usage and maintaining the accuracy of the data being stored.

## Taking Input

// Your explanation and code snippets here

## Operators

// Your explanation and code snippets here

## If Conditions

// Your explanation and code snippets here

## Break & Continue

// Your explanation and code snippets here

## Switch Case

// Your explanation and code snippets here

## Functions

// Your explanation and code snippets here

## Function Types

// Your explanation and code snippets here

## Return Types

// Your explanation and code snippets here

## Recursion

// Your explanation and code snippets here

## Arrays

// Your explanation and code snippets here

## Array Declaration

// Your explanation and code snippets here

## Initialization

// Your explanation and code snippets here

## Adding Elements to Array

// Your explanation and code snippets here

## Modifying Array Elements

// Your explanation and code snippets here

## Preprocessor Directive

// Your explanation and code snippets here

## Standard Template Library (STL)

// Your explanation and code snippets here

## For Now Check The Assignments Out
[Assignments Link!](https://github.com/parthasdey2304/end-semester-c-programming-practise/blob/main/assignments/)
