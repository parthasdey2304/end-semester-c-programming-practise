# Comprehensive Number Programs for Class 9 ICSE

This document contains Java programs for various number types and conversions, designed specifically for Class 9 ICSE students. All programs use only main function with basic control structures.

## Table of Contents
1. Niven Number
2. Neon Number
3. Special Number
4. Kaprekar Number
5. Armstrong Number
6. Disarium Number
7. Happy Number
8. Magic Number
9. Automorphic Number
10. Fibonacci Number
11. Tribonacci Number
12. Artist Number
13. Tech Number
14. Lead Number
15. Duck Number
16. Palindrome Number
17. Emirp Number
18. Prime Number
19. Coprime Numbers
20. Twin Prime Numbers
21. Twisted Prime Number
22. Palindrome Prime Number
23. Duck Prime Number
24. Circular Prime Number
25. Keith Number
26. Smith Number
27. Fascinating Number
28. Sunny Number
29. Perrin Number
30. Perfect Number
31. Amicable Numbers
32. Sociable Numbers
33. Abundant Number
34. Friendly Numbers
35. Deficient Number
36. Evil Number
37. Odious Number
38. Trimorphic Number
39. Transcendental Number
40. Untouchable Number
41. Lucky Number
42. Bell Number
43. Euclid Number
44. Proth Number
45. Fibonacci Prime
46. Friedman Number
47. Leyland Number
48. Primorial Number
49. Ramanujan Number
50. Fortunate Number
51. Decimal to Binary Conversion
52. Decimal to Octal Conversion
53. Decimal to Hexadecimal Conversion
54. Binary to Decimal Conversion
55. Binary to Octal Conversion
56. Binary to Hexadecimal Conversion
57. Octal to Binary Conversion
58. Octal to Decimal Conversion
59. Octal to Hexadecimal Conversion
60. Hexadecimal to Decimal Conversion
61. Hexadecimal to Binary Conversion
62. Hexadecimal to Octal Conversion

---

## 1. Niven Number

**Question:** Write a program in Java to check if a number is a Niven Number or not.

**Logic:**
A Niven Number (or Harshad Number) is a number that is divisible by the sum of its digits.

**Explanation:**
We extract each digit of the number, calculate their sum, and check if the original number is divisible by this sum.

**Sample Input:**
12

**Sample Output:**
12 is a Niven Number.

**Code:**
```java
// Program to check if a number is a Niven Number
import java.util.Scanner;
class NivenNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digitSum, digit;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        digitSum = 0;
        
        // Calculate sum of digits
        while (n > 0) {
            digit = n % 10;    // Extract last digit
            digitSum = digitSum + digit; // Add to sum
            n = n / 10;        // Remove last digit
        }
        
        // Check if original number is divisible by digit sum
        if (original % digitSum == 0)
            System.out.println(original + " is a Niven Number.");
        else
            System.out.println(original + " is not a Niven Number.");
    }
}
```

**Dry Run:**
| n  | digit | digitSum | n (after n/10) | Condition | Output |
|----|-------|----------|----------------|-----------|--------|
| 12 | 2     | 2        | 1              | -         | -      |
| 1  | 1     | 3        | 0              | -         | -      |
| -  | -     | -        | -              | 12%3==0   | 12 is a Niven Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digitSum | int | Sum of all digits |
| digit | int | Individual digit extracted |

**Ending Lines:**
This program checks if a number is a Niven Number using only main function and basic control structures.

---

## 2. Neon Number

**Question:** Write a program in Java to check if a number is a Neon Number or not.

**Logic:**
A Neon Number is a number where the sum of digits of its square equals the original number.

**Explanation:**
We calculate the square of the number, then find the sum of digits of the square, and check if it equals the original number.

**Sample Input:**
9

**Sample Output:**
9 is a Neon Number.

**Code:**
```java
// Program to check if a number is a Neon Number
import java.util.Scanner;
class NeonNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, square, digitSum, digit;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Calculate square of the number
        square = n * n;
        digitSum = 0;
        
        // Calculate sum of digits of square
        while (square > 0) {
            digit = square % 10;     // Extract last digit
            digitSum = digitSum + digit; // Add to sum
            square = square / 10;    // Remove last digit
        }
        
        // Check if sum of digits equals original number
        if (digitSum == n)
            System.out.println(n + " is a Neon Number.");
        else
            System.out.println(n + " is not a Neon Number.");
    }
}
```

**Dry Run:**
| n | square | digit | digitSum | square (after square/10) | Condition | Output |
|---|--------|-------|----------|--------------------------|-----------|--------|
| 9 | 81     | 1     | 1        | 8                        | -         | -      |
| - | 8      | 8     | 9        | 0                        | -         | -      |
| - | -      | -     | -        | -                        | 9==9      | 9 is a Neon Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| square | int | Square of the input number |
| digitSum | int | Sum of digits of the square |
| digit | int | Individual digit extracted |

