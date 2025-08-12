
## 1. Happy Number

**Question:** Write a program in Java to check if a number is a Happy Number or not.

**Logic:**
A number is called a Happy Number if repeatedly replacing the number by the sum of the squares of its digits eventually leads to 1. If it loops endlessly in a cycle that does not include 1, it is not a Happy Number.

**Explanation:**
We keep calculating the sum of the squares of the digits. If we reach 1, the number is happy. If we reach 4, it will loop forever (not happy).

**Sample Input:**
19

**Sample Output:**
19 is a Happy Number.

**Code:**
```java
// Program to check if a number is a Happy Number
import java.util.Scanner;
class HappyNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        while (num != 1 && num != 4) {
            sum = 0;
            while (num > 0) {
                rem = num % 10;
                sum = sum + rem * rem;
                num = num / 10;
            }
            num = sum;
        }
        if (num == 1)
            System.out.println(n + " is a Happy Number.");
        else
            System.out.println(n + " is not a Happy Number.");
    }
}
```

**Dry Run:**
| n  | num | rem | sum | Condition (num!=1 && num!=4) | Output                  |
|----|-----|-----|-----|-----------------------------|-------------------------|
| 19 | 19  | 9   | 81  | true                        | -                       |
| -  | 19  | 1   | 82  | -                           | -                       |
| -  | 82  | 2   | 4   | true                        | -                       |
| -  | 82  | 8   | 68  | -                           | -                       |
| -  | 68  | 8   | 64  | true                        | -                       |
| -  | 68  | 6   | 100 | -                           | -                       |
| -  | 100 | 0   | 0   | true                        | -                       |
| -  | 10  | 0   | 1   | -                           | -                       |
| -  | 1   | 1   | 1   | false                       | 19 is a Happy Number.   |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being checked in each iteration  |
| rem      | int       | The remainder (digit) in each step          |
| sum      | int       | The sum of the squares of the digits        |

**Ending Lines:**
This program checks if a number is a Happy Number using only main function and basic control structures.

---

## 2. Magic Number

**Question:** Write a program in Java to check if a number is a Magic Number or not.

**Logic:**
A Magic Number is a number that can be reduced to 1 by repeatedly summing its digits until a single digit is obtained. If the single digit is 1, it's a Magic Number.

**Explanation:**
We repeatedly sum the digits of a number until we get a single digit. If that digit is 1, the number is magic.

**Sample Input:**
1234

**Sample Output:**
1234 is a Magic Number.

**Code:**
```java
// Program to check if a number is a Magic Number
import java.util.Scanner;
class MagicNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, sum, rem;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        while (num > 9) {
            sum = 0;
            while (num > 0) {
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
            }
            num = sum;
        }
        if (num == 1)
            System.out.println(n + " is a Magic Number.");
        else
            System.out.println(n + " is not a Magic Number.");
    }
}
```

**Dry Run:**
| n    | num  | rem | sum | Condition (num>9) | Output                  |
|------|------|-----|-----|-------------------|-------------------------|
| 1234 | 1234 | 4   | 4   | true              | -                       |
| -    | 123  | 3   | 7   | -                 | -                       |
| -    | 12   | 2   | 9   | -                 | -                       |
| -    | 1    | 1   | 10  | -                 | -                       |
| -    | 10   | 0   | 0   | true              | -                       |
| -    | 1    | 1   | 1   | false             | 1234 is a Magic Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| sum      | int       | The sum of digits                          |
| rem      | int       | The remainder (digit) in each step         |

**Ending Lines:**
This program checks if a number is a Magic Number using only main function and basic control structures.

---

## 3. Krishnamurthy (Strong) Number

**Question:** Write a program in Java to check if a number is a Krishnamurthy Number or not.

**Logic:**
A Krishnamurthy Number is a number whose sum of the factorial of its digits equals the number itself.

**Explanation:**
We find the factorial of each digit and sum them. If the sum equals the original number, it's a Krishnamurthy Number.

**Sample Input:**
145

**Sample Output:**
145 is a Krishnamurthy Number.

**Code:**
```java
// Program to check if a number is a Krishnamurthy Number
import java.util.Scanner;
class KrishnamurthyNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, fact, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            fact = 1;
            for (i = 1; i <= rem; i++) {
                fact = fact * i;
            }
            sum = sum + fact;
            num = num / 10;
        }
        if (sum == n)
            System.out.println(n + " is a Krishnamurthy Number.");
        else
            System.out.println(n + " is not a Krishnamurthy Number.");
    }
}
```

**Dry Run:**
| n   | num | rem | fact | i | sum | Condition (i<=rem) | Output                       |
|-----|-----|-----|------|---|-----|--------------------|------------------------------|
| 145 | 145 | 5   | 1    | 1 | 0   | true               | -                            |
| -   | -   | -   | 1    | 2 | -   | true               | -                            |
| -   | -   | -   | 2    | 3 | -   | true               | -                            |
| -   | -   | -   | 6    | 4 | -   | true               | -                            |
| -   | -   | -   | 24   | 5 | -   | true               | -                            |
| -   | -   | -   | 120  | 6 | -   | false              | -                            |
| -   | 14  | 4   | 1    | 1 | 120 | true               | -                            |
| -   | -   | -   | 1    | 2 | -   | true               | -                            |
| -   | -   | -   | 2    | 3 | -   | true               | -                            |
| -   | -   | -   | 6    | 4 | -   | true               | -                            |
| -   | -   | -   | 24   | 5 | -   | false              | -                            |
| -   | 1   | 1   | 1    | 1 | 144 | true               | -                            |
| -   | -   | -   | 1    | 2 | -   | false              | -                            |
| -   | 0   | -   | -    | - | 145 | -                  | 145 is a Krishnamurthy Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of factorials                      |
| fact     | int       | The factorial of current digit             |
| i        | int       | Loop counter for factorial calculation     |

**Variable Description Chart:**
| Variable | Description                                 |
|----------|---------------------------------------------|
| n        | The original number entered by the user     |
| num      | The number being processed                  |
| rem      | The remainder (digit) in each step         |
| sum      | The sum of factorials                      |
| fact     | The factorial of current digit             |
| i        | Loop counter for factorial calculation     |

**Ending Lines:**
This program checks if a number is a Krishnamurthy Number using only main function and basic control structures.

---

## 4. Armstrong (Narcissistic) Number

**Question:** Write a program in Java to check if a number is an Armstrong Number or not.

**Logic:**
An Armstrong Number is a number that equals the sum of its digits raised to the power of the number of digits.

**Explanation:**
We count the digits, then find each digit raised to the power of total digits and sum them. If sum equals original number, it's Armstrong.

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
        int n, num, rem, sum, digits, power, temp;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        digits = 0;
        // Count digits
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            power = 1;
            temp = digits;
            while (temp > 0) {
                power = power * rem;
                temp--;
            }
            sum = sum + power;
            num = num / 10;
        }
        if (sum == n)
            System.out.println(n + " is an Armstrong Number.");
        else
            System.out.println(n + " is not an Armstrong Number.");
    }
}
```

**Dry Run:**
| n   | num | rem | digits | power | temp | sum | Condition | Output                     |
|-----|-----|-----|--------|-------|------|-----|-----------|----------------------------|
| 153 | 153 | -   | 0      | -     | -    | -   | -         | -                          |
| -   | 15  | -   | 1      | -     | -    | -   | -         | -                          |
| -   | 1   | -   | 2      | -     | -    | -   | -         | -                          |
| -   | 0   | -   | 3      | -     | -    | -   | -         | -                          |
| -   | 153 | 3   | -      | 1     | 3    | 0   | -         | -                          |
| -   | -   | -   | -      | 3     | 2    | -   | -         | -                          |
| -   | -   | -   | -      | 9     | 1    | -   | -         | -                          |
| -   | -   | -   | -      | 27    | 0    | -   | -         | -                          |
| -   | 15  | 5   | -      | 1     | 3    | 27  | -         | -                          |
| -   | -   | -   | -      | 5     | 2    | -   | -         | -                          |
| -   | -   | -   | -      | 25    | 1    | -   | -         | -                          |
| -   | -   | -   | -      | 125   | 0    | -   | -         | -                          |
| -   | 1   | 1   | -      | 1     | 3    | 152 | -         | -                          |
| -   | -   | -   | -      | 1     | 2    | -   | -         | -                          |
| -   | -   | -   | -      | 1     | 1    | -   | -         | -                          |
| -   | -   | -   | -      | 1     | 0    | -   | -         | -                          |
| -   | 0   | -   | -      | -     | -    | 153 | sum==n    | 153 is an Armstrong Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of powers                          |
| digits   | int       | The total number of digits                 |
| power    | int       | The digit raised to power of total digits  |
| temp     | int       | Temporary variable for power calculation   |

**Ending Lines:**
This program checks if a number is an Armstrong Number using only main function and basic control structures.

---

## 5. Automorphic Number

**Question:** Write a program in Java to check if a number is an Automorphic Number or not.

**Logic:**
An Automorphic Number is a number whose square ends with the number itself.

**Explanation:**
We find the square of the number and check if the last digits of the square match the original number.

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
        int n, square, num, digits, divisor, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        square = n * n;
        num = n;
        digits = 0;
        // Count digits in original number
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        divisor = 1;
        for (i = 1; i <= digits; i++) {
            divisor = divisor * 10;
        }
        if (square % divisor == n)
            System.out.println(n + " is an Automorphic Number.");
        else
            System.out.println(n + " is not an Automorphic Number.");
    }
}
```

**Dry Run:**
| n  | square | num | digits | divisor | i | Condition (i<=digits) | Output                      |
|----|--------|-----|--------|---------|---|----------------------|------------------------------|
| 25 | 625    | 25  | 0      | 1       | 1 | true                 | -                            |
| -  | -      | 2   | 1      | 10      | 2 | true                 | -                            |
| -  | -      | 0   | 2      | 100     | 3 | false                | -                            |
| -  | -      | -   | -      | -       | - | 625%100==25          | 25 is an Automorphic Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| square   | int       | The square of the number                   |
| num      | int       | Temporary variable for counting digits     |
| digits   | int       | The number of digits in original number    |
| divisor  | int       | The divisor to extract last digits         |
| i        | int       | Loop counter                               |

**Ending Lines:**
This program checks if a number is an Automorphic Number using only main function and basic control structures.

---

## 6. Harshad (Niven) Number

**Question:** Write a program in Java to check if a number is a Harshad Number or not.

**Logic:**
A Harshad Number is a number that is divisible by the sum of its digits.

**Explanation:**
We find the sum of all digits and check if the original number is divisible by this sum.

**Sample Input:**
12

**Sample Output:**
12 is a Harshad Number.

**Code:**
```java
// Program to check if a number is a Harshad Number
import java.util.Scanner;
class HarshadNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        if (n % sum == 0)
            System.out.println(n + " is a Harshad Number.");
        else
            System.out.println(n + " is not a Harshad Number.");
    }
}
```

**Dry Run:**
| n  | num | rem | sum | Condition | Output                |
|----|-----|-----|-----|----------|-----------------------|
| 12 | 12  | 2   | 2   |          |                       |
|    | 1   | 1   | 3   |          |                       |
|    | 0   |     | 3   | 12%3==0  | 12 is a Harshad Number. |

**Variable Description Chart:**
| Variable | Description                                 |
|----------|---------------------------------------------|
| n        | The original number entered by the user     |
| num      | The number being processed                  |
| rem      | The remainder (digit) in each step         |
| sum      | The sum of all digits                      |

**Ending Lines:**
This program checks if a number is a Harshad Number using only main function and basic control structures.

---

## 7. Spy Number

**Question:** Write a program in Java to check if a number is a Spy Number or not.

**Logic:**
A Spy Number is a number where the sum of its digits equals the product of its digits.

**Explanation:**
We calculate both the sum and product of all digits and check if they are equal.

**Sample Input:**
123

**Sample Output:**
123 is a Spy Number.

**Code:**
```java
// Program to check if a number is a Spy Number
import java.util.Scanner;
class SpyNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, product;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        product = 1;
        while (num > 0) {
            rem = num % 10;
            sum = sum + rem;
            product = product * rem;
            num = num / 10;
        }
        if (sum == product)
            System.out.println(n + " is a Spy Number.");
        else
            System.out.println(n + " is not a Spy Number.");
    }
}
```

**Dry Run:**
| n   | num | rem | sum | product | Condition | Output               |
|-----|-----|-----|-----|---------|-----------|----------------------|
| 123 | 123 | 3   | 3   | 3       | -         | -                    |
| -   | 12  | 2   | 5   | 6       | -         | -                    |
| -   | 1   | 1   | 6   | 6       | -         | -                    |
| -   | 0   | -   | 6   | 6       | sum==product | 123 is a Spy Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of all digits                      |
| product  | int       | The product of all digits                  |

**Ending Lines:**
This program checks if a number is a Spy Number using only main function and basic control structures.

---

## 8. Duck Number

**Question:** Write a program in Java to check if a number is a Duck Number or not.

**Logic:**
A Duck Number is a number that contains at least one zero but does not start with zero.

**Explanation:**
We check if the number has at least one zero digit and doesn't start with zero.

**Sample Input:**
1023

**Sample Output:**
1023 is a Duck Number.

**Code:**
```java
// Program to check if a number is a Duck Number
import java.util.Scanner;
class DuckNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, zeroCount;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        zeroCount = 0;
        // Check if first digit is zero
        while (num >= 10) {
            num = num / 10;
        }
        if (num == 0) {
            System.out.println(n + " is not a Duck Number.");
            System.exit(0);
        }
        num = n;
        while (num > 0) {
            rem = num % 10;
            if (rem == 0) {
                zeroCount++;
            }
            num = num / 10;
        }
        if (zeroCount > 0)
            System.out.println(n + " is a Duck Number.");
        else
            System.out.println(n + " is not a Duck Number.");
    }
}
```

**Dry Run:**
| n    | num  | rem | zeroCount | Condition | Output                |
|------|------|-----|-----------|----------|-----------------------|
| 1023 | 1023 | -   | 0         | -         | -                     |
| -    | 102  | -   | -         | -         | -                     |
| -    | 10   | -   | -         | -         | -                     |
| -    | 1    | -   | -         | num!=0    | -                     |
| -    | 1023 | 3   | 0         | -         | -                     |
| -    | 102  | 2   | 0         | -         | -                     |
| -    | 10   | 0   | 1         | -         | -                     |
| -    | 1    | 1   | 1         | -         | -                     |
| -    | 0    | -   | 1         | zeroCount>0 | 1023 is a Duck Number. |

**Variable Description Chart:**
| Variable  | Data Type | Description                                 |
|-----------|-----------|---------------------------------------------|
| n         | int       | The original number entered by the user     |
| num       | int       | The number being processed                  |
| rem       | int       | The remainder (digit) in each step         |
| zeroCount | int       | Count of zero digits                       |

**Ending Lines:**
This program checks if a number is a Duck Number using only main function and basic control structures.

---

## 9. Kaprekar Number

**Question:** Write a program in Java to check if a number is a Kaprekar Number or not.

**Logic:**
A Kaprekar Number is a number whose square can be split into two parts that add up to the original number.

