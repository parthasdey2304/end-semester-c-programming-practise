<h1 align="center">Data Structures Assignment</h1>

## Questions 1
A saddle point of a matrix is an element which is both the largest element in its column and the smallest element in its row. A m x n matrix is said to have a saddle point if some entry a[i][j] is the smallest value in row i and the largest value in column j. Write a program that determines the saddle point if one exists (print location and value in array).

#### Code
``` cpp
#include <iostream>
using namespace std;

const int Max = 100;

void findSaddlePoint(int matrix[Max][Max], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        int min_row_value = matrix[i][0];
        int min_col_index = 0;

        for(int j = 1; j < cols; j++) {
            if(min_row_value > matrix[i][j]) {
                min_row_value = matrix[i][j];
                min_col_index = j;
            }
        }

        bool saddlePoint = true;
        for(int j = 0; j < rows; j++) {
            if(matrix[j][min_col_index] > min_row_value) {
                saddlePoint = false;
                break;
            }
        }

        if(saddlePoint) {
            cout << "Saddle point foundat position (" << i << ", " << min_col_index << ") with value " << min_row_value << "." << endl;
            return;
        }
    }

    cout << "No saddle point found." <<  endl;
}

int main() {
    int rows, cols;
    int matrix[Max][Max];

    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> cols;

    string output = "";

    cout << "Enter the matrix elements : ";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            output += to_string(matrix[i][j]) + " ";
        }
        output += "\n";
    }

    cout << "\nMatrix : \n" << output;

    findSaddlePoint(matrix, rows, cols);

    return 0;
}
```

#### Output
``` bash
Enter the number of rows : 3
Enter the number of columns : 3
Enter the matrix elements : 1 2 3 4 5 6 7 8 9

Matrix : 
1 2 3 
4 5 6 
7 8 9 
Saddle point foundat position (2, 0) with value 7.
```

<hr>

## Question 2
In an inputted sentence words are separated by a random number of blanks. Write a program to convert the sentence in perfect form where each word will be separated by a single blank.

#### Code
``` cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string perfectFormSentence(string &input) {
    stringstream ss(input);
    string word, perfect_sentence;
    while (ss >> word) {
        perfect_sentence += word + " ";
    }
    return perfect_sentence;
}

int main() {
    string input_sentence;

    cout << "Enter the sentence: ";
    getline(cin, input_sentence);

    string perfect_sentence = perfectFormSentence(input_sentence);
    cout << "New sentence: " << perfect_sentence << endl;

    return 0;
}
```

#### Output
```
Enter the sentence: This   is a    sentence    with improper       number   of       spaces
New sentence: This is a sentence with improper number of spaces 
```

## Question 3
Write a program that accepts an amount in figures and prints that in words. For example, for an amount of Rs. 426, it should output the string Four hundred twenty six, whereas for Rs.316 it would be Three hundred sixteen.

#### Code
``` cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

string convertToWords(int num) {
    map<int, string> numToWords = {
        {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"},
        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"},
        {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"},
        {18, "Eighteen"}, {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"},
        {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}
    };
    if (num <= 20) {
        return numToWords[num];
    } else if (num < 100) {
        int tens = num / 10 * 10;
        int ones = num % 10;
        return numToWords[tens] + " " + numToWords[ones];
    } else if (num < 1000) {
        int hundreds = num / 100;
        int remainder = num % 100;
        return numToWords[hundreds] + " Hundred " + convertToWords(remainder);
    } else {
        return "Number out of range for conversion";
    }
}

int main() {
    int amount;

    cout << "Enter the amount in figures: Rs. ";
    cin >> amount;

    cout << "Amount in words: " << convertToWords(amount) << endl;

    return 0;
}
```

#### Output
``` sh
Enter the amount in figures: Rs. 426
Amount in words: Four Hundred Twenty Six

Enter the amount in figures: Rs. 316
Amount in words: Three Hundred Sixteen
```