**Ending Lines:**
This program checks if a number is a Neon Number using only main function and basic control structures.

---

## 3. Special Number

**Question:** Write a program in Java to check if a number is a Special Number or not.

**Logic:**
A Special Number is a number where the sum of factorial of its digits equals the original number.

**Explanation:**
We extract each digit, calculate its factorial, sum all factorials, and check if it equals the original number.

**Sample Input:**
145

**Sample Output:**
145 is a Special Number.

**Code:**
```java
// Program to check if a number is a Special Number
import java.util.Scanner;
class SpecialNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digit, factorial, sum, i;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        sum = 0;
        
        // Process each digit
        while (n > 0) {
            digit = n % 10;    // Extract last digit
            
            // Calculate factorial of digit
            factorial = 1;
            for (i = 1; i <= digit; i++) {
                factorial = factorial * i;
            }
            
            sum = sum + factorial; // Add factorial to sum
            n = n / 10;           // Remove last digit
        }
        
        // Check if sum equals original number
        if (sum == original)
            System.out.println(original + " is a Special Number.");
        else
            System.out.println(original + " is not a Special Number.");
    }
}
```

**Dry Run:**
| n   | digit | i | factorial | sum | n (after n/10) | Condition | Output |
|-----|-------|---|-----------|-----|----------------|-----------|--------|
| 145 | 5     | 1 | 1         | 0   | 14             | -         | -      |
| -   | -     | 2 | 2         | -   | -              | -         | -      |
| -   | -     | 3 | 6         | -   | -              | -         | -      |
| -   | -     | 4 | 24        | -   | -              | -         | -      |
| -   | -     | 5 | 120       | 120 | -              | -         | -      |
| 14  | 4     | 1 | 1         | 120 | 1              | -         | -      |
| -   | -     | 2 | 2         | -   | -              | -         | -      |
| -   | -     | 3 | 6         | -   | -              | -         | -      |
| -   | -     | 4 | 24        | 144 | -              | -         | -      |
| 1   | 1     | 1 | 1         | 145 | 0              | -         | -      |
| -   | -     | - | -         | -   | -              | 145==145  | 145 is a Special Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digit | int | Individual digit extracted |
| factorial | int | Factorial of the current digit |
| sum | int | Sum of factorials of all digits |
| i | int | Loop counter for factorial calculation |

**Ending Lines:**
This program checks if a number is a Special Number using only main function and basic control structures.

---

## 4. Kaprekar Number

**Question:** Write a program in Java to check if a number is a Kaprekar Number or not.

**Logic:**
A Kaprekar Number is a number whose square can be split into two parts that add up to the original number.

**Explanation:**
We calculate the square, split it at different positions, and check if any split gives us the original number.

**Sample Input:**
297

**Sample Output:**
297 is a Kaprekar Number.

**Code:**
```java
// Program to check if a number is a Kaprekar Number
import java.util.Scanner;
class KaprekarNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, square, digits, divisor, leftPart, rightPart, i;
        boolean isKaprekar;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Calculate square of the number
        square = n * n;
        
        // Count digits in square
        digits = 0;
        int temp = square;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }
        
        isKaprekar = false;
        
        // Try all possible splits
        for (i = 1; i < digits; i++) {
            // Calculate divisor for splitting
            divisor = 1;
            int j;
            for (j = 1; j <= i; j++) {
                divisor = divisor * 10;
            }
            
            leftPart = square / divisor;    // Left part of square
            rightPart = square % divisor;   // Right part of square
            
            // Check if parts add up to original number
            if (leftPart + rightPart == n && rightPart != 0) {
                isKaprekar = true;
                break;
            }
        }
        
        // Display result
        if (isKaprekar)
            System.out.println(n + " is a Kaprekar Number.");
        else
            System.out.println(n + " is not a Kaprekar Number.");
    }
}
```

**Dry Run:**
| n   | square | digits | i | divisor | leftPart | rightPart | leftPart+rightPart | isKaprekar | Output |
|-----|--------|--------|---|---------|----------|-----------|-------------------|------------|--------|
| 297 | 88209  | 5      | 1 | 10      | 8820     | 9         | 8829              | false      | -      |
| -   | -      | -      | 2 | 100     | 882      | 9         | 891               | false      | -      |
| -   | -      | -      | 3 | 1000    | 88       | 209       | 297               | true       | 297 is a Kaprekar Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| square | int | Square of the input number |
| digits | int | Number of digits in square |
| divisor | int | Used to split the square |
| leftPart | int | Left part after splitting |
| rightPart | int | Right part after splitting |
| i, j | int | Loop counters |
| temp | int | Temporary variable for counting digits |
| isKaprekar | boolean | Flag to check if number is Kaprekar |