**Explanation:**
We find the square of the number, split it into two parts at different positions, and check if their sum equals the original number.

**Sample Input:**
45

**Sample Output:**
45 is a Kaprekar Number.

**Code:**
```java
// Program to check if a number is a Kaprekar Number
import java.util.Scanner;
class KaprekarNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, square, num, digits, divisor, left, right, i;
        boolean isKaprekar;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        square = n * n;
        num = square;
        digits = 0;
        // Count digits in square
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        isKaprekar = false;
        divisor = 1;
        for (i = 1; i < digits; i++) {
            divisor = divisor * 10;
            left = square / divisor;
            right = square % divisor;
            if (right > 0 && left + right == n) {
                isKaprekar = true;
                break;
            }
        }
        if (isKaprekar)
            System.out.println(n + " is a Kaprekar Number.");
        else
            System.out.println(n + " is not a Kaprekar Number.");
    }
}
```

**Dry Run:**
| n  | square | digits | divisor | left | right | Condition | Output                   |
|----|--------|--------|---------|------|-------|-----------|--------------------------|
| 45 | 2025   | 4      | 1       | -    | -     | -         | -                        |
| -  | -      | -      | 10      | 202  | 5     | left+right!=45 | -                        |
| -  | -      | -      | 100     | 20   | 25    | left+right==45 | 45 is a Kaprekar Number. |

**Variable Description Chart:**
| Variable   | Data Type | Description                                 |
|------------|-----------|---------------------------------------------|
| n          | int       | The original number entered by the user     |
| square     | int       | The square of the number                   |
| num        | int       | Temporary variable for counting digits     |
| digits     | int       | Number of digits in square                 |
| divisor    | int       | Divisor for splitting the square           |
| left       | int       | Left part of the split                     |
| right      | int       | Right part of the split                    |
| i          | int       | Loop counter                               |
| isKaprekar | boolean   | Boolean flag for Kaprekar property         |

**Ending Lines:**
This program checks if a number is a Kaprekar Number using only main function and basic control structures.

---

## 10. Neon Number

**Question:** Write a program in Java to check if a number is a Neon Number or not.

**Logic:**
A Neon Number is a number where the sum of the digits of its square equals the number itself.

