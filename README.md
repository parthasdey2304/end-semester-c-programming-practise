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

In C programming, you can take input from the user using the `scanf` function. The `scanf` function is part of the standard input-output library `stdio.h`. Here's a simple example of how to take input in C:

``` c
#include <stdio.h>

int main() {
    // Declare variables to store user input
    int age;
    float height;

    // Prompt the user for input
    printf("Enter your age: ");

    // Use scanf to read an integer from the user
    scanf("%d", &age);

    // Prompt the user for another input
    printf("Enter your height in meters: ");

    // Use scanf to read a float from the user
    scanf("%f", &height);

    // Display the entered values
    printf("You are %d years old and %.2f meters tall.\n", age, height);

    return 0;
}
```

### In this example
+ `Declaration of Variables` : We declare two variables, age and height, to store the user's age and height, respectively.
+ `Prompting for Input` : We use the printf function to display a prompt asking the user to enter their age.
+ `Taking Integer Input` : We use scanf to read an integer (%d) from the user. The & operator is used to get the memory address of the variable where the input will be stored.
+ `Prompting for Another Input` : We use printf again to prompt the user to enter their height.
+ `Taking Float Input` : We use scanf to read a floating-point number (%f) from the user.
+ `Displaying Input` : We use printf to display the entered values.

Remember to use the correct format specifier (%d for integers, %f for floats, etc.) in the scanf function based on the type of input you are expecting. Additionally, it's essential to handle user input carefully to avoid unexpected behavior, especially if the user provides input different from what your program expects.

## Operators
In C programming, operators are symbols that perform operations on variables and values. They are used to manipulate data and perform various computations. Here are the different types of operators in C along with example snippets:

### Arithmatic Operators
These are used for basic mathematical calculations.
``` c
#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int sum = a + b;       // Addition
    int difference = a - b; // Subtraction
    int product = a * b;    // Multiplication
    int quotient = a / b;   // Division
    int remainder = a % b;  // Modulus (remainder after division)

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
```

### Relational Operators
This is used for basic boolean calculations for comparison check values in either true of false.
``` c
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("%d > %d is %d\n", a, b, a > b);
    printf("%d < %d is %d\n", a, b, a < b);
    printf("%d == %d is %d\n", a, b, a == b);
    printf("%d != %d is %d\n", a, b, a != b);

    return 0;
}
```

### Logical Operators
This is used for logical operators, and for combining multiple conditions.
``` c
#include <stdio.h>

int main() {
    int x = 5, y = 10;

    printf("(x > 0) && (y > 0) is %d\n", (x > 0) && (y > 0));
    printf("(x > 0) || (y > 0) is %d\n", (x > 0) || (y > 0));
    printf("!(x > 0) is %d\n", !(x > 0));

    return 0;
}
```

### Assignment Operator
This is used to assign value to the variable.
``` c
#include <stdio.h>

int main() {
    int a = 5;
    a += 3; // Equivalent to a = a + 3, = is assignment operator
    printf("a is now %d\n", a);

    return 0;
}
```

### Bitwise Operator
This is used to perform calculations at Bit-Wise Level.
``` c
#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a & b is %d\n", a & b); // Bitwise AND
    printf("a | b is %d\n", a | b); // Bitwise OR
    printf("a ^ b is %d\n", a ^ b); // Bitwise XOR
    printf("~a is %d\n", ~a);       // Bitwise NOT

    return 0;
}
```


## If Conditions
### Sinple `if`
This is used to execute a block of code if a condition is true.
``` c
#include <stdio.h>

int main() {
    int x = 10;

    if (x > 5) {
        printf("x is greater than 5\n");
    }

    return 0;
}
```

### `if-else` Statement
This is used to execute one block of code if a condition is true and another block if it's false.
``` c
#include <stdio.h>

int main() {
    int x = 3;

    if (x % 2 == 0) {
        printf("x is even\n");
    } else {
        printf("x is odd\n");
    }

    return 0;
}
```

### `if-else if-else` Statement
This is used to check multiple conditions in sequence.
``` c
#include <stdio.h>

int main() {
    int score = 75;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
```
### Nested `if` Statement
This is used to have an `if` statement inside another `if` statement.
``` c
#include <stdio.h>

int main() {
    int x = 10, y = 5;

    if (x > 5) {
        printf("x is greater than 5\n");

        if (y > 2) {
            printf("y is greater than 2\n");
        }
    }

    return 0;
}
```
These examples illustrate the different ways `if` conditions can be used in C programming. The choice between them depends on the complexity of your program logic and the specific conditions you need to check.

## Break & Continue
Certainly! The `break` and `continue` statements are used to control the flow of loops in C programming.

### `break` Statement
This is used to exit a loop before its iterations ends based on a condition.
``` c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop at i = 5\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
```

#### Output
```
1 2 3 4 Breaking the loop at i = 5
```

### `continue` Statement
This is used to skip the rest of the loop body for the current iteration and move to the next iteration.
``` c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Skipping iteration at i = 3\n");
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
```

#### Output
```
1 2 Skipping iteration at i = 3
4 5
```
In the first example, the `break` statement is used to exit the `for` loop when `i` becomes equal to 5. In the second example, the `continue` statement is used to skip the iteration when i is equal to 3.

These statements are particularly useful for handling special cases or conditions within loops, allowing you to control the execution flow based on specific criteria.

## Switch Case

The `switch` statement in C allows you to perform different actions based on the value of an expression. It provides a way to streamline multiple `if-else` conditions, making the code more readable and concise. Here's an example of a `switch` statement:
``` c
#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Option 1.\n");
            break;

        case 2:
            printf("You chose Option 2.\n");
            break;

        case 3:
            printf("You chose Option 3.\n");
            break;

        default:
            printf("Invalid choice. Please choose between 1 and 3.\n");
    }

    return 0;
}
```

### Explanation
+ The user is prompted to enter a number between 1 to 3.
+ The entered value is stored in the variable `choice`.
+ The `switch` statement evaluates the value of `choice`.
+ If `choice` matches one of the `case` values, the corresponding block of the code is executed.
+ The `break` statement is used to exit the `switch` statement once a matching `case` is found.
+ If no `case` matches the value of `choice`, the code inside the `default` block is executed.

Remember that each `case` label must be a constant expression, and the `break` statement is used to exit the `switch` statement after executing the corresponding block. If a `break` statement is omitted, the control will `fall through` to the next `case`, and subsequent code blocks will be executed until a `break` is encountered or the end of the `switch` statement is reached.

### Fall Through
"Fall through" in the context of a switch statement in C refers to the behavior where control passes from one case label to the next one without encountering a break statement. When a case label is matched, the corresponding block of code is executed, and if there is no break statement, control falls through to the next case.

Here's an example to illustrate fall through in a switch statement:
``` c
#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Option 1.\n");
            // No break statement here, so control falls through to the next case.
        case 2:
            printf("You chose Option 2 or fell through from Option 1.\n");
            // No break statement here, so control falls through to the next case.
        case 3:
            printf("You chose Option 3 or fell through from Option 2.\n");
            // No break statement here.
        default:
            printf("Invalid choice. Please choose between 1 and 3.\n");
    }

    return 0;
}
```

#### Possible Outputs
+ If the user enters `1` :
```
You chose Option 1.
You chose Option 2 or fell through from Option 1.
You chose Option 3 or fell through from Option 2.
```
+ If the user enter `2` :
You chose Option 2 or fell through from Option 1.
You chose Option 3 or fell through from Option 2.
```

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