**Ending Lines:**
This program checks if a number is a Kaprekar Number using only main function and basic control structures.

---

## 5. Armstrong Number

**Question:** Write a program in Java to check if a number is an Armstrong Number or not.

**Logic:**
An Armstrong Number is a number that equals the sum of its digits raised to the power of the number of digits.

**Explanation:**
We count the digits, then calculate the sum of each digit raised to the power of total digits, and compare with the original number.

**Sample Input:**
153

**Sample Output:**
153 is an Armstrong Number.

**Code:**
```java
// Program to check if a number is an Armstrong Number
import java.util.Scanner;
class ArmstrongNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digits, digit, sum, power, i;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        
        // Count number of digits
        digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }
        
        sum = 0;
        n = original; // Reset n to original value
        
        // Calculate sum of digits raised to power of digit count
        while (n > 0) {
            digit = n % 10; // Extract last digit
            
            // Calculate digit^digits
            power = 1;
            for (i = 1; i <= digits; i++) {
                power = power * digit;
            }
            
            sum = sum + power; // Add to sum
            n = n / 10;       // Remove last digit
        }
        
        // Check if sum equals original number
        if (sum == original)
            System.out.println(original + " is an Armstrong Number.");
        else
            System.out.println(original + " is not an Armstrong Number.");
    }
}
```

**Dry Run:**
| n   | digits | digit | i | power | sum | n (after n/10) | Condition | Output |
|-----|--------|-------|---|-------|-----|----------------|-----------|--------|
| 153 | 3      | 3     | 1 | 3     | 0   | 15             | -         | -      |
| -   | -      | -     | 2 | 9     | -   | -              | -         | -      |
| -   | -      | -     | 3 | 27    | 27  | -              | -         | -      |
| 15  | -      | 5     | 1 | 5     | 27  | 1              | -         | -      |
| -   | -      | -     | 2 | 25    | -   | -              | -         | -      |
| -   | -      | -     | 3 | 125   | 152 | -              | -         | -      |
| 1   | -      | 1     | 1 | 1     | 152 | 0              | -         | -      |
| -   | -      | -     | 2 | 1     | -   | -              | -         | -      |
| -   | -      | -     | 3 | 1     | 153 | -              | -         | -      |
| -   | -      | -     | - | -     | -   | -              | 153==153  | 153 is an Armstrong Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digits | int | Total number of digits |
| digit | int | Individual digit extracted |
| sum | int | Sum of digits raised to power |
| power | int | Digit raised to the power of digit count |
| i | int | Loop counter |
| temp | int | Temporary variable for counting digits |

**Ending Lines:**
This program checks if a number is an Armstrong Number using only main function and basic control structures.

---

## 6. Disarium Number

**Question:** Write a program in Java to check if a number is a Disarium Number or not.

**Logic:**
A Disarium Number is a number where the sum of its digits raised to their respective positions equals the original number.

**Explanation:**
We extract each digit along with its position, calculate the sum of each digit raised to its position, and compare with the original number.

**Sample Input:**
175

**Sample Output:**
175 is a Disarium Number.

**Code:**
```java
// Program to check if a number is a Disarium Number
import java.util.Scanner;
class DisariumNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digits, digit, sum, power, position, i;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        
        // Count number of digits
        digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }
        
        sum = 0;
        n = original; // Reset n to original value
        position = digits; // Start from leftmost position
        
        // Calculate sum of digits raised to their positions
        while (n > 0) {
            digit = n % 10; // Extract last digit
            
            // Calculate digit^position
            power = 1;
            for (i = 1; i <= position; i++) {
                power = power * digit;
            }
            
            sum = sum + power; // Add to sum
            n = n / 10;       // Remove last digit
            position--;       // Move to next position
        }
        
        // Check if sum equals original number
        if (sum == original)
            System.out.println(original + " is a Disarium Number.");
        else
            System.out.println(original + " is not a Disarium Number.");
    }
}
```

**Dry Run:**
| n   | digits | position | digit | i | power | sum | n (after n/10) | Condition | Output |
|-----|--------|----------|-------|---|-------|-----|----------------|-----------|--------|
| 175 | 3      | 3        | 5     | 1 | 5     | 0   | 17             | -         | -      |
| -   | -      | -        | -     | 2 | 25    | -   | -              | -         | -      |
| -   | -      | -        | -     | 3 | 125   | 125 | -              | -         | -      |
| 17  | -      | 2        | 7     | 1 | 7     | 125 | 1              | -         | -      |
| -   | -      | -        | -     | 2 | 49    | 174 | -              | -         | -      |
| 1   | -      | 1        | 1     | 1 | 1     | 175 | 0              | -         | -      |
| -   | -      | -        | -     | - | -     | -   | -              | 175==175  | 175 is a Disarium Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digits | int | Total number of digits |
| digit | int | Individual digit extracted |
| sum | int | Sum of digits raised to their positions |
| power | int | Digit raised to its position |
| position | int | Current position of digit |
| i | int | Loop counter |
| temp | int | Temporary variable for counting digits |