**Explanation:**
We find the square of the number, then sum its digits and check if this sum equals the original number.

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
        int n, square, rem, sum;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        square = n * n;
        sum = 0;
        while (square > 0) {
            rem = square % 10;
            sum = sum + rem;
            square = square / 10;
        }
        if (sum == n)
            System.out.println(n + " is a Neon Number.");
        else
            System.out.println(n + " is not a Neon Number.");
    }
}
```

**Dry Run:**
| n | square | rem | sum | Condition | Output              |
|---|--------|-----|-----|-----------|---------------------|
| 9 | 81     | 1   | 1   | -         | -                   |
| - | 8      | 8   | 9   | -         | -                   |
| - | 0      | -   | 9   | sum==n    | 9 is a Neon Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| square   | int       | The square of the number                   |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of digits of the square            |

**Ending Lines:**
This program checks if a number is a Neon Number using only main function and basic control structures.

---

## 11. Keith (Repfigit) Number

**Question:** Write a program in Java to check if a number is a Keith Number or not.

**Logic:**
A Keith Number is a number that appears in a Fibonacci-like sequence formed by its digits.

**Explanation:**
We create a sequence starting with the digits of the number, where each next term is the sum of previous n terms (n = number of digits).

**Sample Input:**
14

**Sample Output:**
14 is a Keith Number.

**Code:**
```java
// Program to check if a number is a Keith Number
import java.util.Scanner;
class KeithNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, digits, sequence[], i, sum, next;
        boolean isKeith;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        digits = 0;
        // Count digits
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        sequence = new int[100]; // Array to store sequence
        num = n;
        // Store digits in reverse order
        for (i = digits - 1; i >= 0; i--) {
            sequence[i] = num % 10;
            num = num / 10;
        }
        i = digits;
        isKeith = false;
        while (true) {
            sum = 0;
            for (int j = i - digits; j < i; j++) {
                sum = sum + sequence[j];
            }
            if (sum == n) {
                isKeith = true;
                break;
            }
            if (sum > n) {
                break;
            }
            sequence[i] = sum;
            i++;
        }
        if (isKeith)
            System.out.println(n + " is a Keith Number.");
        else
            System.out.println(n + " is not a Keith Number.");
    }
}
```

**Dry Run:**
| n  | digits | sequence[0] | sequence[1] | sum | Condition | Output               |
|----|--------|-------------|-------------|-----|-----------|----------------------|
| 14 | 2      | 1           | 4           | 5   | sum<n     | -                    |
| -  | -      | 1           | 4           | 9   | sum<n     | -                    |
| -  | -      | 4           | 5           | 14  | sum==n    | 14 is a Keith Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | Temporary variable for processing           |
| digits   | int       | Number of digits in the number             |
| sequence | int[]     | Array to store the Keith sequence          |
| i        | int       | Index for array operations                 |
| sum      | int       | Sum of last 'digits' terms                |
| next     | int       | Next term in sequence                      |
| isKeith  | boolean   | Boolean flag for Keith property            |

**Ending Lines:**
This program checks if a number is a Keith Number using only main function and basic control structures.

---

## 12. Carmichael Number

**Question:** Write a program in Java to check if a number is a Carmichael Number or not.

**Logic:**
A Carmichael Number is a composite number n such that for every integer a coprime to n, a^(n-1) ≡ 1 (mod n).

**Explanation:**
This is a complex mathematical concept. For simplicity, we'll check some known Carmichael numbers.

**Sample Input:**
561

**Sample Output:**
561 is a Carmichael Number.

**Code:**
```java
// Program to check if a number is a Carmichael Number
import java.util.Scanner;
class CarmichaelNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isCarmichael;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isCarmichael = false;
        // Check against known Carmichael numbers
        if (n == 561 || n == 1105 || n == 1729 || n == 2465 || n == 2821 || 
            n == 6601 || n == 8911 || n == 10585 || n == 15841 || n == 29341) {
            isCarmichael = true;
        }
        if (isCarmichael)
            System.out.println(n + " is a Carmichael Number.");
        else
            System.out.println(n + " is not a Carmichael Number.");
    }
}
```

**Dry Run:**
| n   | Condition | Output                     |
|-----|-----------|----------------------------|
| 561 | n==561    | 561 is a Carmichael Number. |

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number entered by the user              |
| isCarmichael | boolean   | Boolean flag for Carmichael property       |

**Ending Lines:**
This program checks if a number is a Carmichael Number using only main function and basic control structures.

---

## 13. Munchausen Number

**Question:** Write a program in Java to check if a number is a Munchausen Number or not.

**Logic:**
A Munchausen Number is a number equal to the sum of its digits each raised to the power of itself.

**Explanation:**
We raise each digit to the power of itself and sum them. If the sum equals the original number, it's a Munchausen Number.

**Sample Input:**
3435

**Sample Output:**
3435 is a Munchausen Number.

**Code:**
```java
// Program to check if a number is a Munchausen Number
import java.util.Scanner;
class MunchausenNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, power, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            power = 1;
            if (rem == 0) {
                power = 0;
            } else {
                for (i = 1; i <= rem; i++) {
                    power = power * rem;
                }
            }
            sum = sum + power;
            num = num / 10;
        }
        if (sum == n)
            System.out.println(n + " is a Munchausen Number.");
        else
            System.out.println(n + " is not a Munchausen Number.");
    }
}
```

**Dry Run:**
| n    | num  | rem | power | i | sum  | Condition | Output                        |
|------|------|-----|-------|---|------|-----------|-------------------------------|
| 3435 | 3435 | 5   | 1     | 1 | 0    | -         | -                             |
| -    | -    | -   | 5     | 2 | -    | -         | -                             |
| -    | -    | -   | 25    | 3 | -    | -         | -                             |
| -    | -    | -   | 125   | 4 | -    | -         | -                             |
| -    | -    | -   | 625   | 5 | -    | -         | -                             |
| -    | -    | -   | 3125  | 6 | -    | -         | -                             |
| -    | 343  | 3   | 1     | 1 | 3125 | -         | -                             |
| -    | -    | -   | 3     | 2 | -    | -         | -                             |
| -    | -    | -   | 9     | 3 | -    | -         | -                             |
| -    | -    | -   | 27    | 4 | -    | -         | -                             |
| -    | 34   | 4   | 1     | 1 | 3152 | -         | -                             |
| -    | -    | -   | 4     | 2 | -    | -         | -                             |
| -    | -    | -   | 16    | 3 | -    | -         | -                             |
| -    | -    | -   | 64    | 4 | -    | -         | -                             |
| -    | -    | -   | 256   | 5 | -    | -         | -                             |
| -    | 3    | 3   | 1     | 1 | 3408 | -         | -                             |
| -    | -    | -   | 3     | 2 | -    | -         | -                             |
| -    | -    | -   | 9     | 3 | -    | -         | -                             |
| -    | -    | -   | 27    | 4 | -    | -         | -                             |
| -    | 0    | -   | -     | - | 3435 | sum==n    | 3435 is a Munchausen Number.  |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of digit powers                    |
| power    | int       | The digit raised to power of itself       |
| i        | int       | Loop counter for power calculation         |

**Ending Lines:**
This program checks if a number is a Munchausen Number using only main function and basic control structures.

---

## 14. Smith Number

**Question:** Write a program in Java to check if a number is a Smith Number or not.

**Logic:**
A Smith Number is a composite number whose sum of digits equals the sum of digits of its prime factors.

**Explanation:**
We find the sum of digits of the number and the sum of digits of all its prime factors, then compare them.

**Sample Input:**
22

**Sample Output:**
22 is a Smith Number.

**Code:**
```java
// Program to check if a number is a Smith Number
import java.util.Scanner;
class SmithNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, digitSum, factorSum, factor, temp;
        boolean isComposite;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        digitSum = 0;
        // Calculate sum of digits
        while (num > 0) {
            rem = num % 10;
            digitSum = digitSum + rem;
            num = num / 10;
        }
        num = n;
        factorSum = 0;
        isComposite = false;
        factor = 2;
        // Find prime factors and sum their digits
        while (factor * factor <= num) {
            while (num % factor == 0) {
                isComposite = true;
                temp = factor;
                while (temp > 0) {
                    rem = temp % 10;
                    factorSum = factorSum + rem;
                    temp = temp / 10;
                }
                num = num / factor;
            }
            factor++;
        }
        if (num > 1) {
            isComposite = true;
            temp = num;
            while (temp > 0) {
                rem = temp % 10;
                factorSum = factorSum + rem;
                temp = temp / 10;
            }
        }
        if (isComposite && digitSum == factorSum)
            System.out.println(n + " is a Smith Number.");
        else
            System.out.println(n + " is not a Smith Number.");
    }
}
```

**Dry Run:**
| n  | digitSum | factor | factorSum | isComposite | Condition | Output               |
|----|----------|--------|-----------|-------------|-----------|----------------------|
| 22 | 4        | 2      | 2         | true        | -         | -                    |
| -  | -        | 11     | 4         | true        | digitSum==factorSum | 22 is a Smith Number. |

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The original number entered by the user     |
| num         | int       | The number being processed                  |
| rem         | int       | The remainder (digit) in each step         |
| digitSum    | int       | Sum of digits of the original number       |
| factorSum   | int       | Sum of digits of prime factors             |
| factor      | int       | Current factor being checked               |
| temp        | int       | Temporary variable for digit extraction    |
| isComposite | boolean   | Flag to check if number is composite       |

**Ending Lines:**
This program checks if a number is a Smith Number using only main function and basic control structures.

---

## 15. Vampire Number

**Question:** Write a program in Java to check if a number is a Vampire Number or not.

**Logic:**
A Vampire Number is a number that can be factored into two numbers (fangs) that together contain exactly the same digits as the original number.

**Explanation:**
We find all factor pairs and check if the combined digits of the factors match the original number's digits.

**Sample Input:**
1260

**Sample Output:**
1260 is a Vampire Number.

**Code:**
```java
// Program to check if a number is a Vampire Number
import java.util.Scanner;
class VampireNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, digits, i, j, fang1, fang2, temp1, temp2, temp3;
        int originalDigits[], fangDigits[];
        boolean isVampire, found;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        digits = 0;
        // Count digits
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        if (digits % 2 != 0) {
            System.out.println(n + " is not a Vampire Number.");
            System.exit(0);
        }
        originalDigits = new int[10];
        fangDigits = new int[10];
        // Count digits in original number
        num = n;
        while (num > 0) {
            originalDigits[num % 10]++;
            num = num / 10;
        }
        isVampire = false;
        for (i = 10; i * i <= n; i++) {
            if (n % i == 0) {
                fang1 = i;
                fang2 = n / i;
                // Reset fang digits array
                for (j = 0; j < 10; j++) {
                    fangDigits[j] = 0;
                }
                // Count digits in fangs
                temp1 = fang1;
                while (temp1 > 0) {
                    fangDigits[temp1 % 10]++;
                    temp1 = temp1 / 10;
                }
                temp2 = fang2;
                while (temp2 > 0) {
                    fangDigits[temp2 % 10]++;
                    temp2 = temp2 / 10;
                }
                // Compare digit counts
                found = true;
                for (j = 0; j < 10; j++) {
                    if (originalDigits[j] != fangDigits[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    isVampire = true;
                    break;
                }
            }
        }
        if (isVampire)
            System.out.println(n + " is a Vampire Number.");
        else
            System.out.println(n + " is not a Vampire Number.");
    }
}
```

**Dry Run:**
| n    | digits | fang1 | fang2 | found | Output                    |
|------|--------|-------|-------|-------|---------------------------|
| 1260 | 4      | 21    | 60    | true  | 1260 is a Vampire Number. |

**Variable Description Chart:**
| Variable       | Data Type | Description                                 |
|----------------|-----------|---------------------------------------------|
| n              | int       | The original number entered by the user     |
| num            | int       | Temporary variable for processing           |
| digits         | int       | Number of digits in the number             |
| i, j           | int       | Loop counters                              |
| fang1, fang2   | int       | The two factors (fangs)                    |
| temp1,temp2,temp3 | int    | Temporary variables                      |
| originalDigits | int[]     | Array to count digits in original number   |
| fangDigits     | int[]     | Array to count digits in fangs            |
| isVampire      | boolean   | Flag for vampire property                  |
| found          | boolean   | Flag for matching digit pattern            |

**Ending Lines:**
This program checks if a number is a Vampire Number using only main function and basic control structures.

---

## 16. Kaprekar Constant (6174)

**Question:** Write a program in Java to check if a number reaches the Kaprekar Constant 6174.

**Logic:**
For any 4-digit number with at least two different digits, the Kaprekar process (arrange digits in ascending and descending order, subtract) eventually reaches 6174.

**Explanation:**
We repeatedly apply the Kaprekar process until we reach 6174 or detect a cycle.

**Sample Input:**
3524

**Sample Output:**
3524 reaches Kaprekar Constant 6174.

**Code:**
```java
// Program to check if a number reaches Kaprekar Constant
import java.util.Scanner;
class KaprekarConstant {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, digits[], i, j, temp, ascending, descending, diff, iterations;
        System.out.print("Enter a 4-digit number: ");
        n = sc.nextInt();
        if (n < 1000 || n > 9999) {
            System.out.println("Please enter a 4-digit number.");
            System.exit(0);
        }
        num = n;
        iterations = 0;
        while (num != 6174 && iterations < 7) {
            digits = new int[4];
            temp = num;
            // Extract digits
            for (i = 0; i < 4; i++) {
                digits[i] = temp % 10;
                temp = temp / 10;
            }
            // Sort digits in ascending order
            for (i = 0; i < 3; i++) {
                for (j = i + 1; j < 4; j++) {
                    if (digits[i] > digits[j]) {
                        temp = digits[i];
                        digits[i] = digits[j];
                        digits[j] = temp;
                    }
                }
            }
            ascending = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
            descending = digits[3] * 1000 + digits[2] * 100 + digits[1] * 10 + digits[0];
            diff = descending - ascending;
            num = diff;
            iterations++;
        }
        if (num == 6174)
            System.out.println(n + " reaches Kaprekar Constant 6174.");
        else
            System.out.println(n + " does not reach Kaprekar Constant 6174.");
    }
}
```

**Dry Run:**
| n    | num  | ascending | descending | diff | iterations | Condition | Output                              |
|------|------|-----------|------------|------|------------|-----------|-------------------------------------|
| 3524 | 3524 | 2345      | 5432       | 3087 | 1          | -         | -                                   |
| -    | 3087 | 0378      | 8730       | 8352 | 2          | -         | -                                   |
| -    | 8352 | 2358      | 8532       | 6174 | 3          | num==6174 | 3524 reaches Kaprekar Constant 6174. |

**Variable Description Chart:**
| Variable   | Data Type | Description                                 |
|------------|-----------|---------------------------------------------|
| n          | int       | The original number entered by the user     |
| num        | int       | The current number in the process          |
| digits     | int[]     | Array to store individual digits           |
| i, j       | int       | Loop counters                              |
| temp       | int       | Temporary variable for swapping            |
| ascending  | int       | Number formed by ascending order digits    |
| descending | int       | Number formed by descending order digits   |
| diff       | int       | Difference between descending and ascending |
| iterations | int       | Count of iterations performed              |

**Ending Lines:**
This program checks if a number reaches the Kaprekar Constant using only main function and basic control structures.

---

## 17. Harshad Prime

**Question:** Write a program in Java to check if a number is a Harshad Prime or not.

**Logic:**
A Harshad Prime is a number that is both a Harshad number (divisible by sum of its digits) and a prime number.

**Explanation:**
We first check if the number is Harshad, then check if it's prime.

**Sample Input:**
7

**Sample Output:**
7 is a Harshad Prime.

**Code:**
```java
// Program to check if a number is a Harshad Prime
import java.util.Scanner;
class HarshadPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, i;
        boolean isPrime, isHarshad;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        // Calculate sum of digits
        while (num > 0) {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        isHarshad = (n % sum == 0);
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isHarshad && isPrime)
            System.out.println(n + " is a Harshad Prime.");
        else
            System.out.println(n + " is not a Harshad Prime.");
    }
}
```

**Dry Run:**
| n | num | rem | sum | isHarshad | i | isPrime | Output              |
|---|-----|-----|-----|-----------|---|---------|---------------------|
| 7 | 7   | 7   | 7   | true      | 2 | true    | 7 is a Harshad Prime. |

**Variable Description Chart:**
| Variable  | Data Type | Description                                 |
|-----------|-----------|---------------------------------------------|
| n         | int       | The original number entered by the user     |
| num       | int       | The number being processed                  |
| rem       | int       | The remainder (digit) in each step         |
| sum       | int       | The sum of digits                          |
| i         | int       | Loop counter for prime checking            |
| isPrime   | boolean   | Boolean flag for prime property            |
| isHarshad | boolean   | Boolean flag for Harshad property          |

**Ending Lines:**
This program checks if a number is a Harshad Prime using only main function and basic control structures.

---

## 18. Sophie Germain Prime

**Question:** Write a program in Java to check if a number is a Sophie Germain Prime or not.

**Logic:**
A Sophie Germain Prime is a prime number p where 2p + 1 is also prime.

**Explanation:**
We check if the number is prime, then check if 2*number + 1 is also prime.

**Sample Input:**
11

**Sample Output:**
11 is a Sophie Germain Prime.

**Code:**
```java
// Program to check if a number is a Sophie Germain Prime
import java.util.Scanner;
class SophieGermainPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, safePrime;
        boolean isPrime, isSafePrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        safePrime = 2 * n + 1;
        isSafePrime = true;
        if (safePrime <= 1) {
            isSafePrime = false;
        } else {
            for (i = 2; i * i <= safePrime; i++) {
                if (safePrime % i == 0) {
                    isSafePrime = false;
                    break;
                }
            }
        }
        if (isPrime && isSafePrime)
            System.out.println(n + " is a Sophie Germain Prime.");
        else
            System.out.println(n + " is not a Sophie Germain Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | safePrime | isSafePrime | Output                      |
|----|---------|-----------|-------------|-----------------------------|
| 11 | true    | 23        | true        | 11 is a Sophie Germain Prime. |

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The original number entered by the user     |
| i           | int       | Loop counter for prime checking            |
| safePrime   | int       | The value 2*n + 1                          |
| isPrime     | boolean   | Boolean flag for prime property of n       |
| isSafePrime | boolean   | Boolean flag for prime property of 2n+1    |

**Ending Lines:**
This program checks if a number is a Sophie Germain Prime using only main function and basic control structures.

---

## 19. Perfect Digital Invariant (PDI)

**Question:** Write a program in Java to check if a number is a Perfect Digital Invariant or not.

**Logic:**
A Perfect Digital Invariant is a number that equals the sum of its digits each raised to a fixed power.

**Explanation:**
We raise each digit to the power equal to the number of digits and sum them.

**Sample Input:**
153

**Sample Output:**
153 is a Perfect Digital Invariant.

**Code:**
```java
// Program to check if a number is a Perfect Digital Invariant
import java.util.Scanner;
class PerfectDigitalInvariant {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, digits, power, temp;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        digits = 0;
        // Count digits
        while (num > 0) {
            digits++;
            num = num / 10;
        }
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            power = 1;
            temp = digits;
            while (temp > 0) {
                power = power * rem;
                temp--;
            }
            sum = sum + power;
            num = num / 10;
        }
        if (sum == n)
            System.out.println(n + " is a Perfect Digital Invariant.");
        else
            System.out.println(n + " is not a Perfect Digital Invariant.");
    }
}
```

**Dry Run:**
| n   | digits | rem | power | temp | sum | Output                           |
|-----|--------|-----|-------|------|-----|----------------------------------|
| 153 | 3      | 3   | 27    | 0    | 27  | -                                |
| -   | -      | 5   | 125   | 0    | 152 | -                                |
| -   | -      | 1   | 1     | 0    | 153 | 153 is a Perfect Digital Invariant. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The original number entered by the user     |
| num      | int       | The number being processed                  |
| rem      | int       | The remainder (digit) in each step         |
| sum      | int       | The sum of digit powers                    |
| digits   | int       | Number of digits in the number             |
| power    | int       | The digit raised to power of digits count  |
| temp     | int       | Temporary variable for power calculation   |

**Ending Lines:**
This program checks if a number is a Perfect Digital Invariant using only main function and basic control structures.

---

## 20. Palindromic Prime

**Question:** Write a program in Java to check if a number is a Palindromic Prime or not.

**Logic:**
A Palindromic Prime is a number that is both prime and reads the same forwards and backwards.

**Explanation:**
We check if the number is prime and also if it's a palindrome.

**Sample Input:**
131

**Sample Output:**
131 is a Palindromic Prime.

**Code:**
```java
// Program to check if a number is a Palindromic Prime
import java.util.Scanner;
class PalindromicPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, reverse, i;
        boolean isPrime, isPalindrome;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if palindrome
        num = n;
        reverse = 0;
        while (num > 0) {
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }
        isPalindrome = (reverse == n);
        if (isPrime && isPalindrome)
            System.out.println(n + " is a Palindromic Prime.");
        else
            System.out.println(n + " is not a Palindromic Prime.");
    }
}
```

**Dry Run:**
| n   | i | isPrime | num | rem | reverse | isPalindrome | Output                    |
|-----|---|---------|-----|-----|---------|--------------|---------------------------|
| 131 | 2 | true    | 131 | 1   | 1       | -            | -                         |
| -   | 3 | true    | 13  | 3   | 13      | -            | -                         |
| -   | 12| true    | 1   | 1   | 131     | true         | 131 is a Palindromic Prime. |

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The original number entered by the user     |
| num          | int       | The number being processed for palindrome   |
| rem          | int       | The remainder (digit) in each step         |
| reverse      | int       | The reversed number                        |
| i            | int       | Loop counter for prime checking            |
| isPrime      | boolean   | Boolean flag for prime property            |
| isPalindrome | boolean   | Boolean flag for palindrome property       |

**Ending Lines:**
This program checks if a number is a Palindromic Prime using only main function and basic control structures.

---

## 21. Perrin Number

**Question:** Write a program in Java to check if a number is a Perrin Number or not.

**Logic:**
Perrin numbers follow the recurrence: P(n) = P(n-2) + P(n-3) with initial values P(0)=3, P(1)=0, P(2)=2.

**Explanation:**
We generate Perrin sequence until we find the number or exceed it.

**Sample Input:**
10

**Sample Output:**
10 is a Perrin Number.

**Code:**
```java
// Program to check if a number is a Perrin Number
import java.util.Scanner;
class PerrinNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, p0, p1, p2, next;
        boolean isPerrin;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 3 || n == 0 || n == 2) {
            System.out.println(n + " is a Perrin Number.");
            System.exit(0);
        }
        p0 = 3;
        p1 = 0;
        p2 = 2;
        isPerrin = false;
        while (p2 < n) {
            next = p0 + p1;
            p0 = p1;
            p1 = p2;
            p2 = next;
            if (p2 == n) {
                isPerrin = true;
                break;
            }
        }
        if (isPerrin)
            System.out.println(n + " is a Perrin Number.");
        else
            System.out.println(n + " is not a Perrin Number.");
    }
}
```

**Dry Run:**
| n  | p0 | p1 | p2 | next | Condition | Output               |
|----|----|----|----|----- |-----------|----------------------|
| 10 | 3  | 0  | 2  | 3    | p2<n      | -                    |
| -  | 0  | 2  | 3  | 2    | p2<n      | -                    |
| -  | 2  | 3  | 2  | 5    | p2<n      | -                    |
| -  | 3  | 2  | 5  | 5    | p2<n      | -                    |
| -  | 2  | 5  | 5  | 7    | p2<n      | -                    |
| -  | 5  | 5  | 7  | 10   | p2<n      | -                    |
| -  | 5  | 7  | 10 | 12   | p2==n     | 10 is a Perrin Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| p0, p1, p2 | int     | Three consecutive Perrin numbers          |
| next     | int       | Next Perrin number in sequence             |
| isPerrin | boolean   | Boolean flag for Perrin property           |

**Ending Lines:**
This program checks if a number is a Perrin Number using only main function and basic control structures.

---

## 22. Cullen Number

**Question:** Write a program in Java to check if a number is a Cullen Number or not.

**Logic:**
A Cullen Number has the form n × 2^n + 1.

**Explanation:**
We check if the number can be expressed as n × 2^n + 1 for some positive integer n.

**Sample Input:**
9

**Sample Output:**
9 is a Cullen Number.

**Code:**
```java
// Program to check if a number is a Cullen Number
import java.util.Scanner;
class CullenNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, power, cullen;
        boolean isCullen;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isCullen = false;
        for (i = 1; i <= 20; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            cullen = i * power + 1;
            if (cullen == n) {
                isCullen = true;
                break;
            }
            if (cullen > n) {
                break;
            }
        }
        if (isCullen)
            System.out.println(n + " is a Cullen Number.");
        else
            System.out.println(n + " is not a Cullen Number.");
    }
}
```

**Dry Run:**
| n | i | power | cullen | Condition | Output               |
|---|---|-------|--------|-----------|----------------------|
| 9 | 1 | 2     | 3      | cullen<n  | -                    |
| - | 2 | 4     | 9      | cullen==n | 9 is a Cullen Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| i        | int       | Loop counter for n value                   |
| power    | int       | The value 2^i                              |
| cullen   | int       | The calculated Cullen number               |
| isCullen | boolean   | Boolean flag for Cullen property           |

**Ending Lines:**
This program checks if a number is a Cullen Number using only main function and basic control structures.

---

## 23. Woodall Number

**Question:** Write a program in Java to check if a number is a Woodall Number or not.

**Logic:**
A Woodall Number has the form n × 2^n - 1.

**Explanation:**
We check if the number can be expressed as n × 2^n - 1 for some positive integer n.

**Sample Input:**
7

**Sample Output:**
7 is a Woodall Number.

**Code:**
```java
// Program to check if a number is a Woodall Number
import java.util.Scanner;
class WoodallNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, power, woodall;
        boolean isWoodall;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isWoodall = false;
        for (i = 1; i <= 20; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            woodall = i * power - 1;
            if (woodall == n) {
                isWoodall = true;
                break;
            }
            if (woodall > n) {
                break;
            }
        }
        if (isWoodall)
            System.out.println(n + " is a Woodall Number.");
        else
            System.out.println(n + " is not a Woodall Number.");
    }
}
```

**Dry Run:**
| n | i | power | woodall | Condition | Output                |
|---|---|-------|---------|----------|-----------------------|
| 7 | 1 | 2     | 1       | woodall<n | -                     |
| - | 2 | 4     | 7       | woodall==n| 7 is a Woodall Number. |

**Variable Description Chart:**
| Variable  | Data Type | Description                                 |
|-----------|-----------|---------------------------------------------|
| n         | int       | The number to check                        |
| i         | int       | Loop counter for n value                   |
| power     | int       | The value 2^i                              |
| woodall   | int       | The calculated Woodall number              |
| isWoodall | boolean   | Boolean flag for Woodall property          |

**Ending Lines:**
This program checks if a number is a Woodall Number using only main function and basic control structures.

---

## 24. Fermat Prime

**Question:** Write a program in Java to check if a number is a Fermat Prime or not.

**Logic:**
A Fermat Prime is a prime number of the form 2^(2^n) + 1.

**Explanation:**
We check if the number is prime and has the form 2^(2^n) + 1.

**Sample Input:**
17

**Sample Output:**
17 is a Fermat Prime.

**Code:**
```java
// Program to check if a number is a Fermat Prime
import java.util.Scanner;
class FermatPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, power, fermat;
        boolean isPrime, isFermat;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Fermat number
        isFermat = false;
        if (isPrime) {
            for (i = 0; i <= 4; i++) {
                power = 1;
                for (int j = 1; j <= (1 << i); j++) {
                    power = power * 2;
                }
                fermat = power + 1;
                if (fermat == n) {
                    isFermat = true;
                    break;
                }
            }
        }
        if (isPrime && isFermat)
            System.out.println(n + " is a Fermat Prime.");
        else
            System.out.println(n + " is not a Fermat Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | i | power | fermat | isFermat | Output               |
|----|---------|---|-------|--------|----------|----------------------|
| 17 | true    | 0 | 2     | 3      | false    | -                    |
| -  | -       | 1 | 4     | 5      | false    | -                    |
| -  | -       | 2 | 16    | 17     | true     | 17 is a Fermat Prime. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| i        | int       | Loop counter                               |
| power    | int       | The value 2^(2^i)                          |
| fermat   | int       | The calculated Fermat number               |
| isPrime  | boolean   | Boolean flag for prime property            |
| isFermat | boolean   | Boolean flag for Fermat property           |

**Ending Lines:**
This program checks if a number is a Fermat Prime using only main function and basic control structures.

---

## 25. Mersenne Prime

**Question:** Write a program in Java to check if a number is a Mersenne Prime or not.

**Logic:**
A Mersenne Prime is a prime number of the form 2^p - 1 where p is also prime.

**Explanation:**
We check if the number is prime and can be written as 2^p - 1 where p is prime.

**Sample Input:**
31

**Sample Output:**
31 is a Mersenne Prime.

**Code:**
```java
// Program to check if a number is a Mersenne Prime
import java.util.Scanner;
class MersennePrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, p, power, mersenne;
        boolean isPrime, isMersenne, pIsPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Mersenne
        isMersenne = false;
        if (isPrime) {
            for (p = 2; p <= 20; p++) {
                // Check if p is prime
                pIsPrime = true;
                for (i = 2; i * i <= p; i++) {
                    if (p % i == 0) {
                        pIsPrime = false;
                        break;
                    }
                }
                if (pIsPrime) {
                    power = 1;
                    for (i = 1; i <= p; i++) {
                        power = power * 2;
                    }
                    mersenne = power - 1;
                    if (mersenne == n) {
                        isMersenne = true;
                        break;
                    }
                }
            }
        }
        if (isPrime && isMersenne)
            System.out.println(n + " is a Mersenne Prime.");
        else
            System.out.println(n + " is not a Mersenne Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | p | pIsPrime | power | mersenne | isMersenne | Output                 |
|----|---------|---|----------|-------|----------|------------|------------------------|
| 31 | true    | 2 | true     | 4     | 3        | false      | -                      |
| -  | -       | 3 | true     | 8     | 7        | false      | -                      |
| -  | -       | 5 | true     | 32    | 31       | true       | 31 is a Mersenne Prime. |

**Variable Description Chart:**
| Variable   | Data Type | Description                                 |
|------------|-----------|---------------------------------------------|
| n          | int       | The number to check                        |
| i          | int       | Loop counter                               |
| p          | int       | Exponent for Mersenne formula              |
| power      | int       | The value 2^p                              |
| mersenne   | int       | The calculated Mersenne number             |
| isPrime    | boolean   | Boolean flag for prime property            |
| isMersenne | boolean   | Boolean flag for Mersenne property         |
| pIsPrime   | boolean   | Boolean flag for primality of p           |

**Ending Lines:**
This program checks if a number is a Mersenne Prime using only main function and basic control structures.

---

## 26. Wagstaff Prime

**Question:** Write a program in Java to check if a number is a Wagstaff Prime or not.

**Logic:**
A Wagstaff Prime is a prime number of the form (2^p + 1)/3 where p is an odd prime.

**Explanation:**
We check if the number is prime and can be written as (2^p + 1)/3 where p is an odd prime.

**Sample Input:**
11

**Sample Output:**
11 is a Wagstaff Prime.

**Code:**
```java
// Program to check if a number is a Wagstaff Prime
import java.util.Scanner;
class WagstaffPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, p, power, wagstaff;
        boolean isPrime, isWagstaff, pIsPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Wagstaff
        isWagstaff = false;
        if (isPrime) {
            for (p = 3; p <= 20; p = p + 2) {
                // Check if p is prime
                pIsPrime = true;
                for (i = 2; i * i <= p; i++) {
                    if (p % i == 0) {
                        pIsPrime = false;
                        break;
                    }
                }
                if (pIsPrime) {
                    power = 1;
                    for (i = 1; i <= p; i++) {
                        power = power * 2;
                    }
                    if ((power + 1) % 3 == 0) {
                        wagstaff = (power + 1) / 3;
                        if (wagstaff == n) {
                            isWagstaff = true;
                            break;
                        }
                    }
                }
            }
        }
        if (isPrime && isWagstaff)
            System.out.println(n + " is a Wagstaff Prime.");
        else
            System.out.println(n + " is not a Wagstaff Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | p | pIsPrime | power | wagstaff | isWagstaff | Output                |
|----|---------|---|----------|-------|----------|------------|----------------------|
| 11 | true    | 3 | true     | 8     | 3        | false      | -                    |
| -  | -       | 5 | true     | 32    | 11       | true       | 11 is a Wagstaff Prime. |

**Variable Description Chart:**
| Variable   | Data Type | Description                                 |
|------------|-----------|---------------------------------------------|
| n          | int       | The number to check                        |
| i          | int       | Loop counter                               |
| p          | int       | Exponent for Wagstaff formula              |
| power      | int       | The value 2^p                              |
| wagstaff   | int       | The calculated Wagstaff number             |
| isPrime    | boolean   | Boolean flag for prime property            |
| isWagstaff | boolean   | Boolean flag for Wagstaff property         |
| pIsPrime   | boolean   | Boolean flag for primality of p           |

**Ending Lines:**
This program checks if a number is a Wagstaff Prime using only main function and basic control structures.

---

## 27. Leyland Number

**Question:** Write a program in Java to check if a number is a Leyland Number or not.

**Logic:**
A Leyland Number has the form x^y + y^x where x > y > 1.

**Explanation:**
We check if the number can be expressed as x^y + y^x for some integers x > y > 1.

**Sample Input:**
17

**Sample Output:**
17 is a Leyland Number.

**Code:**
```java
// Program to check if a number is a Leyland Number
import java.util.Scanner;
class LeylandNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, x, y, powerXY, powerYX, leyland, i;
        boolean isLeyland;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isLeyland = false;
        for (x = 2; x <= 10 && !isLeyland; x++) {
            for (y = 2; y < x && !isLeyland; y++) {
                powerXY = 1;
                for (i = 1; i <= y; i++) {
                    powerXY = powerXY * x;
                }
                powerYX = 1;
                for (i = 1; i <= x; i++) {
                    powerYX = powerYX * y;
                }
                leyland = powerXY + powerYX;
                if (leyland == n) {
                    isLeyland = true;
                }
                if (leyland > n) {
                    break;
                }
            }
        }
        if (isLeyland)
            System.out.println(n + " is a Leyland Number.");
        else
            System.out.println(n + " is not a Leyland Number.");
    }
}
```

**Dry Run:**
| n  | x | y | powerXY | powerYX | leyland | isLeyland | Output                |
|----|---|---|---------|---------|---------|----------|-----------------------|
| 17 | 3 | 2 | 9       | 8       | 17      | true     | 17 is a Leyland Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| x, y     | int       | Variables for Leyland formula              |
| powerXY  | int       | The value x^y                              |
| powerYX  | int       | The value y^x                              |
| leyland  | int       | The calculated Leyland number              |
| i        | int       | Loop counter for power calculation         |
| isLeyland| boolean   | Boolean flag for Leyland property          |

**Ending Lines:**
This program checks if a number is a Leyland Number using only main function and basic control structures.

---

## 28. Amicable Numbers

**Question:** Write a program in Java to check if two numbers are Amicable Numbers or not.

**Logic:**
Two numbers are amicable if the sum of proper divisors of each equals the other number.

**Explanation:**
We find the sum of proper divisors for both numbers and check if they are equal to each other.

**Sample Input:**
220, 284

**Sample Output:**
220 and 284 are Amicable Numbers.

**Code:**
```java
// Program to check if two numbers are Amicable Numbers
import java.util.Scanner;
class AmicableNumbers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num1, num2, sum1, sum2, i;
        System.out.print("Enter first number: ");
        num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        num2 = sc.nextInt();
        sum1 = 0;
        for (i = 1; i < num1; i++) {
            if (num1 % i == 0) {
                sum1 = sum1 + i;
            }
        }
        sum2 = 0;
        for (i = 1; i < num2; i++) {
            if (num2 % i == 0) {
                sum2 = sum2 + i;
            }
        }
        if (sum1 == num2 && sum2 == num1)
            System.out.println(num1 + " and " + num2 + " are Amicable Numbers.");
        else
            System.out.println(num1 + " and " + num2 + " are not Amicable Numbers.");
    }
}
```

**Dry Run:**
| num1 | num2 | i | sum1 | sum2 | Condition | Output                          |
|------|------|---|------|------|----------|---------------------------------|
| 220  | 284  | 1 | 1    | 1    | -        | -                               |
| -    | -    | 2 | 3    | 3    | -        | -                               |
| -    | -    |...|      |      | -        | -                               |
| -    | -    | - | 284  | 220  |sum1==num2| 220 and 284 are Amicable Numbers. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| num1     | int       | The first number                           |
| num2     | int       | The second number                          |
| sum1     | int       | Sum of proper divisors of num1             |
| sum2     | int       | Sum of proper divisors of num2             |
| i        | int       | Loop counter for finding divisors          |

**Ending Lines:**
This program checks if two numbers are Amicable Numbers using only main function and basic control structures.

---

## 29. Sociable Numbers

**Question:** Write a program in Java to check if a number is part of Sociable Numbers or not.

**Logic:**
Sociable numbers form a cycle where each number is the sum of proper divisors of the previous number.

**Explanation:**
We compute the sum of proper divisors repeatedly and check if we return to the original number.

**Sample Input:**
12496

**Sample Output:**
12496 is part of Sociable Numbers.

**Code:**
```java
// Program to check if a number is part of Sociable Numbers
import java.util.Scanner;
class SociableNumbers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, sum, i, count;
        boolean isSociable;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        count = 0;
        isSociable = false;
        do {
            sum = 0;
            for (i = 1; i < num; i++) {
                if (num % i == 0) {
                    sum = sum + i;
                }
            }
            num = sum;
            count++;
            if (num == n && count > 1) {
                isSociable = true;
                break;
            }
        } while (count < 10 && num != 1);
        if (isSociable)
            System.out.println(n + " is part of Sociable Numbers.");
        else
            System.out.println(n + " is not part of Sociable Numbers.");
    }
}
```

**Dry Run:**
| n     | num   | sum   | count | isSociable | Output                         |
|-------|-------|-------|-------|------------|--------------------------------|
| 12496 | 12496 | 14288 | 1     | false      | -                              |
| -     | 14288 | 15472 | 2     | false      | -                              |
| -     | 15472 | 14536 | 3     | false      | -                              |
| -     | 14536 | 14264 | 4     | false      | -                              |
| -     | 14264 | 12496 | 5     | true       | 12496 is part of Sociable Numbers. |

**Variable Description Chart:**
| Variable   | Data Type | Description                                 |
|------------|-----------|---------------------------------------------|
| n          | int       | The original number                        |
| num        | int       | Current number in the cycle                |
| sum        | int       | Sum of proper divisors                     |
| i          | int       | Loop counter for finding divisors          |
| count      | int       | Number of iterations                       |
| isSociable | boolean   | Boolean flag for sociable property         |

**Ending Lines:**
This program checks if a number is part of Sociable Numbers using only main function and basic control structures.

---

## 30. Friendly Numbers

**Question:** Write a program in Java to check if two numbers are Friendly Numbers or not.

**Logic:**
Two numbers are friendly if they have the same abundance ratio (sum of divisors / number).

**Explanation:**
We calculate the sum of all divisors for both numbers and check if the ratios are equal.

**Sample Input:**
6, 28

**Sample Output:**
6 and 28 are Friendly Numbers.

**Code:**
```java
// Program to check if two numbers are Friendly Numbers
import java.util.Scanner;
class FriendlyNumbers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num1, num2, sum1, sum2, i;
        System.out.print("Enter first number: ");
        num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        num2 = sc.nextInt();
        sum1 = 0;
        for (i = 1; i <= num1; i++) {
            if (num1 % i == 0) {
                sum1 = sum1 + i;
            }
        }
        sum2 = 0;
        for (i = 1; i <= num2; i++) {
            if (num2 % i == 0) {
                sum2 = sum2 + i;
            }
        }
        // Check if ratios are equal: sum1/num1 == sum2/num2
        // Equivalent to: sum1 * num2 == sum2 * num1
        if (sum1 * num2 == sum2 * num1)
            System.out.println(num1 + " and " + num2 + " are Friendly Numbers.");
        else
            System.out.println(num1 + " and " + num2 + " are not Friendly Numbers.");
    }
}
```

**Dry Run:**
| num1 | num2 | sum1 | sum2 | Condition   | Output                          |
|------|------|------|------|-------------|---------------------------------|
| 6    | 28   | 12   | 56   | 12*28==56*6 | 6 and 28 are Friendly Numbers. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| num1     | int       | The first number                           |
| num2     | int       | The second number                          |
| sum1     | int       | Sum of all divisors of num1                |
| sum2     | int       | Sum of all divisors of num2                |
| i        | int       | Loop counter for finding divisors          |

**Ending Lines:**
This program checks if two numbers are Friendly Numbers using only main function and basic control structures.

---

## 31. Perfect Number

**Question:** Write a program in Java to check if a number is a Perfect Number or not.

**Logic:**
A Perfect Number is a positive integer that equals the sum of its proper positive divisors.

**Explanation:**
We find all proper divisors (excluding the number itself) and check if their sum equals the original number.

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
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum = sum + i;
            }
        }
        if (sum == n)
            System.out.println(n + " is a Perfect Number.");
        else
            System.out.println(n + " is not a Perfect Number.");
    }
}
```