## Question 4
Write a program that uses Quick Sort algorithm to sort and array.

#### Code
``` cpp
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}


int partition(int array[], int low, int high)
{

    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}


int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, -2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "\nUnsorted Array: \n";
    printArray(data, n);

    quickSort(data, 0, n - 1);

    cout << "\nSorted Array: \n";
    printArray(data, n);
}
```

#### Output
``` sh
Unsorted Array: 
8 7 6 1 0 9 -2 

Sorted Array: 
-2 0 1 6 7 8 9 
```

## Question 5
Merge sort divides input array in two halves, calls itself for the two halves and then merges the 
two sorted halves. Merge sort is also a sorting technique based on divide and conquer technique. 
Write a program to sort an array using merge sort technique.

``` cpp
#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nUnsorted Array: \n";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "\nSorted Array: \n";
    printArray(arr, size);
    return 0;
}
```

#### Output
``` sh
Unsorted Array: 
6 5 12 10 9 1 

Sorted Array: 
1 5 6 9 10 12
```

## Question 6
Write a program to search an element in an array using binary search technique.

#### Code
``` cpp
#include <iostream>
#define MAXSIZE 100
using namespace std;

int BinarySearchRecursive(int array[], int num, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == num) {
            return mid;
        } else if (array[mid] < num) {
            return BinarySearchRecursive(array, num, mid + 1, high);
        } else {
            return BinarySearchRecursive(array, num, low, mid - 1);
        }
    }
    return -1;
}

int main() {
    int n, i, x;
    int array[MAXSIZE];

    cout << "Enter the number of elements : "; 
    cin >> n; 

    cout << "Enter the sorted array : ";
    for(i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    cout << "Enter the number that you want to search : ";
    cin >> x;
    
    int result = BinarySearchRecursive(array, x, 0, n - 1);

    if (result == -1) {
        cout << "Element does not exist in the array.\n";
    } else {
        cout << "\nElement was found at the index : " << result << "\n"; 
    }

    return 0;
}
```

#### Output
```
Enter the number of elements: : 6
Enter the sorted array : 1 3 5 7 9 11
Enter the number that you want to search : 7

Element was found at the index: 3
```

## Question 7
Write a program/algorithm to evaluate postfix expression

#### Code
``` cpp
#include <iostream>
#include <stack>
#include <cctype> // For isdigit()

using namespace std;

int perform_operation(int operand1, int operand2, char op) {
    switch(op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                throw invalid_argument("Division by zero!");
            }
            return operand1 / operand2;
        default:
            throw invalid_argument("Invalid operator");
    }
}

int evaluate_postfix(string expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = perform_operation(operand1, operand2, c);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string postfix_expression ;
    cout << "Enter the Expression: ";
    cin >> postfix_expression;
    int result = evaluate_postfix(postfix_expression);
    cout << "Result: " << result << endl;
    return 0;
}
```

#### Output
``` sh
Enter the Expression: 52+
Result: 7
```

## Question 8
Write a C program to find sum of the two diagonals of a square matrix (n x n).

#### Code
``` cpp
#include <iostream>
using namespace std;

#define MAX_SIZE 10


void findDiagonalSum(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    
    for (int i = 0; i < size; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    
    for (int i = 0; i < size; i++) {
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    
    cout << "Sum of Primary Diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of Secondary Diagonal: " << secondaryDiagonalSum << endl;
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    
    findDiagonalSum(matrix, size);

    return 0;
}
```

#### Output
``` sh
Enter the size of the square matrix: 3
Enter the elements of the matrix:
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (1, 3): 3

Enter element at position (2, 1): 4
Enter element at position (2, 2): 5
Enter element at position (2, 3): 6

Enter element at position (3, 1): 7
Enter element at position (3, 2): 8
Enter element at position (3, 3): 9

Sum of Primary Diagonal: 15
Sum of Secondary Diagonal: 15
```