**Ending Lines:**
This program checks if a number is a Disarium Number using only main function and basic control structures.

---

## 7. Happy Number

**Question:** Write a program in Java to check if a number is a Happy Number or not.

**Logic:**
A Happy Number is a number where repeatedly replacing it by the sum of squares of its digits eventually leads to 1.

**Explanation:**
We repeatedly calculate the sum of squares of digits. If we reach 1, it's happy. If we detect a cycle, it's not happy.

**Sample Input:**
7

**Sample Output:**
7 is a Happy Number.

**Code:**
```java
// Program to check if a number is a Happy Number
import java.util.Scanner;
class HappyNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digit, sumOfSquares, count;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        count = 0; // To prevent infinite loop
        
        // Continue until we reach 1 or detect cycle
        while (n != 1 && count < 50) {
            sumOfSquares = 0;
            
            // Calculate sum of squares of digits
            while (n > 0) {
                digit = n % 10;         // Extract last digit
                sumOfSquares = sumOfSquares + (digit * digit); // Add square
                n = n / 10;             // Remove last digit
            }
            
            n = sumOfSquares; // Update n with sum of squares
            count++;          // Increment counter
        }
        
        // Check if we reached 1
        if (n == 1)
            System.out.println(original + " is a Happy Number.");
        else
            System.out.println(original + " is not a Happy Number.");
    }
}
```

**Dry Run:**
| n | digit | sumOfSquares | n (after while) | count | Condition | Output |
|---|-------|--------------|-----------------|-------|-----------|--------|
| 7 | 7     | 49           | 49              | 1     | -         | -      |
| 49| 9     | 81           | 4               | -     | -         | -      |
| 4 | 4     | 97           | 97              | 2     | -         | -      |
| 97| 7     | 49           | 9               | -     | -         | -      |
| 9 | 9     | 130          | 130             | 3     | -         | -      |
| 130|0     | 0            | 13              | -     | -         | -      |
| 13| 3     | 9            | 1               | -     | -         | -      |
| 1 | 1     | 10           | 10              | 4     | -         | -      |
| 10| 0     | 0            | 1               | -     | -         | -      |
| 1 | 1     | 1            | 1               | 5     | -         | -      |
| - | -     | -            | -               | -     | 1==1      | 7 is a Happy Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digit | int | Individual digit extracted |
| sumOfSquares | int | Sum of squares of all digits |
| count | int | Counter to prevent infinite loop |

**Ending Lines:**
This program checks if a number is a Happy Number using only main function and basic control structures.

---

## 8. Magic Number

**Question:** Write a program in Java to check if a number is a Magic Number or not.

**Logic:**
A Magic Number is a number where repeatedly summing its digits eventually results in a single digit 1.

**Explanation:**
We repeatedly sum the digits until we get a single digit. If the final digit is 1, it's a magic number.

**Sample Input:**
19

**Sample Output:**
19 is a Magic Number.

**Code:**
```java
// Program to check if a number is a Magic Number
import java.util.Scanner;
class MagicNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, digit, sum;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        
        // Continue until single digit is obtained
        while (n >= 10) {
            sum = 0;
            
            // Calculate sum of digits
            while (n > 0) {
                digit = n % 10;    // Extract last digit
                sum = sum + digit; // Add to sum
                n = n / 10;        // Remove last digit
            }
            
            n = sum; // Update n with sum
        }
        
        // Check if final digit is 1
        if (n == 1)
            System.out.println(original + " is a Magic Number.");
        else
            System.out.println(original + " is not a Magic Number.");
    }
}
```

**Dry Run:**
| n  | digit | sum | n (after inner while) | n>=10 | Condition | Output |
|----|-------|-----|-----------------------|-------|-----------|--------|
| 19 | 9     | 9   | 1                     | -     | -         | -      |
| 1  | 1     | 10  | 10                    | true  | -         | -      |
| 10 | 0     | 0   | 1                     | -     | -         | -      |
| 1  | 1     | 1   | 1                     | false | -         | -      |
| -  | -     | -   | -                     | -     | 1==1      | 19 is a Magic Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| digit | int | Individual digit extracted |
| sum | int | Sum of all digits |

**Ending Lines:**
This program checks if a number is a Magic Number using only main function and basic control structures.

---

## 9. Automorphic Number

**Question:** Write a program in Java to check if a number is an Automorphic Number or not.

**Logic:**
An Automorphic Number is a number whose square ends with the same digits as the original number.

**Explanation:**
We calculate the square of the number and check if it ends with the same digits as the original number.