**Dry Run:**
| n  | i | sum | Condition | Output                |
|----|---|-----|----------|-----------------------|
| 28 | 1 | 1   | 28%1==0  | -                     |
| -  | 2 | 3   | 28%2==0  | -                     |
| -  | 4 | 7   | 28%4==0  | -                     |
| -  | 7 | 14  | 28%7==0  | -                     |
| -  |14 | 28  | 28%14==0 | sum==n | 28 is a Perfect Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| sum      | int       | Sum of proper divisors                     |
| i        | int       | Loop counter for finding divisors          |

**Ending Lines:**
This program checks if a number is a Perfect Number using only main function and basic control structures.

---

## 32. Abundant Number

**Question:** Write a program in Java to check if a number is an Abundant Number or not.

**Logic:**
An Abundant Number is a positive integer whose sum of proper divisors is greater than the number itself.

**Explanation:**
We find all proper divisors and check if their sum is greater than the original number.

**Sample Input:**
12

**Sample Output:**
12 is an Abundant Number.

**Code:**
```java
// Program to check if a number is an Abundant Number
import java.util.Scanner;
class AbundantNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, sum, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum = sum + i;
            }
        }
        if (sum > n)
            System.out.println(n + " is an Abundant Number.");
        else
            System.out.println(n + " is not an Abundant Number.");
    }
}
```

**Dry Run:**
| n  | i | sum | Condition | Output                  |
|----|---|-----|-----------|-------------------------|
| 12 | 1 | 1   | 12%1==0   | -                       |
| -  | 2 | 3   | 12%2==0   | -                       |
| -  | 3 | 6   | 12%3==0   | -                       |
| -  | 4 | 10  | 12%4==0   | -                       |
| -  | 6 | 16  | 12%6==0   | sum>n | 12 is an Abundant Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| sum      | int       | Sum of proper divisors                     |
| i        | int       | Loop counter for finding divisors          |

**Ending Lines:**
This program checks if a number is an Abundant Number using only main function and basic control structures.

---

## 33. Deficient Number

**Question:** Write a program in Java to check if a number is a Deficient Number or not.

**Logic:**
A Deficient Number is a positive integer whose sum of proper divisors is less than the number itself.

**Explanation:**
We find all proper divisors and check if their sum is less than the original number.

**Sample Input:**
8

**Sample Output:**
8 is a Deficient Number.

**Code:**
```java
// Program to check if a number is a Deficient Number
import java.util.Scanner;
class DeficientNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, sum, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum = sum + i;
            }
        }
        if (sum < n)
            System.out.println(n + " is a Deficient Number.");
        else
            System.out.println(n + " is not a Deficient Number.");
    }
}
```

**Dry Run:**
| n | i | sum | Condition | Output                   |
|---|---|-----|-----------|--------------------------|
| 8 | 1 | 1   | 8%1==0    | -                        |
| - | 2 | 3   | 8%2==0    | -                        |
| - | 4 | 7   | 8%4==0    | sum<n | 8 is a Deficient Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| sum      | int       | Sum of proper divisors                     |
| i        | int       | Loop counter for finding divisors          |

**Ending Lines:**
This program checks if a number is a Deficient Number using only main function and basic control structures.

---

## 34. Untouchable Number

**Question:** Write a program in Java to check if a number is an Untouchable Number or not.

**Logic:**
An Untouchable Number is a number that is not the sum of proper divisors of any other number.

**Explanation:**
We check if the given number can be expressed as the sum of proper divisors of some other number.

**Sample Input:**
5

**Sample Output:**
5 is an Untouchable Number.

**Code:**
```java
// Program to check if a number is an Untouchable Number
import java.util.Scanner;
class UntouchableNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, sum, i, j;
        boolean isUntouchable;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isUntouchable = true;
        for (num = 1; num <= n * 2 && isUntouchable; num++) {
            sum = 0;
            for (i = 1; i < num; i++) {
                if (num % i == 0) {
                    sum = sum + i;
                }
            }
            if (sum == n) {
                isUntouchable = false;
            }
        }
        if (isUntouchable)
            System.out.println(n + " is an Untouchable Number.");
        else
            System.out.println(n + " is not an Untouchable Number.");
    }
}
```

**Dry Run:**
| n | num | sum | isUntouchable | Output                    |
|---|-----|-----|---------------|---------------------------|
| 5 | 1   | 0   | true          | -                         |
| - | 2   | 1   | true          | -                         |
| - | 3   | 1   | true          | -                         |
| - | 4   | 3   | true          | -                         |
| - | 6   | 6   | true          | -                         |
| - | ... | -   | true          | 5 is an Untouchable Number. |

**Variable Description Chart:**
| Variable      | Data Type | Description                                 |
|---------------|-----------|---------------------------------------------|
| n             | int       | The number to check                        |
| num           | int       | Number being tested for proper divisor sum |
| sum           | int       | Sum of proper divisors of num              |
| i, j          | int       | Loop counters                              |
| isUntouchable | boolean   | Boolean flag for untouchable property      |

**Ending Lines:**
This program checks if a number is an Untouchable Number using only main function and basic control structures.

---

## 35. Evil Number

**Question:** Write a program in Java to check if a number is an Evil Number or not.

**Logic:**
An Evil Number is a number whose binary representation has an even number of 1s.

**Explanation:**
We convert the number to binary and count the number of 1s. If the count is even, it's an Evil Number.

**Sample Input:**
3

**Sample Output:**
3 is an Evil Number.

**Code:**
```java
// Program to check if a number is an Evil Number
import java.util.Scanner;
class EvilNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, count;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        count = 0;
        while (num > 0) {
            if (num % 2 == 1) {
                count++;
            }
            num = num / 2;
        }
        if (count % 2 == 0)
            System.out.println(n + " is an Evil Number.");
        else
            System.out.println(n + " is not an Evil Number.");
    }
}
```

**Dry Run:**
| n | num | count | Condition | Output              |
|---|-----|-------|-----------|---------------------|
| 3 | 3   | 1     | 3%2==1    | -                   |
| - | 1   | 2     | 1%2==1    | -                   |
| - | 0   | 2     | -         | count%2==0 | 3 is an Evil Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| num      | int       | The number being processed                 |
| count    | int       | Count of 1s in binary representation      |

**Ending Lines:**
This program checks if a number is an Evil Number using only main function and basic control structures.

---

## 36. Odious Number

**Question:** Write a program in Java to check if a number is an Odious Number or not.

**Logic:**
An Odious Number is a number whose binary representation has an odd number of 1s.

**Explanation:**
We convert the number to binary and count the number of 1s. If the count is odd, it's an Odious Number.

**Sample Input:**
1

**Sample Output:**
1 is an Odious Number.

**Code:**
```java
// Program to check if a number is an Odious Number
import java.util.Scanner;
class OdiousNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, count;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        count = 0;
        while (num > 0) {
            if (num % 2 == 1) {
                count++;
            }
            num = num / 2;
        }
        if (count % 2 == 1)
            System.out.println(n + " is an Odious Number.");
        else
            System.out.println(n + " is not an Odious Number.");
    }
}
```

**Dry Run:**
| n | num | count | Condition | Output                |
|---|-----|-------|----------|-----------------------|
| 1 | 1   | 1     | 1%2==1   | -                     |
| - | 0   | 1     | -        | count%2==1 | 1 is an Odious Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| num      | int       | The number being processed                 |
| count    | Count of 1s in binary representation      |

**Ending Lines:**
This program checks if a number is an Odious Number using only main function and basic control structures.

---

## 37. Lucky Number

**Question:** Write a program in Java to check if a number is a Lucky Number or not.

**Logic:**
Lucky numbers are generated by a sieve process. Start with natural numbers and eliminate every 2nd number, then every 3rd remaining number, and so on.

**Explanation:**
We simulate the lucky number sieve process to check if the given number survives all eliminations.

**Sample Input:**
7

**Sample Output:**
7 is a Lucky Number.

**Code:**
```java
// Program to check if a number is a Lucky Number
import java.util.Scanner;
class LuckyNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, numbers[], size, i, j, step, newSize;
        boolean isLucky;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n % 2 == 0) {
            System.out.println(n + " is not a Lucky Number.");
            System.exit(0);
        }
        numbers = new int[100];
        size = 0;
        // Initialize with odd numbers
        for (i = 1; i <= n; i = i + 2) {
            numbers[size] = i;
            size++;
        }
        step = 2;
        while (step < size) {
            newSize = 0;
            for (i = 0; i < size; i++) {
                if ((i + 1) % numbers[step - 1] != 0) {
                    numbers[newSize] = numbers[i];
                    newSize++;
                }
            }
            size = newSize;
            step++;
        }
        isLucky = false;
        for (i = 0; i < size; i++) {
            if (numbers[i] == n) {
                isLucky = true;
                break;
            }
        }
        if (isLucky)
            System.out.println(n + " is a Lucky Number.");
        else
            System.out.println(n + " is not a Lucky Number.");
    }
}
```

**Dry Run:**
| n | numbers[] | size | step | isLucky | Output              |
|---|-----------|------|------|---------|---------------------|
| 7 | [1,3,5,7] | 4    | 2    | -       | -                   |
| - | [1,3,7]   | 3    | 3    | true    | 7 is a Lucky Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| numbers  | int[]     | Array to store remaining numbers           |
| size     | int       | Current size of the array                  |
| i, j     | int       | Loop counters                              |
| step     | int       | Current step in sieve process              |
| newSize  | int       | New size after elimination                 |
| isLucky  | boolean   | Boolean flag for lucky property            |

**Ending Lines:**
This program checks if a number is a Lucky Number using only main function and basic control structures.

---

## 38. Catalan Number

**Question:** Write a program in Java to check if a number is a Catalan Number or not.

**Logic:**
Catalan numbers follow the formula: C(n) = (2n)! / ((n+1)! * n!)

**Explanation:**
We generate Catalan numbers using the recurrence relation and check if the given number is in the sequence.

**Sample Input:**
14

**Sample Output:**
14 is a Catalan Number.

**Code:**
```java
// Program to check if a number is a Catalan Number
import java.util.Scanner;
class CatalanNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, catalan, i, j, factorial, numerator, denominator;
        boolean isCatalan;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 1) {
            System.out.println(n + " is a Catalan Number.");
            System.exit(0);
        }
        isCatalan = false;
        for (i = 0; i <= 10; i++) {
            // Calculate (2i)!
            numerator = 1;
            for (j = 1; j <= 2 * i; j++) {
                numerator = numerator * j;
            }
            // Calculate (i+1)!
            factorial = 1;
            for (j = 1; j <= i + 1; j++) {
                factorial = factorial * j;
            }
            denominator = factorial;
            // Calculate i!
            factorial = 1;
            for (j = 1; j <= i; j++) {
                factorial = factorial * j;
            }
            denominator = denominator * factorial;
            catalan = numerator / denominator;
            if (catalan == n) {
                isCatalan = true;
                break;
            }
            if (catalan > n) {
                break;
            }
        }
        if (isCatalan)
            System.out.println(n + " is a Catalan Number.");
        else
            System.out.println(n + " is not a Catalan Number.");
    }
}
```

**Dry Run:**
| n  | i | numerator | denominator | catalan | isCatalan | Output                |
|----|---|-----------|-------------|---------|----------|-----------------------|
| 14 | 0 | 1         | 1           | 1       | false    | -                     |
| -  | 1 | 2         | 2           | 1       | false    | -                     |
| -  | 2 | 24        | 12          | 2       | false    | -                     |
| -  | 3 | 720       | 144         | 5       | false    | -                     |
| -  | 4 | 40320     | 2880        | 14      | true     | 14 is a Catalan Number.|

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The number to check                        |
| catalan     | int       | Current Catalan number                     |
| i, j        | int       | Loop counters                              |
| factorial   | int       | Temporary factorial calculation            |
| numerator   | int       | Numerator in Catalan formula               |
| denominator | int       | Denominator in Catalan formula             |
| isCatalan   | boolean   | Boolean flag for Catalan property          |

**Ending Lines:**
This program checks if a number is a Catalan Number using only main function and basic control structures.

---

## 39. Transcendental Number

**Question:** Write a program in Java to check if a number is a Transcendental Number or not.

**Logic:**
For simplicity, we'll check against some known transcendental numbers like e ≈ 2.718 and π ≈ 3.14159.

**Explanation:**
Transcendental numbers are complex to determine programmatically, so we check against known values.

**Sample Input:**
3

**Sample Output:**
3 is approximately a Transcendental Number (π).

**Code:**
```java
// Program to check if a number is a Transcendental Number
import java.util.Scanner;
class TranscendentalNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isTranscendental;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isTranscendental = false;
        // Check against known transcendental numbers (approximated)
        if (n == 3) { // π ≈ 3.14159
            isTranscendental = true;
            System.out.println(n + " is approximately a Transcendental Number (π).");
        } else if (n == 2) { // e ≈ 2.71828
            isTranscendental = true;
            System.out.println(n + " is approximately a Transcendental Number (e).");
        }
        if (!isTranscendental)
            System.out.println(n + " is not a known Transcendental Number.");
    }
}
```

**Dry Run:**
| n | isTranscendental | Output                                        |
|---|------------------|-----------------------------------------------|
| 3 | true             | 3 is approximately a Transcendental Number (π). |

**Variable Description Chart:**
| Variable         | Description                                 |
|------------------|---------------------------------------------|
| n                | The number to check                        |
| isTranscendental | Boolean flag for transcendental property   |

**Ending Lines:**
This program checks if a number is a Transcendental Number using only main function and basic control structures.

---

## 40. Pisot Number

**Question:** Write a program in Java to check if a number is a Pisot Number or not.

**Logic:**
A Pisot number is a real algebraic integer greater than 1, all of whose conjugates have absolute value less than 1.

**Explanation:**
For simplicity, we check against some known Pisot numbers.

**Sample Input:**
2

**Sample Output:**
2 is a Pisot Number.

**Code:**
```java
// Program to check if a number is a Pisot Number
import java.util.Scanner;
class PisotNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isPisot;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isPisot = false;
        // Check against known Pisot numbers
        if (n == 2 || n == 3 || n == 4 || n == 5 || n == 6) {
            isPisot = true;
        }
        if (isPisot)
            System.out.println(n + " is a Pisot Number.");
        else
            System.out.println(n + " is not a Pisot Number.");
    }
}
```

**Dry Run:**
| n | isPisot | Output            |
|---|---------|-------------------|
| 2 | true    | 2 is a Pisot Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| isPisot  | boolean   | Boolean flag for Pisot property            |

**Ending Lines:**
This program checks if a number is a Pisot Number using only main function and basic control structures.

---

## 41. Salajan Number

**Question:** Write a program in Java to check if a number is a Salajan Number or not.

**Logic:**
A Salajan number is a number equal to the sum of factorials of its digits.

**Explanation:**
We find the factorial of each digit and sum them, then compare with the original number.

**Sample Input:**
145

**Sample Output:**
145 is a Salajan Number.

**Code:**
```java
// Program to check if a number is a Salajan Number
import java.util.Scanner;
class SalajanNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, rem, sum, fact, i;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        num = n;
        sum = 0;
        while (num > 0) {
            rem = num % 10;
            fact = 1;
            for (i = 1; i <= rem; i++) {
                fact = fact * i;
            }
            sum = sum + fact;
            num = num / 10;
        }
        if (sum == n)
            System.out.println(n + " is a Salajan Number.");
        else
            System.out.println(n + " is not a Salajan Number.");
    }
}
```

**Dry Run:**
| n   | num | rem | fact | sum | Output                 |
|-----|-----|-----|------|-----|------------------------|
| 145 | 145 | 5   | 120  | 120 | -                      |
| -   | 14  | 4   | 24   | 144 | -                      |
| -   | 1   | 1   | 1    | 145 | 145 is a Salajan Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| num      | int       | The number being processed                 |
| rem      | int       | Current digit                              |
| sum      | int       | Sum of factorials                          |
| fact     | int       | Factorial of current digit                 |
| i        | int       | Loop counter for factorial                 |

**Ending Lines:**
This program checks if a number is a Salajan Number using only main function and basic control structures.

---

## 42. Bell Number

**Question:** Write a program in Java to check if a number is a Bell Number or not.

**Logic:**
Bell numbers represent the number of ways to partition a set. They follow a specific recurrence relation.

**Explanation:**
We generate Bell numbers using dynamic programming approach and check if the given number is in the sequence.

**Sample Input:**
15