**Sample Input:**
25

**Sample Output:**
25 is an Automorphic Number.

**Code:**
```java
// Program to check if a number is an Automorphic Number
import java.util.Scanner;
class AutomorphicNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, square, divisor, digits, i;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Calculate square
        square = n * n;
        
        // Count digits in original number
        digits = 0;
        int temp = n;
        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }
        
        // Calculate divisor (10^digits)
        divisor = 1;
        for (i = 1; i <= digits; i++) {
            divisor = divisor * 10;
        }
        
        // Check if last 'digits' of square equal original number
        if (square % divisor == n)
            System.out.println(n + " is an Automorphic Number.");
        else
            System.out.println(n + " is not an Automorphic Number.");
    }
}
```

**Dry Run:**
| n  | square | digits | i | divisor | square%divisor | Condition | Output |
|----|--------|--------|---|---------|----------------|-----------|--------|
| 25 | 625    | 2      | 1 | 10      | -              | -         | -      |
| -  | -      | -      | 2 | 100     | 25             | -         | -      |
| -  | -      | -      | - | -       | -              | 25==25    | 25 is an Automorphic Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| square | int | Square of the input number |
| divisor | int | Used to extract last digits |
| digits | int | Number of digits in input |
| i | int | Loop counter |
| temp | int | Temporary variable for counting digits |

**Ending Lines:**
This program checks if a number is an Automorphic Number using only main function and basic control structures.

---

## 10. Fibonacci Number

**Question:** Write a program in Java to check if a number is a Fibonacci Number or not.

**Logic:**
A Fibonacci Number is part of the sequence where each number is the sum of the two preceding ones (0, 1, 1, 2, 3, 5, 8, ...).

**Explanation:**
We generate Fibonacci numbers until we either find the input number or exceed it.

**Sample Input:**
13

**Sample Output:**
13 is a Fibonacci Number.

**Code:**
```java
// Program to check if a number is a Fibonacci Number
import java.util.Scanner;
class FibonacciNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, first, second, next;
        boolean isFibonacci;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Handle special cases
        if (n == 0 || n == 1) {
            System.out.println(n + " is a Fibonacci Number.");
            System.exit(0);
        }
        
        // Initialize first two Fibonacci numbers
        first = 0;
        second = 1;
        isFibonacci = false;
        
        // Generate Fibonacci sequence
        while (second < n) {
            next = first + second; // Calculate next Fibonacci number
            first = second;        // Update first
            second = next;         // Update second
            
            if (second == n) {     // Check if we found the number
                isFibonacci = true;
                break;
            }
        }
        
        // Display result
        if (isFibonacci)
            System.out.println(n + " is a Fibonacci Number.");
        else
            System.out.println(n + " is not a Fibonacci Number.");
    }
}
```

**Dry Run:**
| n  | first | second | next | second<n | second==n | isFibonacci | Output |
|----|-------|--------|------|----------|-----------|-------------|--------|
| 13 | 0     | 1      | 1    | true     | false     | false       | -      |
| -  | 1     | 1      | 2    | true     | false     | false       | -      |
| -  | 1     | 2      | 3    | true     | false     | false       | -      |
| -  | 2     | 3      | 5    | true     | false     | false       | -      |
| -  | 3     | 5      | 8    | true     | false     | false       | -      |
| -  | 5     | 8      | 13   | true     | true      | true        | 13 is a Fibonacci Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| first | int | First Fibonacci number in sequence |
| second | int | Second Fibonacci number in sequence |
| next | int | Next Fibonacci number calculated |
| isFibonacci | boolean | Flag to check if number is Fibonacci |

**Ending Lines:**
This program checks if a number is a Fibonacci Number using only main function and basic control structures.

---

## 11. Tribonacci Number

**Question:** Write a program in Java to check if a number is a Tribonacci Number or not.

**Logic:**
A Tribonacci Number is part of the sequence where each number is the sum of the three preceding ones (0, 0, 1, 1, 2, 4, 7, ...).

**Explanation:**
We generate Tribonacci numbers until we either find the input number or exceed it.

**Sample Input:**
7

**Sample Output:**
7 is a Tribonacci Number.

**Code:**
```java
// Program to check if a number is a Tribonacci Number
import java.util.Scanner;
class TribonacciNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, first, second, third, next;
        boolean isTribonacci;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Handle special cases
        if (n == 0 || n == 1) {
            System.out.println(n + " is a Tribonacci Number.");
            System.exit(0);
        }
        
        // Initialize first three Tribonacci numbers
        first = 0;
        second = 0;
        third = 1;
        isTribonacci = false;
        
        // Generate Tribonacci sequence
        while (third < n) {
            next = first + second + third; // Calculate next Tribonacci number
            first = second;                // Update first
            second = third;                // Update second
            third = next;                  // Update third
            
            if (third == n) {              // Check if we found the number
                isTribonacci = true;
                break;
            }
        }
        
        // Display result
        if (isTribonacci)
            System.out.println(n + " is a Tribonacci Number.");
        else
            System.out.println(n + " is not a Tribonacci Number.");
    }
}
```

**Dry Run:**
| n | first | second | third | next | third<n | third==n | isTribonacci | Output |
|---|-------|--------|-------|------|---------|----------|--------------|--------|
| 7 | 0     | 0      | 1     | 1    | true    | false    | false        | -      |
| - | 0     | 1      | 1     | 2    | true    | false    | false        | -      |
| - | 1     | 1      | 2     | 4    | true    | false    | false        | -      |
| - | 1     | 2      | 4     | 7    | true    | true     | true         | 7 is a Tribonacci Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| first | int | First Tribonacci number in sequence |
| second | int | Second Tribonacci number in sequence |
| third | int | Third Tribonacci number in sequence |
| next | int | Next Tribonacci number calculated |
| isTribonacci | boolean | Flag to check if number is Tribonacci |

**Ending Lines:**
This program checks if a number is a Tribonacci Number using only main function and basic control structures.

---

## 12. Prime Number

**Question:** Write a program in Java to check if a number is a Prime Number or not.

**Logic:**
A Prime Number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

**Explanation:**
We check if the number has any divisors from 2 to the square root of the number.

**Sample Input:**
17

**Sample Output:**
17 is a Prime Number.

**Code:**
```java
// Program to check if a number is a Prime Number
import java.util.Scanner;
class PrimeNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i;
        boolean isPrime;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        // Handle special cases
        if (n <= 1) {
            System.out.println(n + " is not a Prime Number.");
            System.exit(0);
        }
        
        isPrime = true; // Assume number is prime
        
        // Check for divisors from 2 to sqrt(n)
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {  // If divisible, not prime
                isPrime = false;
                break;
            }
        }
        
        // Display result
        if (isPrime)
            System.out.println(n + " is a Prime Number.");
        else
            System.out.println(n + " is not a Prime Number.");
    }
}
```

**Dry Run:**
| n  | i | i*i<=n | n%i==0 | isPrime | Output |
|----|---|--------|--------|---------|--------|
| 17 | 2 | true   | false  | true    | -      |
| -  | 3 | true   | false  | true    | -      |
| -  | 4 | true   | false  | true    | -      |
| -  | 5 | false  | -      | true    | 17 is a Prime Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| i | int | Loop counter for checking divisors |
| isPrime | boolean | Flag to check if number is prime |

**Ending Lines:**
This program checks if a number is a Prime Number using only main function and basic control structures.

---

## 13. Palindrome Number

**Question:** Write a program in Java to check if a number is a Palindrome Number or not.

**Logic:**
A Palindrome Number reads the same backward as forward.

**Explanation:**
We reverse the number and compare it with the original number.

**Sample Input:**
121

**Sample Output:**
121 is a Palindrome Number.

**Code:**
```java
// Program to check if a number is a Palindrome Number
import java.util.Scanner;
class PalindromeNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, original, reversed, digit;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        original = n; // Store original number
        reversed = 0;
        
        // Reverse the number
        while (n > 0) {
            digit = n % 10;                    // Extract last digit
            reversed = reversed * 10 + digit;  // Build reversed number
            n = n / 10;                        // Remove last digit
        }
        
        // Check if original equals reversed
        if (original == reversed)
            System.out.println(original + " is a Palindrome Number.");
        else
            System.out.println(original + " is not a Palindrome Number.");
    }
}
```

**Dry Run:**
| n   | digit | reversed | n (after n/10) | Condition | Output |
|-----|-------|----------|----------------|-----------|--------|
| 121 | 1     | 1        | 12             | -         | -      |
| 12  | 2     | 12       | 1              | -         | -      |
| 1   | 1     | 121      | 0              | -         | -      |
| -   | -     | -        | -              | 121==121  | 121 is a Palindrome Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The number being processed |
| original | int | Store the original input number |
| reversed | int | The reversed number |
| digit | int | Individual digit extracted |

**Ending Lines:**
This program checks if a number is a Palindrome Number using only main function and basic control structures.

---

## 14. Perfect Number

**Question:** Write a program in Java to check if a number is a Perfect Number or not.

**Logic:**
A Perfect Number is a positive integer that equals the sum of its proper positive divisors.

**Explanation:**
We find all divisors except the number itself, sum them, and check if the sum equals the original number.

**Sample Input:**
28

**Sample Output:**
28 is a Perfect Number.