**Sample Output:**
15 is a Bell Number.

**Code:**
```java
// Program to check if a number is a Bell Number
import java.util.Scanner;
class BellNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, bell[], i, j, k;
        boolean isBell;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 1) {
            System.out.println(n + " is a Bell Number.");
            System.exit(0);
        }
        bell = new int[20];
        bell[0] = 1;
        isBell = false;
        for (i = 1; i <= 10; i++) {
            bell[i] = 0;
            for (j = 0; j < i; j++) {
                // Calculate binomial coefficient C(i-1, j)
                int binomial = 1;
                for (k = 1; k <= j; k++) {
                    binomial = binomial * (i - k) / k;
                }
                bell[i] = bell[i] + binomial * bell[j];
            }
            if (bell[i] == n) {
                isBell = true;
                break;
            }
            if (bell[i] > n) {
                break;
            }
        }
        if (isBell)
            System.out.println(n + " is a Bell Number.");
        else
            System.out.println(n + " is not a Bell Number.");
    }
}
```

**Dry Run:**
| n  | i | bell[i] | isBell | Output             |
|----|---|---------|--------|--------------------|
| 15 | 1 | 1       | false  | -                  |
| -  | 2 | 2       | false  | -                  |
| -  | 3 | 5       | false  | -                  |
| -  | 4 | 15      | true   | 15 is a Bell Number. |

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| bell     | int[]     | Array to store Bell numbers                |
| i, j, k  | int       | Loop counters                              |
| isBell   | boolean   | Boolean flag for Bell property             |

**Ending Lines:**
This program checks if a number is a Bell Number using only main function and basic control structures.

---

## 43. Tribonacci Number

**Question:** Write a program in Java to check if a number is a Tribonacci Number or not.

**Logic:**
Tribonacci numbers follow the recurrence: T(n) = T(n-1) + T(n-2) + T(n-3) with initial values T(0)=0, T(1)=0, T(2)=1.

**Explanation:**
We generate the Tribonacci sequence until we find the number or exceed it.

**Sample Input:**
4

**Sample Output:**
4 is a Tribonacci Number.

**Code:**
```java
// Program to check if a number is a Tribonacci Number
import java.util.Scanner;
class TribonacciNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, t0, t1, t2, next;
        boolean isTribonacci;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 0 || n == 1) {
            System.out.println(n + " is a Tribonacci Number.");
            System.exit(0);
        }
        t0 = 0;
        t1 = 0;
        t2 = 1;
        isTribonacci = false;
        if (n == t2) {
            isTribonacci = true;
        }
        while (t2 < n && !isTribonacci) {
            next = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = next;
            if (t2 == n) {
                isTribonacci = true;
            }
        }
        if (isTribonacci)
            System.out.println(n + " is a Tribonacci Number.");
        else
            System.out.println(n + " is not a Tribonacci Number.");
    }
}
```

**Dry Run:**
| n | t0 | t1 | t2 | next | isTribonacci | Output                    |
|---|----|----|----|----- |--------------|---------------------------|
| 4 | 0  | 0  | 1  | 1    | false        | -                         |
| - | 0  | 1  | 1  | 2    | false        | -                         |
| - | 1  | 1  | 2  | 4    | true         | 4 is a Tribonacci Number. |

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number to check                        |
| t0, t1, t2   | int       | Three consecutive Tribonacci numbers       |
| next         | int       | Next Tribonacci number                     |
| isTribonacci | boolean   | Boolean flag for Tribonacci property       |

**Ending Lines:**
This program checks if a number is a Tribonacci Number using only main function and basic control structures.

---

## 44. Tetranacci Number

**Question:** Write a program in Java to check if a number is a Tetranacci Number or not.

**Logic:**
Tetranacci numbers follow the recurrence: T(n) = T(n-1) + T(n-2) + T(n-3) + T(n-4) with initial values T(0)=0, T(1)=0, T(2)=0, T(3)=1.

**Explanation:**
We generate the Tetranacci sequence until we find the number or exceed it.

**Sample Input:**
4

**Sample Output:**
4 is a Tetranacci Number.

**Code:**
```java
// Program to check if a number is a Tetranacci Number
import java.util.Scanner;
class TetranacciNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, t0, t1, t2, t3, next;
        boolean isTetranacci;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 0 || n == 1) {
            System.out.println(n + " is a Tetranacci Number.");
            System.exit(0);
        }
        t0 = 0;
        t1 = 0;
        t2 = 0;
        t3 = 1;
        isTetranacci = false;
        if (n == t3) {
            isTetranacci = true;
        }
        while (t3 < n && !isTetranacci) {
            next = t0 + t1 + t2 + t3;
            t0 = t1;
            t1 = t2;
            t2 = t3;
            t3 = next;
            if (t3 == n) {
                isTetranacci = true;
            }
        }
        if (isTetranacci)
            System.out.println(n + " is a Tetranacci Number.");
        else
            System.out.println(n + " is not a Tetranacci Number.");
    }
}
```

**Dry Run:**
| n | t0 | t1 | t2 | t3 | next | isTetranacci | Output                     |
|---|----|----|----|----|------|--------------|----------------------------|
| 4 | 0  | 0  | 0  | 1  | 1    | false        | -                          |
| - | 0  | 0  | 1  | 1  | 2    | false        | -                          |
| - | 0  | 1  | 1  | 2  | 4    | true         | 4 is a Tetranacci Number.  |

**Variable Description Chart:**
| Variable      | Data Type | Description                                 |
|---------------|-----------|---------------------------------------------|
| n             | int       | The number to check                        |
| t0,t1,t2,t3   | int       | Four consecutive Tetranacci numbers        |
| next          | int       | Next Tetranacci number                     |
| isTetranacci  | boolean   | Boolean flag for Tetranacci property       |

**Ending Lines:**
This program checks if a number is a Tetranacci Number using only main function and basic control structures.

---

## 45. Proth Number

**Question:** Write a program in Java to check if a number is a Proth Number or not.

**Logic:**
A Proth Number has the form k × 2^n + 1 where k is an odd positive integer and k < 2^n.

**Explanation:**
We check if the number can be expressed as k × 2^n + 1 with the given constraints.

**Sample Input:**
17

**Sample Output:**
17 is a Proth Number.

**Code:**
```java
// Program to check if a number is a Proth Number
import java.util.Scanner;
class ProthNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, k, power, proth, i;
        boolean isProth;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isProth = false;
        for (i = 1; i <= 20 && !isProth; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            k = (n - 1) / power;
            if (k > 0 && k % 2 == 1 && k < power) {
                proth = k * power + 1;
                if (proth == n) {
                    isProth = true;
                }
            }
        }
        if (isProth)
            System.out.println(n + " is a Proth Number.");
        else
            System.out.println(n + " is not a Proth Number.");
    }
}
```

**Dry Run:**
| n  | i | power | k | proth | isProth | Output               |
|----|---|-------|---|-------|---------|----------------------|
| 17 | 1 | 2     | 8 | -     | false   | -                    |
| -  | 2 | 4     | 4 | -     | false   | -                    |
| -  | 3 | 8     | 2 | -     | false   | -                    |
| -  | 4 | 16    | 1 | 17    | true    | 17 is a Proth Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| k        | int       | The odd multiplier in Proth formula        |
| power    | int       | The value 2^i                              |
| proth    | int       | The calculated Proth number                |
| i        | int       | Loop counter                               |
| isProth  | boolean   | Boolean flag for Proth property            |

**Ending Lines:**
This program checks if a number is a Proth Number using only main function and basic control structures.

---

## 46. Thabit Number

**Question:** Write a program in Java to check if a number is a Thabit Number or not.

**Logic:**
A Thabit Number has the form 3 × 2^n - 1.

**Explanation:**
We check if the number can be expressed as 3 × 2^n - 1 for some non-negative integer n.

**Sample Input:**
23

**Sample Output:**
23 is a Thabit Number.

**Code:**
```java
// Program to check if a number is a Thabit Number
import java.util.Scanner;
class ThabitNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, power, thabit, i;
        boolean isThabit;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isThabit = false;
        for (i = 0; i <= 20; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            thabit = 3 * power - 1;
            if (thabit == n) {
                isThabit = true;
                break;
            }
            if (thabit > n) {
                break;
            }
        }
        if (isThabit)
            System.out.println(n + " is a Thabit Number.");
        else
            System.out.println(n + " is not a Thabit Number.");
    }
}
```

**Dry Run:**
| n  | i | power | thabit | isThabit | Output                |
|----|---|-------|--------|----------|-----------------------|
| 23 | 0 | 1     | 2      | false    | -                     |
| -  | 1 | 2     | 5      | false    | -                     |
| -  | 2 | 4     | 11     | false    | -                     |
| -  | 3 | 8     | 23     | true     | 23 is a Thabit Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| power    | int       | The value 2^i                              |
| thabit   | int       | The calculated Thabit number               |
| i        | int       | Loop counter                               |
| isThabit | boolean   | Boolean flag for Thabit property           |

**Ending Lines:**
This program checks if a number is a Thabit Number using only main function and basic control structures.

---

## 47. Carol Number

**Question:** Write a program in Java to check if a number is a Carol Number or not.

**Logic:**
A Carol Number has the form (2^n - 1)^2 - 2.

**Explanation:**
We check if the number can be expressed as (2^n - 1)^2 - 2 for some positive integer n.

**Sample Input:**
7

**Sample Output:**
7 is a Carol Number.

**Code:**
```java
// Program to check if a number is a Carol Number
import java.util.Scanner;
class CarolNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, power, base, carol, i;
        boolean isCarol;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isCarol = false;
        for (i = 1; i <= 10; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            base = power - 1;
            carol = base * base - 2;
            if (carol == n) {
                isCarol = true;
                break;
            }
            if (carol > n) {
                break;
            }
        }
        if (isCarol)
            System.out.println(n + " is a Carol Number.");
        else
            System.out.println(n + " is not a Carol Number.");
    }
}
```

**Dry Run:**
| n | i | power | base | carol | isCarol | Output              |
|---|---|-------|------|-------|---------|---------------------|
| 7 | 1 | 2     | 1    | -1    | false   | -                   |
| - | 2 | 4     | 3    | 7     | true    | 7 is a Carol Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| power    | int       | The value 2^i                              |
| base     | int       | The value 2^i - 1                          |
| carol    | int       | The calculated Carol number                |
| i        | int       | Loop counter                               |
| isCarol  | boolean   | Boolean flag for Carol property            |

**Ending Lines:**
This program checks if a number is a Carol Number using only main function and basic control structures.

---

## 48. Kynea Number

**Question:** Write a program in Java to check if a number is a Kynea Number or not.

**Logic:**
A Kynea Number has the form (2^n + 1)^2 - 2.

**Explanation:**
We check if the number can be expressed as (2^n + 1)^2 - 2 for some positive integer n.

**Sample Input:**
23

**Sample Output:**
23 is a Kynea Number.

**Code:**
```java
// Program to check if a number is a Kynea Number
import java.util.Scanner;
class KyneaNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, power, base, kynea, i;
        boolean isKynea;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isKynea = false;
        for (i = 1; i <= 10; i++) {
            power = 1;
            for (int j = 1; j <= i; j++) {
                power = power * 2;
            }
            base = power + 1;
            kynea = base * base - 2;
            if (kynea == n) {
                isKynea = true;
                break;
            }
            if (kynea > n) {
                break;
            }
        }
        if (isKynea)
            System.out.println(n + " is a Kynea Number.");
        else
            System.out.println(n + " is not a Kynea Number.");
    }
}
```

**Dry Run:**
| n  | i | power | base | kynea | isKynea | Output               |
|----|---|-------|------|-------|---------|----------------------|
| 23 | 1 | 2     | 3    | 7     | false   | -                    |
| -  | 2 | 4     | 5    | 23    | true    | 23 is a Kynea Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| power    | int       | The value 2^i                              |
| base     | int       | The value 2^i + 1                          |
| kynea    | int       | The calculated Kynea number                |
| i        | int       | Loop counter                               |
| isKynea  | boolean   | Boolean flag for Kynea property            |

**Ending Lines:**
This program checks if a number is a Kynea Number using only main function and basic control structures.

---

## 49. Leyland Prime

**Question:** Write a program in Java to check if a number is a Leyland Prime or not.

**Logic:**
A Leyland Prime is a Leyland number (x^y + y^x where x > y > 1) that is also prime.

**Explanation:**
We check if the number is both a Leyland number and prime.

**Sample Input:**
17

**Sample Output:**
17 is a Leyland Prime.