**Code:**
```java
// Program to check if a number is a Perfect Number
import java.util.Scanner;
class PerfectNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, sum, i;
        
        // Input the number
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        
        sum = 0; // Initialize sum of divisors
        
        // Find all proper divisors and sum them
        for (i = 1; i < n; i++) {
            if (n % i == 0) {     // If i is a divisor
                sum = sum + i;    // Add to sum
            }
        }
        
        // Check if sum equals original number
        if (sum == n)
            System.out.println(n + " is a Perfect Number.");
        else
            System.out.println(n + " is not a Perfect Number.");
    }
}
```

**Dry Run:**
| n  | i | n%i==0 | sum | Output |
|----|---|--------|-----|--------|
| 28 | 1 | true   | 1   | -      |
| -  | 2 | true   | 3   | -      |
| -  | 3 | false  | 3   | -      |
| -  | 4 | true   | 7   | -      |
| -  | 5 | false  | 7   | -      |
| -  | 6 | false  | 7   | -      |
| -  | 7 | true   | 14  | -      |
| -  | 8 | false  | 14  | -      |
| -  | 9 | false  | 14  | -      |
| -  | 10| false  | 14  | -      |
| -  | 11| false  | 14  | -      |
| -  | 12| false  | 14  | -      |
| -  | 13| false  | 14  | -      |
| -  | 14| true   | 28  | -      |
| -  | 15| false  | 28  | -      |
| -  | 16| false  | 28  | -      |
| -  | 17| false  | 28  | -      |
| -  | 18| false  | 28  | -      |
| -  | 19| false  | 28  | -      |
| -  | 20| false  | 28  | -      |
| -  | 21| false  | 28  | -      |
| -  | 22| false  | 28  | -      |
| -  | 23| false  | 28  | -      |
| -  | 24| false  | 28  | -      |
| -  | 25| false  | 28  | -      |
| -  | 26| false  | 28  | -      |
| -  | 27| false  | 28  | 28==28 |
| -  | - | -      | -   | 28 is a Perfect Number. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| n | int | The input number |
| sum | int | Sum of proper divisors |
| i | int | Loop counter for checking divisors |

**Ending Lines:**
This program checks if a number is a Perfect Number using only main function and basic control structures.

---

## 15. Decimal to Binary Conversion

**Question:** Write a program in Java to convert a decimal number to binary.

**Logic:**
Divide the decimal number by 2 repeatedly and collect the remainders in reverse order.

**Explanation:**
We divide the number by 2, store remainders, and build the binary representation.

**Sample Input:**
10

**Sample Output:**
Binary equivalent of 10 is 1010.

**Code:**
```java
// Program to convert decimal to binary
import java.util.Scanner;
class DecimalToBinary {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int decimal, remainder, binary, place;
        
        // Input the decimal number
        System.out.print("Enter a decimal number: ");
        decimal = sc.nextInt();
        
        if (decimal == 0) {
            System.out.println("Binary equivalent of 0 is 0.");
            System.exit(0);
        }
        
        binary = 0;
        place = 1; // Place value for binary digits
        
        // Convert decimal to binary
        while (decimal > 0) {
            remainder = decimal % 2;           // Get remainder
            binary = binary + remainder * place; // Add to binary
            place = place * 10;                // Update place value
            decimal = decimal / 2;             // Divide by 2
        }
        
        // Display result
        System.out.println("Binary equivalent is " + binary + ".");
    }
}
```

**Dry Run:**
| decimal | remainder | binary | place | decimal (after /2) | Output |
|---------|-----------|--------|-------|--------------------|--------|
| 10      | 0         | 0      | 10    | 5                  | -      |
| 5       | 1         | 10     | 100   | 2                  | -      |
| 2       | 0         | 10     | 1000  | 1                  | -      |
| 1       | 1         | 1010   | 10000 | 0                  | Binary equivalent is 1010. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| decimal | int | The input decimal number |
| remainder | int | Remainder when divided by 2 |
| binary | int | The binary representation |
| place | int | Place value for building binary |

**Ending Lines:**
This program converts decimal to binary using only main function and basic control structures.

---

## 16. Binary to Decimal Conversion

**Question:** Write a program in Java to convert a binary number to decimal.

**Logic:**
Multiply each binary digit by the corresponding power of 2 and sum them up.

**Explanation:**
We extract each digit from right to left, multiply by powers of 2, and sum to get decimal equivalent.

**Sample Input:**
1010

**Sample Output:**
Decimal equivalent of 1010 is 10.

**Code:**
```java
// Program to convert binary to decimal
import java.util.Scanner;
class BinaryToDecimal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int binary, decimal, digit, base, remainder;
        
        // Input the binary number
        System.out.print("Enter a binary number: ");
        binary = sc.nextInt();
        
        decimal = 0;
        base = 1; // Powers of 2: 1, 2, 4, 8, ...
        
        // Convert binary to decimal
        while (binary > 0) {
            remainder = binary % 10;        // Get rightmost digit
            decimal = decimal + remainder * base; // Add weighted digit
            base = base * 2;                // Next power of 2
            binary = binary / 10;           // Remove rightmost digit
        }
        
        // Display result
        System.out.println("Decimal equivalent is " + decimal + ".");
    }
}
```