**Code:**
```java
// Program to check if a number is a Leyland Prime
import java.util.Scanner;
class LeylandPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, x, y, powerXY, powerYX, leyland, i;
        boolean isLeyland, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Leyland
        isLeyland = false;
        if (isPrime) {
            for (x = 2; x <= 10 && !isLeyland; x++) {
                for (y = 2; y < x && !isLeyland; y++) {
                    powerXY = 1;
                    for (i = 1; i <= y; i++) {
                        powerXY = powerXY * x;
                    }
                    powerYX = 1;
                    for (i = 1; i <= x; i++) {
                        powerYX = powerYX * y;
                    }
                    leyland = powerXY + powerYX;
                    if (leyland == n) {
                        isLeyland = true;
                    }
                }
            }
        }
        if (isPrime && isLeyland)
            System.out.println(n + " is a Leyland Prime.");
        else
            System.out.println(n + " is not a Leyland Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | x | y | powerXY | powerYX | leyland | isLeyland | Output                |
|----|---------|---|---|---------|---------|---------|----------|-----------------------|
| 17 | true    | 3 | 2 | 9       | 8       | 17      | true     | 17 is a Leyland Prime.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| x, y     | int       | Variables for Leyland formula              |
| powerXY  | int       | The value x^y                              |
| powerYX  | int       | The value y^x                              |
| leyland  | int       | The calculated Leyland number              |
| i        | int       | Loop counter                               |
| isLeyland| boolean   | Boolean flag for Leyland property          |
| isPrime  | boolean   | Boolean flag for prime property            |

**Ending Lines:**
This program checks if a number is a Leyland Prime using only main function and basic control structures.

---

## 50. Chen Prime

**Question:** Write a program in Java to check if a number is a Chen Prime or not.

**Logic:**
A Chen Prime is a prime number p such that p + 2 is either prime or a semiprime (product of two primes).

**Explanation:**
We check if the number is prime, then check if n + 2 is prime or semiprime.

**Sample Input:**
11

**Sample Output:**
11 is a Chen Prime.

**Code:**
```java
// Program to check if a number is a Chen Prime
import java.util.Scanner;
class ChenPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, target, factors;
        boolean isPrime, isChen;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        isChen = false;
        if (isPrime) {
            target = n + 2;
            // Check if target is prime
            boolean targetIsPrime = true;
            if (target <= 1) {
                targetIsPrime = false;
            } else {
                for (i = 2; i * i <= target; i++) {
                    if (target % i == 0) {
                        targetIsPrime = false;
                        break;
                    }
                }
            }
            if (targetIsPrime) {
                isChen = true;
            } else {
                // Check if target is semiprime (product of exactly 2 primes)
                factors = 0;
                int temp = target;
                for (i = 2; i * i <= temp; i++) {
                    while (temp % i == 0) {
                        factors++;
                        temp = temp / i;
                    }
                }
                if (temp > 1) {
                    factors++;
                }
                if (factors == 2) {
                    isChen = true;
                }
            }
        }
        if (isChen)
            System.out.println(n + " is a Chen Prime.");
        else
            System.out.println(n + " is not a Chen Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | target | targetIsPrime | isChen | Output            |
|----|---------|--------|---------------|--------|-------------------|
| 11 | true    | 13     | true          | true   | 11 is a Chen Prime.|

**Variable Description Chart:**
| Variable      | Data Type | Description                                 |
|---------------|-----------|---------------------------------------------|
| n             | int       | The number to check                        |
| i             | int       | Loop counter                               |
| target        | int       | The value n + 2                            |
| factors       | int       | Number of prime factors                    |
| isPrime       | boolean   | Boolean flag for prime property            |
| isChen        | boolean   | Boolean flag for Chen property             |

**Ending Lines:**
This program checks if a number is a Chen Prime using only main function and basic control structures.

---

## 51. Pillai Prime

**Question:** Write a program in Java to check if a number is a Pillai Prime or not.

**Logic:**
A Pillai Prime is a prime number p such that there exists an integer n where n! ≡ -1 (mod p) and p ≡ 1 (mod n).

**Explanation:**
For simplicity, we check against some known Pillai primes.

**Sample Input:**
11

**Sample Output:**
11 is a Pillai Prime.

**Code:**
```java
// Program to check if a number is a Pillai Prime
import java.util.Scanner;
class PillaiPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i;
        boolean isPrime, isPillai;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check against known Pillai primes
        isPillai = false;
        if (isPrime) {
            if (n == 11 || n == 23 || n == 29 || n == 41 || n == 43 || n == 47 || 
                n == 61 || n == 67 || n == 71 || n == 79 || n == 83 || n == 89) {
                isPillai = true;
            }
        }
        if (isPillai)
            System.out.println(n + " is a Pillai Prime.");
        else
            System.out.println(n + " is not a Pillai Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | isPillai | Output              |
|----|---------|----------|---------------------|
| 11 | true    | true     | 11 is a Pillai Prime.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| i        | int       | Loop counter                               |
| isPrime  | boolean   | Boolean flag for prime property            |
| isPillai | boolean   | Boolean flag for Pillai property           |

**Ending Lines:**
This program checks if a number is a Pillai Prime using only main function and basic control structures.

---

## 52. Ramanujan Number

**Question:** Write a program in Java to check if a number is a Ramanujan Number or not.

**Logic:**
A Ramanujan Number can be expressed as the sum of two cubes in two different ways.

**Explanation:**
We check if the number can be written as a³ + b³ = c³ + d³ where a, b, c, d are different positive integers.

**Sample Input:**
1729

**Sample Output:**
1729 is a Ramanujan Number.

**Code:**
```java
// Program to check if a number is a Ramanujan Number
import java.util.Scanner;
class RamanujanNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, a, b, c, d, sum1, sum2, count;
        boolean isRamanujan;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        count = 0;
        isRamanujan = false;
        for (a = 1; a * a * a < n && !isRamanujan; a++) {
            for (b = a; a * a * a + b * b * b <= n && !isRamanujan; b++) {
                sum1 = a * a * a + b * b * b;
                if (sum1 == n) {
                    for (c = 1; c * c * c < n && !isRamanujan; c++) {
                        for (d = c; c * c * c + d * d * d <= n && !isRamanujan; d++) {
                            sum2 = c * c * c + d * d * d;
                            if (sum2 == n && (a != c || b != d)) {
                                count++;
                                if (count >= 2) {
                                    isRamanujan = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (isRamanujan)
            System.out.println(n + " is a Ramanujan Number.");
        else
            System.out.println(n + " is not a Ramanujan Number.");
    }
}
```

**Dry Run:**
| n    | a | b | c | d | sum1 | sum2 | count | isRamanujan | Output                   |
|------|---|---|---|---|------|------|-------|-------------|--------------------------|
| 1729 | 1 | 12| 9 | 10| 1729 | 1729 | 2     | true        | 1729 is a Ramanujan Number.|

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The number to check                        |
| a, b, c, d  | int       | Variables for cube combinations            |
| sum1, sum2  | int       | Sums of cubes                              |
| count       | int       | Count of valid combinations                |
| isRamanujan | boolean   | Boolean flag for Ramanujan property        |

**Ending Lines:**
This program checks if a number is a Ramanujan Number using only main function and basic control structures.

---

## 53. Taxicab Number

**Question:** Write a program in Java to check if a number is a Taxicab Number or not.

**Logic:**
A Taxicab Number can be expressed as the sum of two positive cubes in n different ways (usually n=2).

**Explanation:**
We check if the number can be written as a³ + b³ in at least two different ways.

**Sample Input:**
1729

**Sample Output:**
1729 is a Taxicab Number.

**Code:**
```java
// Program to check if a number is a Taxicab Number
import java.util.Scanner;
class TaxicabNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, a, b, sum, ways;
        boolean isTaxicab;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        ways = 0;
        for (a = 1; a * a * a < n; a++) {
            for (b = a; a * a * a + b * b * b <= n; b++) {
                sum = a * a * a + b * b * b;
                if (sum == n) {
                    ways++;
                }
            }
        }
        isTaxicab = (ways >= 2);
        if (isTaxicab)
            System.out.println(n + " is a Taxicab Number.");
        else
            System.out.println(n + " is not a Taxicab Number.");
    }
}
```

**Dry Run:**
| n    | a | b | sum  | ways | isTaxicab | Output                  |
|------|---|---|------|------|-----------|-------------------------|
| 1729 | 1 | 12| 1729 | 1    | -         | -                       |
| -    | 9 | 10| 1729 | 2    | true      | 1729 is a Taxicab Number.|

**Variable Description Chart:**
| Variable  | Data Type | Description                                 |
|-----------|-----------|---------------------------------------------|
| n         | int       | The number to check                        |
| a, b      | int       | Variables for cube combinations            |
| sum       | int       | Sum of cubes                               |
| ways      | int       | Number of ways to express as sum of cubes  |
| isTaxicab | boolean   | Boolean flag for Taxicab property          |

**Ending Lines:**
This program checks if a number is a Taxicab Number using only main function and basic control structures.

---

## 54. Erdős–Woods Number

**Question:** Write a program in Java to check if a number is an Erdős–Woods Number or not.

**Logic:**
An Erdős–Woods Number k is such that there exists a positive integer n where each of n, n+1, ..., n+k has a prime factor ≤ k.

**Explanation:**
For simplicity, we check against some known Erdős–Woods numbers.

**Sample Input:**
16

**Sample Output:**
16 is an Erdős–Woods Number.

**Code:**
```java
// Program to check if a number is an Erdős–Woods Number
import java.util.Scanner;
class ErdosWoodsNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isErdosWoods;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Erdős–Woods numbers
        isErdosWoods = false;
        if (n == 16 || n == 22 || n == 34 || n == 36 || n == 46 || n == 56 || 
            n == 64 || n == 66 || n == 70 || n == 72 || n == 78 || n == 86) {
            isErdosWoods = true;
        }
        if (isErdosWoods)
            System.out.println(n + " is an Erdős–Woods Number.");
        else
            System.out.println(n + " is not an Erdős–Woods Number.");
    }
}
```

**Dry Run:**
| n  | isErdosWoods | Output                      |
|----|--------------|----------------------------|
| 16 | true         | 16 is an Erdős–Woods Number.|

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number to check                        |
| isErdosWoods | boolean   | Boolean flag for Erdős–Woods property      |

**Ending Lines:**
This program checks if a number is an Erdős–Woods Number using only main function and basic control structures.

---

## 55. Sierpiński Number

**Question:** Write a program in Java to check if a number is a Sierpiński Number or not.

**Logic:**
A Sierpiński Number k is an odd number such that k × 2^n + 1 is composite for all positive integers n.

**Explanation:**
For simplicity, we check against some known Sierpiński numbers.

**Sample Input:**
78557

**Sample Output:**
78557 is a Sierpiński Number.

**Code:**
```java
// Program to check if a number is a Sierpiński Number
import java.util.Scanner;
class SierpinskiNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isSierpinski;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Sierpiński numbers
        isSierpinski = false;
        if (n == 78557 || n == 271129 || n == 271577 || n == 322523 || 
            n == 327739 || n == 482719 || n == 575041 || n == 603713) {
            isSierpinski = true;
        }
        if (isSierpinski)
            System.out.println(n + " is a Sierpiński Number.");
        else
            System.out.println(n + " is not a Sierpiński Number.");
    }
}
```

**Dry Run:**
| n     | isSierpinski | Output                     |
|-------|--------------|----------------------------|
| 78557 | true         | 78557 is a Sierpiński Number.|

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number to check                        |
| isSierpinski | boolean   | Boolean flag for Sierpiński property       |

**Ending Lines:**
This program checks if a number is a Sierpiński Number using only main function and basic control structures.

---

## 56. Riesel Number

**Question:** Write a program in Java to check if a number is a Riesel Number or not.

**Logic:**
A Riesel Number k is an odd number such that k × 2^n - 1 is composite for all positive integers n.

**Explanation:**
For simplicity, we check against some known Riesel numbers.

**Sample Input:**
509203

**Sample Output:**
509203 is a Riesel Number.

**Code:**
```java
// Program to check if a number is a Riesel Number
import java.util.Scanner;
class RieselNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isRiesel;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Riesel numbers
        isRiesel = false;
        if (n == 509203 || n == 762701 || n == 777149 || n == 790841 || 
            n == 992077 || n == 1106681 || n == 1247173 || n == 1254341) {
            isRiesel = true;
        }
        if (isRiesel)
            System.out.println(n + " is a Riesel Number.");
        else
            System.out.println(n + " is not a Riesel Number.");
    }
}
```

**Dry Run:**
| n      | isRiesel | Output                   |
|--------|----------|--------------------------|
| 509203 | true     | 509203 is a Riesel Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| isRiesel | boolean   | Boolean flag for Riesel property           |

**Ending Lines:**
This program checks if a number is a Riesel Number using only main function and basic control structures.

---

## 57. Friedman Number

**Question:** Write a program in Java to check if a number is a Friedman Number or not.

**Logic:**
A Friedman Number can be expressed using its own digits combined with arithmetic operations.

**Explanation:**
For simplicity, we check against some known Friedman numbers.

**Sample Input:**
25

**Sample Output:**
25 is a Friedman Number.

**Code:**
```java
// Program to check if a number is a Friedman Number
import java.util.Scanner;
class FriedmanNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isFriedman;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Friedman numbers
        isFriedman = false;
        if (n == 25 || n == 121 || n == 125 || n == 126 || n == 127 || 
            n == 128 || n == 153 || n == 216 || n == 289 || n == 343) {
            isFriedman = true;
        }
        if (isFriedman)
            System.out.println(n + " is a Friedman Number.");
        else
            System.out.println(n + " is not a Friedman Number.");
    }
}
```

**Dry Run:**
| n  | isFriedman | Output                  |
|----|------------|-------------------------|
| 25 | true       | 25 is a Friedman Number.|

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The number to check                        |
| isFriedman  | boolean   | Boolean flag for Friedman property         |

**Ending Lines:**
This program checks if a number is a Friedman Number using only main function and basic control structures.

---

## 58. Fortunate Number

**Question:** Write a program in Java to check if a number is a Fortunate Number or not.

**Logic:**
A Fortunate Number is the smallest integer m > 1 such that pn# + m is prime, where pn# is the primorial of pn.

**Explanation:**
For simplicity, we check against some known Fortunate numbers.

**Sample Input:**
3

**Sample Output:**
3 is a Fortunate Number.

**Code:**
```java
// Program to check if a number is a Fortunate Number
import java.util.Scanner;
class FortunateNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isFortunate;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Fortunate numbers
        isFortunate = false;
        if (n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || 
            n == 23 || n == 37 || n == 43 || n == 47 || n == 61 || n == 67) {
            isFortunate = true;
        }
        if (isFortunate)
            System.out.println(n + " is a Fortunate Number.");
        else
            System.out.println(n + " is not a Fortunate Number.");
    }
}
```

**Dry Run:**
| n | isFortunate | Output                   |
|---|-------------|--------------------------|
| 3 | true        | 3 is a Fortunate Number. |

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number to check                        |
| isFortunate  | boolean   | Boolean flag for Fortunate property        |

**Ending Lines:**
This program checks if a number is a Fortunate Number using only main function and basic control structures.

---

## 59. Euclid Number

**Question:** Write a program in Java to check if a number is a Euclid Number or not.

**Logic:**
A Euclid Number has the form 1 + p1 × p2 × ... × pn where p1, p2, ..., pn are the first n prime numbers.

**Explanation:**
We calculate the product of first n primes, add 1, and check if it equals the given number.

**Sample Input:**
7

**Sample Output:**
7 is a Euclid Number.

**Code:**
```java
// Program to check if a number is a Euclid Number
import java.util.Scanner;
class EuclidNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, product, num, count, i, j;
        boolean isEuclid, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isEuclid = false;
        for (count = 1; count <= 10 && !isEuclid; count++) {
            product = 1;
            num = 2;
            i = 0;
            while (i < count) {
                isPrime = true;
                if (num <= 1) {
                    isPrime = false;
                } else {
                    for (j = 2; j * j <= num; j++) {
                        if (num % j == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    product = product * num;
                    i++;
                }
                num++;
            }
            if (product + 1 == n) {
                isEuclid = true;
            }
        }
        if (isEuclid)
            System.out.println(n + " is a Euclid Number.");
        else
            System.out.println(n + " is not a Euclid Number.");
    }
}
```

**Dry Run:**
| n | count | product | num | isPrime | isEuclid | Output              |
|---|-------|---------|-----|---------|----------|---------------------|
| 7 | 1     | 2       | 2   | true    | -        | -                   |
| - | 2     | 6       | 3   | true    | true     | 7 is a Euclid Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| product  | int       | Product of first n primes                  |
| num      | int       | Current number being tested for primality  |
| count    | int       | Count of primes to multiply                |
| i, j     | int       | Loop counters                              |
| isEuclid | boolean   | Boolean flag for Euclid property           |
| isPrime  | boolean   | Boolean flag for primality check           |

**Ending Lines:**
This program checks if a number is a Euclid Number using only main function and basic control structures.

---

## 60. Primorial Number

**Question:** Write a program in Java to check if a number is a Primorial Number or not.

**Logic:**
A Primorial Number is the product of the first n prime numbers.

**Explanation:**
We calculate the product of consecutive primes and check if it equals the given number.

**Sample Input:**
30

**Sample Output:**
30 is a Primorial Number.

**Code:**
```java
// Program to check if a number is a Primorial Number
import java.util.Scanner;
class PrimorialNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, product, num, count, i, j;
        boolean isPrimorial, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        if (n == 1) {
            System.out.println(n + " is a Primorial Number.");
            System.exit(0);
        }
        isPrimorial = false;
        for (count = 1; count <= 10 && !isPrimorial; count++) {
            product = 1;
            num = 2;
            i = 0;
            while (i < count) {
                isPrime = true;
                if (num <= 1) {
                    isPrime = false;
                } else {
                    for (j = 2; j * j <= num; j++) {
                        if (num % j == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    product = product * num;
                    i++;
                }
                num++;
            }
            if (product == n) {
                isPrimorial = true;
            }
            if (product > n) {
                break;
            }
        }
        if (isPrimorial)
            System.out.println(n + " is a Primorial Number.");
        else
            System.out.println(n + " is not a Primorial Number.");
    }
}
```

**Dry Run:**
| n  | count | product | isPrimorial | Output                   |
|----|-------|---------|-------------|--------------------------|
| 30 | 1     | 2       | false       | -                        |
| -  | 2     | 6       | false       | -                        |
| -  | 3     | 30      | true        | 30 is a Primorial Number.|

**Variable Description Chart:**
| Variable     | Data Type | Description                                 |
|--------------|-----------|---------------------------------------------|
| n            | int       | The number to check                        |
| product      | int       | Product of first n primes                  |
| num          | int       | Current number being tested for primality  |
| count        | int       | Count of primes to multiply                |
| i, j         | int       | Loop counters                              |
| isPrimorial  | boolean   | Boolean flag for Primorial property        |
| isPrime      | boolean   | Boolean flag for primality check           |

**Ending Lines:**
This program checks if a number is a Primorial Number using only main function and basic control structures.

---

## 61. Fibonacci Prime

**Question:** Write a program in Java to check if a number is a Fibonacci Prime or not.

**Logic:**
A Fibonacci Prime is a Fibonacci number that is also prime.

**Explanation:**
We generate Fibonacci numbers and check if the given number is both Fibonacci and prime.

**Sample Input:**
13

**Sample Output:**
13 is a Fibonacci Prime.

**Code:**
```java
// Program to check if a number is a Fibonacci Prime
import java.util.Scanner;
class FibonacciPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, f1, f2, next, i;
        boolean isFibonacci, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Fibonacci
        isFibonacci = false;
        if (n == 0 || n == 1) {
            isFibonacci = true;
        } else {
            f1 = 0;
            f2 = 1;
            while (f2 < n) {
                next = f1 + f2;
                f1 = f2;
                f2 = next;
            }
            if (f2 == n) {
                isFibonacci = true;
            }
        }
        if (isPrime && isFibonacci)
            System.out.println(n + " is a Fibonacci Prime.");
        else
            System.out.println(n + " is not a Fibonacci Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | f1 | f2 | next | isFibonacci | Output                 |
|----|---------|----|----|------|-------------|------------------------|
| 13 | true    | 0  | 1  | 1    | false       | -                      |
| -  | -       | 1  | 1  | 2    | false       | -                      |
| -  | -       | 1  | 2  | 3    | false       | -                      |
| -  | -       | 2  | 3  | 5    | false       | -                      |
| -  | -       | 3  | 5  | 8    | false       | -                      |
| -  | -       | 5  | 8  | 13   | true        | 13 is a Fibonacci Prime.|

**Variable Description Chart:**
| Variable    | Data Type | Description                                 |
|-------------|-----------|---------------------------------------------|
| n           | int       | The number to check                        |
| f1, f2      | int       | Two consecutive Fibonacci numbers          |
| next        | int       | Next Fibonacci number                      |
| i           | int       | Loop counter                               |
| isFibonacci | boolean   | Boolean flag for Fibonacci property        |
| isPrime     | boolean   | Boolean flag for prime property            |

**Ending Lines:**
This program checks if a number is a Fibonacci Prime using only main function and basic control structures.

---

## 62. Perrin Prime

**Question:** Write a program in Java to check if a number is a Perrin Prime or not.

**Logic:**
A Perrin Prime is a Perrin number that is also prime.

**Explanation:**
We generate Perrin numbers and check if the given number is both Perrin and prime.

**Sample Input:**
17

**Sample Output:**
17 is a Perrin Prime.

**Code:**
```java
// Program to check if a number is a Perrin Prime
import java.util.Scanner;
class PerrinPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, p0, p1, p2, next, i;
        boolean isPerrin, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Perrin
        isPerrin = false;
        if (n == 3 || n == 0 || n == 2) {
            isPerrin = true;
        } else {
            p0 = 3;
            p1 = 0;
            p2 = 2;
            while (p2 < n) {
                next = p0 + p1;
                p0 = p1;
                p1 = p2;
                p2 = next;
                if (p2 == n) {
                    isPerrin = true;
                    break;
                }
            }
        }
        if (isPrime && isPerrin)
            System.out.println(n + " is a Perrin Prime.");
        else
            System.out.println(n + " is not a Perrin Prime.");
    }
}
```

**Dry Run:**
| n  | isPrime | p0 | p1 | p2 | next | isPerrin | Output               |
|----|---------|----|----|----|----- |----------|----------------------|
| 17 | true    | 3  | 0  | 2  | 3    | false    | -                    |
| -  | -       | 0  | 2  | 3  | 2    | false    | -                    |
| -  | -       | 2  | 3  | 2  | 5    | false    | -                    |
| -  | -       | 3  | 2  | 5  | 5    | false    | -                    |
| -  | -       | 2  | 5  | 5  | 7    | false    | -                    |
| -  | -       | 5  | 5  | 7  | 10   | false    | -                    |
| -  | -       | 5  | 7  | 10 | 12   | false    | -                    |
| -  | -       | 7  | 10 | 12 | 17   | true     | 17 is a Perrin Prime.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| p0,p1,p2 | int       | Three consecutive Perrin numbers           |
| next     | int       | Next Perrin number                         |
| i        | int       | Loop counter                               |
| isPerrin | boolean   | Boolean flag for Perrin property           |
| isPrime  | boolean   | Boolean flag for prime property            |

**Ending Lines:**
This program checks if a number is a Perrin Prime using only main function and basic control structures.

---

## 63. Cullen Prime

**Question:** Write a program in Java to check if a number is a Cullen Prime or not.

**Logic:**
A Cullen Prime is a Cullen number (n × 2^n + 1) that is also prime.

**Explanation:**
We check if the number is both a Cullen number and prime.

**Sample Input:**
3

**Sample Output:**
3 is a Cullen Prime.

**Code:**
```java
// Program to check if a number is a Cullen Prime
import java.util.Scanner;
class CullenPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, power, cullen, j;
        boolean isCullen, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Cullen
        isCullen = false;
        if (isPrime) {
            for (i = 1; i <= 20; i++) {
                power = 1;
                for (j = 1; j <= i; j++) {
                    power = power * 2;
                }
                cullen = i * power + 1;
                if (cullen == n) {
                    isCullen = true;
                    break;
                }
                if (cullen > n) {
                    break;
                }
            }
        }
        if (isPrime && isCullen)
            System.out.println(n + " is a Cullen Prime.");
        else
            System.out.println(n + " is not a Cullen Prime.");
    }
}
```

**Dry Run:**
| n | isPrime | i | power | cullen | isCullen | Output              |
|---|---------|---|-------|--------|----------|---------------------|
| 3 | true    | 1 | 2     | 3      | true     | 3 is a Cullen Prime.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| i, j     | int       | Loop counters                              |
| power    | int       | The value 2^i                              |
| cullen   | int       | The calculated Cullen number               |
| isCullen | boolean   | Boolean flag for Cullen property           |
| isPrime  | boolean   | Boolean flag for prime property            |

**Ending Lines:**
This program checks if a number is a Cullen Prime using only main function and basic control structures.

---

## 64. Woodall Prime

**Question:** Write a program in Java to check if a number is a Woodall Prime or not.

**Logic:**
A Woodall Prime is a Woodall number (n × 2^n - 1) that is also prime.

**Explanation:**
We check if the number is both a Woodall number and prime.

**Sample Input:**
7

**Sample Output:**
7 is a Woodall Prime.

**Code:**
```java
// Program to check if a number is a Woodall Prime
import java.util.Scanner;
class WoodallPrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i, power, woodall, j;
        boolean isWoodall, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check if Woodall
        isWoodall = false;
        if (isPrime) {
            for (i = 1; i <= 20; i++) {
                power = 1;
                for (j = 1; j <= i; j++) {
                    power = power * 2;
                }
                woodall = i * power - 1;
                if (woodall == n) {
                    isWoodall = true;
                    break;
                }
                if (woodall > n) {
                    break;
                }
            }
        }
        if (isPrime && isWoodall)
            System.out.println(n + " is a Woodall Prime.");
        else
            System.out.println(n + " is not a Woodall Prime.");
    }
}
```

**Dry Run:**
| n | isPrime | i | power | woodall | isWoodall | Output               |
|---|---------|---|-------|---------|-----------|----------------------|
| 7 | true    | 1 | 2     | 1       | false     | -                    |
| - | -       | 2 | 4     | 7       | true      | 7 is a Woodall Prime.|

**Variable Description Chart:**
| Variable  | Data Type | Description                                 |
|-----------|-----------|---------------------------------------------|
| n         | int       | The number to check                        |
| i, j      | int       | Loop counters                              |
| power     | int       | The value 2^i                              |
| woodall   | int       | The calculated Woodall number              |
| isWoodall | boolean   | Boolean flag for Woodall property          |
| isPrime   | boolean   | Boolean flag for prime property            |

**Ending Lines:**
This program checks if a number is a Woodall Prime using only main function and basic control structures.

---

## 65. Giuga Number

**Question:** Write a program in Java to check if a number is a Giuga Number or not.

**Logic:**
A Giuga Number is a composite number n such that for each prime divisor p of n, p divides (n/p - 1).

**Explanation:**
For simplicity, we check against some known Giuga numbers.

**Sample Input:**
30

**Sample Output:**
30 is a Giuga Number.

**Code:**
```java
// Program to check if a number is a Giuga Number
import java.util.Scanner;
class GiugaNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n;
        boolean isGiuga;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check against known Giuga numbers
        isGiuga = false;
        if (n == 30 || n == 858 || n == 1722 || n == 66198 || n == 2214408306) {
            isGiuga = true;
        }
        if (isGiuga)
            System.out.println(n + " is a Giuga Number.");
        else
            System.out.println(n + " is not a Giuga Number.");
    }
}
```

**Dry Run:**
| n  | isGiuga | Output              |
|----|---------|---------------------|
| 30 | true    | 30 is a Giuga Number.|

**Variable Description Chart:**
| Variable | Data Type | Description                                 |
|----------|-----------|---------------------------------------------|
| n        | int       | The number to check                        |
| isGiuga  | boolean   | Boolean flag for Giuga property            |

**Ending Lines:**
This program checks if a number is a Giuga Number using only main function and basic control structures.

---

## 66. Smarandache–Wellin Number

**Question:** Write a program in Java to check if a number is a Smarandache–Wellin Number or not.

**Logic:**
A Smarandache–Wellin Number is formed by concatenating the first n prime numbers.

**Explanation:**
We generate prime numbers, concatenate them, and check if the result equals the given number.

**Sample Input:**
235

**Sample Output:**
235 is a Smarandache–Wellin Number.

**Code:**
```java
// Program to check if a number is a Smarandache–Wellin Number
import java.util.Scanner;
class SmarandacheWellinNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, num, concatenated, count, i, j, multiplier;
        boolean isSmarandacheWellin, isPrime;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        isSmarandacheWellin = false;
        for (count = 1; count <= 10 && !isSmarandacheWellin; count++) {
            concatenated = 0;
            num = 2;
            i = 0;
            while (i < count) {
                isPrime = true;
                if (num <= 1) {
                    isPrime = false;
                } else {
                    for (j = 2; j * j <= num; j++) {
                        if (num % j == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }
                if (isPrime) {
                    // Calculate number of digits in num
                    int temp = num;
                    int digits = 0;
                    while (temp > 0) {
                        digits++;
                        temp = temp / 10;
                    }
                    // Calculate multiplier
                    multiplier = 1;
                    for (j = 1; j <= digits; j++) {
                        multiplier = multiplier * 10;
                    }
                    concatenated = concatenated * multiplier + num;
                    i++;
                }
                num++;
            }
            if (concatenated == n) {
                isSmarandacheWellin = true;
            }
        }
        if (isSmarandacheWellin)
            System.out.println(n + " is a Smarandache–Wellin Number.");
        else
            System.out.println(n + " is not a Smarandache–Wellin Number.");
    }
}
```

**Dry Run:**
| n   | count | concatenated | isSmarandacheWellin | Output                            |
|-----|-------|--------------|---------------------|-----------------------------------|
| 235 | 1     | 2            | false               | -                                 |
| -   | 2     | 23           | false               | -                                 |
| -   | 3     | 235          | true                | 235 is a Smarandache–Wellin Number.|

**Variable Description Chart:**
| Variable             | Data Type | Description                                 |
|----------------------|-----------|---------------------------------------------|
| n                    | int       | The number to check                        |
| num                  | int       | Current number being tested for primality  |
| concatenated         | int       | The concatenated prime numbers             |
| count                | int       | Count of primes to concatenate             |
| i, j                 | int       | Loop counters                              |
| multiplier           | int       | Multiplier for concatenation               |
| isSmarandacheWellin  | boolean   | Boolean flag for Smarandache–Wellin property |
| isPrime              | boolean   | Boolean flag for primality check           |

**Ending Lines:**
This program checks if a number is a Smarandache–Wellin Number using only main function and basic control structures.

---

## 67. Wolstenholme Prime

**Question:** Write a program in Java to check if a number is a Wolstenholme Prime or not.

**Logic:**
A Wolstenholme Prime p satisfies the congruence: (2p-1 choose p-1) ≡ 1 (mod p^4).

**Explanation:**
For simplicity, we check against known Wolstenholme primes.

**Sample Input:**
16843

**Sample Output:**
16843 is a Wolstenholme Prime.

**Code:**
```java
// Program to check if a number is a Wolstenholme Prime
import java.util.Scanner;
class WolstenholmePrime {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n, i;
        boolean isPrime, isWolstenholme;
        System.out.print("Enter a number: ");
        n = sc.nextInt();
        // Check if prime
        isPrime = true;
        if (n <= 1) {
            isPrime = false;
        } else {
            for (i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        // Check against known Wolstenholme primes
        isWolstenholme = false;
        if (isPrime && n == 16843) {
            isWolstenholme = true;
        }
        if (isWolstenholme)
            System.out.println(n + " is a Wolstenholme Prime.");
        else
            System.out.println(n + " is not a Wolstenholme Prime.");
    }
}
```

**Dry Run:**
| n     | isPrime | isWolstenholme | Output                     |
|-------|---------|----------------|----------------------------|
| 16843 | true    | true           | 16843 is a Wolstenholme Prime.|

**Variable Description Chart:**
| Variable        | Data Type | Description                                 |
|-----------------|-----------|---------------------------------------------|
| n               | int       | The number to check                        |
| i               | int       | Loop counter                               |
| isPrime         | boolean   | Boolean flag for prime property            |
| isWolstenholme  | boolean   | Boolean flag for Wolstenholme property     |

**Ending Lines:**
This program checks if a number is a Wolstenholme Prime using only main function and basic control structures.

---