**Dry Run:**
| binary | remainder | decimal | base | binary (after /10) | Output |
|--------|-----------|---------|------|--------------------|--------|
| 1010   | 0         | 0       | 2    | 101                | -      |
| 101    | 1         | 2       | 4    | 10                 | -      |
| 10     | 0         | 2       | 8    | 1                  | -      |
| 1      | 1         | 10      | 16   | 0                  | Decimal equivalent is 10. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| binary | int | The input binary number |
| decimal | int | The decimal equivalent |
| digit | int | Individual binary digit |
| base | int | Powers of 2 (1, 2, 4, 8, ...) |
| remainder | int | Rightmost digit of binary |

**Ending Lines:**
This program converts binary to decimal using only main function and basic control structures.

---

## 17. Decimal to Octal Conversion

**Question:** Write a program in Java to convert a decimal number to octal.

**Logic:**
Divide the decimal number by 8 repeatedly and collect the remainders in reverse order.

**Explanation:**
We divide the number by 8, store remainders, and build the octal representation.

**Sample Input:**
64

**Sample Output:**
Octal equivalent of 64 is 100.

**Code:**
```java
// Program to convert decimal to octal
import java.util.Scanner;
class DecimalToOctal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int decimal, remainder, octal, place;
        
        // Input the decimal number
        System.out.print("Enter a decimal number: ");
        decimal = sc.nextInt();
        
        if (decimal == 0) {
            System.out.println("Octal equivalent of 0 is 0.");
            System.exit(0);
        }
        
        octal = 0;
        place = 1; // Place value for octal digits
        
        // Convert decimal to octal
        while (decimal > 0) {
            remainder = decimal % 8;           // Get remainder
            octal = octal + remainder * place; // Add to octal
            place = place * 10;                // Update place value
            decimal = decimal / 8;             // Divide by 8
        }
        
        // Display result
        System.out.println("Octal equivalent is " + octal + ".");
    }
}
```

**Dry Run:**
| decimal | remainder | octal | place | decimal (after /8) | Output |
|---------|-----------|-------|-------|--------------------|--------|
| 64      | 0         | 0     | 10    | 8                  | -      |
| 8       | 0         | 0     | 100   | 1                  | -      |
| 1       | 1         | 100   | 1000  | 0                  | Octal equivalent is 100. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| decimal | int | The input decimal number |
| remainder | int | Remainder when divided by 8 |
| octal | int | The octal representation |
| place | int | Place value for building octal |

**Ending Lines:**
This program converts decimal to octal using only main function and basic control structures.

---

## 18. Hexadecimal to Decimal Conversion

**Question:** Write a program in Java to convert a hexadecimal number to decimal.

**Logic:**
For simplicity, we'll handle hexadecimal input as integers (0-9) and convert using base 16.

**Explanation:**
We extract each digit, multiply by powers of 16, and sum to get decimal equivalent.

**Sample Input:**
1A (represented as 19 for digits 1 and 10)

**Sample Output:**
Decimal equivalent is 26.

**Code:**
```java
// Program to convert hexadecimal to decimal (simplified for digits 0-9)
import java.util.Scanner;
class HexToDecimal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int hex, decimal, digit, base, remainder;
        
        // Input the hexadecimal number (digits only)
        System.out.print("Enter a hexadecimal number (digits 0-9 only): ");
        hex = sc.nextInt();
        
        decimal = 0;
        base = 1; // Powers of 16: 1, 16, 256, ...
        
        // Convert hexadecimal to decimal
        while (hex > 0) {
            remainder = hex % 10;           // Get rightmost digit
            decimal = decimal + remainder * base; // Add weighted digit
            base = base * 16;               // Next power of 16
            hex = hex / 10;                 // Remove rightmost digit
        }
        
        // Display result
        System.out.println("Decimal equivalent is " + decimal + ".");
    }
}
```

**Dry Run:**
| hex | remainder | decimal | base | hex (after /10) | Output |
|-----|-----------|---------|------|-----------------|--------|
| 1A  | A(10)     | 10      | 16   | 1               | -      |
| 1   | 1         | 26      | 256  | 0               | Decimal equivalent is 26. |

**Variable Description Chart:**
| Variable | Data Type | Description |
|----------|-----------|-------------|
| hex | int | The input hexadecimal number |
| decimal | int | The decimal equivalent |
| digit | int | Individual hex digit |
| base | int | Powers of 16 (1, 16, 256, ...) |
| remainder | int | Rightmost digit of hex |

**Ending Lines:**
This program converts hexadecimal to decimal using only main function and basic control structures.

---
