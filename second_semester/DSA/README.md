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

<hr>


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

<hr>


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

<hr>


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

<hr>


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

<hr>


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

<hr>


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

<hr>

## Question 9
Write a program to delete an element from an array of integers where position of the element is the input of the program.

#### Code
``` cpp
#include <iostream>
using namespace std;

// Function to delete an element from an array
void deleteElement(int arr[], int& size, int position) {
    // Check if position is valid
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the left starting from position
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int arr[100]; // Maximum array size
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int position;
    // Input the position to delete element
    cout << "Enter the position of the element to delete (0-indexed): ";
    cin >> position;

    // Delete element at the given position
    deleteElement(arr, size, position);

    // Display the updated array
    cout << "Array after deleting element:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

#### Output
```
Enter the size of the array: 5
Enter the elements of the array:
10
20
30
40
50
Enter the position of the element to delete (0-indexed): 2
Array after deleting element:
10 20 40 50
```

<hr>

## Question 10
Write a program/algorithm to sort an array of integers using insertion sort technique.

#### Code
``` cpp
#include <iostream>
#define MAXSIZE 100
using namespace std;

void insertionSort(int arr[], int size) {
    int key;
    int j = 0;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

}

int main() {
    int n;
    int myarray[MAXSIZE];

    cout << "Number of elements: ";
    cin >> n; 

    cout << "Enter " << n << " integers in any order: ";
    for (int i = 0; i < n; i++) {
        cin >> myarray[i];
    }

    insertionSort(myarray, n);

    cout << endl << "After Sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << myarray[i] << " ";
    }
    cout << endl << endl;
    return 0;
}
```

#### Output
```
Number of elements: 6
Enter 6 integers in any order: 5 2 9 3 7 1

After Sorting: 
1 2 3 5 7 9 
```

<hr>

## Question 11
Write a program/algorithm to represent a Stack using an array.

#### Code
``` cpp
#include<iostream>

#define MAXSIZE 100

using namespace std;

class Stack_Array{
    int stack[MAXSIZE];
    int top; 

    public:
    
    Stack_Array(){
        top = -1;
    }

    void push();
    void pop();
    void traverse();
};

void Stack_Array::push(){
    int item; 
    if(top==MAXSIZE-1){
        cout << "\nThe Stack is full";
        
    } else {
        cout << "\nEnter element to be inserted: ";
        cin >> item;
        stack[++top] = item;    
    }
}

void Stack_Array::pop(){
    int item; 
    if(top==-1){
        cout << "\nThe stack is empty";
    
    } else {
        item = stack[top--];
        cout << "\nThe Deleted item is: " << item;
    }
}

void Stack_Array::traverse(){
    int i; 
    if(top==-1){
        cout << "\nStack Empty";
    } else {
        cout << "\n\nThe elements in the stack are: ";
        for(i=top; i>=0; i--){
            cout << "\n" << stack[i];
        }
    }
}

int main() {
    int choice; 
    char ch; 
    
    // Declaring an object to the class
    Stack_Array ps;

    do{
        // A menu for stack operation
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Traverse";
        cout << "\nEnter your choice: ";
        cin >> choice; 
        switch (choice)
        {
        case 1:         // Calling push function by class object
            ps.push();
            break;
        case 2: 
            ps.pop();
            break;
        case 3:
            ps.traverse();
            break;
        default:
            cout << "\nInvalid Input! Enter correct choice.";
            break;
        }
        cout << "\n\nPress(y/Y) to continue: ";
        cin >> ch;
    }while( ch=='y' || ch=='Y');

    return 0;
}
```

#### Output
```
1. Push
2. Pop
3. Traverse
Enter your choice: 1

Enter element to be inserted: 5

Press(y/Y) to continue: y

1. Push
2. Pop
3. Traverse
Enter your choice: 1

Enter element to be inserted: 8

Press(y/Y) to continue: y

1. Push
2. Pop
3. Traverse
Enter your choice: 1

Enter element to be inserted: 3

Press(y/Y) to continue: y

1. Push
2. Pop
3. Traverse
Enter your choice: 3


The elements in the stack are: 
3
8
5

Press(y/Y) to continue: y

1. Push
2. Pop
3. Traverse
Enter your choice: 2

The Deleted item is: 3

Press(y/Y) to continue: n
```

<hr>

## Question 12
Write down the following functions/algorithm for a linear linked list and double linked list.
a) Insert a node at the beginning of the list
b) Delete a node at the end of the list
c) Append a node at the end of the list
d) Insert a node at any middle position of the list
e) Delete a node from any middle position of the list
f) Count number of nodes present in the list and find the sum of all nodes

### Single LinkedList
#### Code
``` cpp
#include<iostream>

using namespace std;

class Node {
public:
    int info;
    Node* link;
};

class LinkedList {
    Node* start;
public:
    LinkedList() {
        start = NULL;
    }

    void createList(int);
    void addAtBeg(int);
    void addAfter(int, int);
    void deleteNode();
    void display();
    void count();
};

void LinkedList::createList(int data) {
    Node* tmp = new Node();
    tmp->info = data;
    tmp->link = NULL;

    if (start == NULL)
        start = tmp;
    else {
        Node* q = start;
        while (q->link != NULL)
            q = q->link;
        q->link = tmp;
    }
}

void LinkedList::addAtBeg(int data) {
    Node* tmp = new Node();
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    display();
}

void LinkedList::addAfter(int data, int pos) {
    int i;
    Node* tmp;
    Node* q = start;
    for (i = 0; i < pos - 1; i++) {
        q = q->link;
        if (q == NULL) {
            cout << "\nThere are less than " << pos << " elements";
            return;
        }
    }

    tmp = new Node();
    tmp->link = q->link;
    tmp->info = data;
    q->link = tmp;
    display();
}

void LinkedList::deleteNode() {
    int data;
    if (start == NULL) {
        cout << "List is empty";
        return;
    }

    cout << "Enter the element for deletion: ";
    cin >> data;

    if (start->info == data) {
        Node* tmp = start;
        start = start->link;
        delete tmp;
        display();
        return;
    }

    Node* q = start;
    while (q->link->link != NULL) {
        if (q->link->info == data) {
            Node* tmp = q->link;
            q->link = tmp->link;
            delete tmp;
            display();
            return;
        }

        q = q->link;
    }

    if (q->link->info == data) {
        Node* tmp = q->link;
        delete tmp;
        q->link = NULL;
        display();
        return;
    }

    cout << "Element " << data << " not found";
}

void LinkedList::display() {
    if (start == NULL) {
        cout << "Linked List is empty.\n";
        return;
    }
    Node* q = start;
    cout << "List is: ";
    while (q != NULL) {
        cout << q->info << " ";
        q = q->link;
    }
    cout << "\n";
}

void LinkedList::count() {
    int counter = 0;
    int sum = 0;
    Node* current = start;

    while (current != NULL) {
        sum += current->info;
        counter++;
        current = current->link;
    }
    cout << "Number of nodes in the linked list: " << counter << endl;
    cout << "Sum of all nodes: " << sum << endl;
}

int main() {
    int choice, n, m, position, i;
    LinkedList list;
    cout << "\nMain Menu:\n";
    cout << "==========\n";
    cout << "1. Create list\n";
    cout << "2. Add at Beginning\n";
    cout << "3. Add After\n";
    cout << "4. Delete\n";
    cout << "5. Display\n";
    cout << "6. Count\n";
    cout << "7. Quit\n";
    while (1) {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "How many nodes do you want: ";
            cin >> n;
            cout << "Enter the elements: ";
            for (i = 0; i < n; i++) {
                cin >> m;
                list.createList(m);
            }
            break;
        case 2:
            cout << "Enter the element: ";
            cin >> m;
            list.addAtBeg(m);
            break;
        case 3:
            cout << "Enter the element: ";
            cin >> m;
            cout << "Enter the position after which element is inserted: ";
            cin >> position;
            list.addAfter(m, position);
            break;
        case 4:
            list.deleteNode();
            break;
        case 5:
            list.display();
            break;
        case 6:
            list.count();
            break;
        case 7:
            cout << "Exiting Program!\n";
            exit(1);
        default:
            cout << "Invalid Input!\n";
            break;
        }
    }
    return 0;
}
```

#### Output
```
Main Menu:
==========
1. Create list
2. Add at Beginning
3. Add After
4. Delete
5. Display
6. Count
7. Quit

Enter Choice: 1
How many nodes do you want: 4
Enter the elements: 5 8 3 1

Enter Choice: 5
List is: 5 8 3 1 

Enter Choice: 2
Enter the element: 9
List is: 9 5 8 3 1 

Enter Choice: 3
Enter the element: 7
Enter the position after which element is inserted: 2
List is: 9 5 7 8 3 1 

Enter Choice: 4
Enter the element for deletion: 8
List is: 9 5 7 3 1 

Enter Choice: 6
Number of nodes in the linked list: 5
Sum of all nodes:  25

Enter Choice: 7
Exiting Program!
```

### Doubly LinkedList
#### Code
``` cpp
#include<iostream>

using namespace std;

class Node {
public:
    int info;
    Node* prev;
    Node* next;
    Node() {
        prev = NULL;
        next = NULL;
    }
};

class LinkedList {
    Node* start;
public:
    LinkedList() {
        start = NULL;
    }

    void createList(int);
    void addAtBeg(int);
    void addAfter(int, int);
    void deleteNode();
    void display();
    void count();
};

void LinkedList::createList(int data) {
    Node* tmp = new Node();
    tmp->info = data;
    if (start == NULL)
        start = tmp;
    else {
        Node* q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = tmp;
        tmp->prev = q;
    }
}

void LinkedList::addAtBeg(int data) {
    Node* tmp = new Node();
    tmp->info = data;
    tmp->next = start;
    if (start != NULL)
        start->prev = tmp;
    start = tmp;
    display();
}

void LinkedList::addAfter(int data, int pos) {
    Node* tmp = new Node();
    tmp->info = data;
    Node* q = start;
    for (int i = 0; i < pos - 1 && q != NULL; i++)
        q = q->next;
    if (q == NULL) {
        cout << "\nThere are less than " << pos << " elements." << endl;
        return;
    }
    tmp->next = q->next;
    tmp->prev = q;
    if (q->next != NULL)
        q->next->prev = tmp;
    q->next = tmp;
    display();
}

void LinkedList::deleteNode() {
    if (start == NULL) {
        cout << "List is empty";
        return;
    }
    int data;
    cout << "Enter the element for deletion: ";
    cin >> data;
    Node* tmp = start;
    if (tmp->info == data) {
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        delete tmp;
        return;
    }
    while (tmp != NULL && tmp->info != data)
        tmp = tmp->next;
    if (tmp == NULL) {
        cout << "\n\nElement " << data << " not found";
        return;
    }
    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;
    tmp->prev->next = tmp->next;
    delete tmp;
    display();
}

void LinkedList::display() {
    if (start == NULL) {
        cout << "Linked List is empty.";
        return;
    }
    Node* q = start;
    cout << "List is: ";
    while (q != NULL) {
        cout << q->info << " ";
        q = q->next;
    }
    cout << endl;
}

void LinkedList::count() {
    int counter = 0;
    int sum = 0;
    Node* current = start;
    while (current != NULL) {
        sum += current->info;
        counter++;
        current = current->next;
    }
    cout << "Number of nodes in the linked list: " << counter << endl;
    cout << "Sum of all nodes in the linked list: " << sum << endl;
}

int main() {
    int choice, n, m, position, i;
    LinkedList list;
    cout << "\nMain Menu:\n";
    cout << "==========\n";
    cout << "1. Create list\n";
    cout << "2. Add at Beginning\n";
    cout << "3. Add After\n";
    cout << "4. Delete\n";
    cout << "5. Display\n";
    cout << "6. Count\n";
    cout << "7. Quit\n";
    while (1) {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "How many nodes do you want: ";
            cin >> n;
            cout << "Enter the elements: ";
            for (i = 0; i < n; i++) {
                cin >> m;
                list.createList(m);
            }
            break;
        case 2:
            cout << "Enter the element: ";
            cin >> m;
            list.addAtBeg(m);
            break;
        case 3:
            cout << "Enter the element: ";
            cin >> m;
            cout << "Enter the position after which element is inserted: ";
            cin >> position;
            list.addAfter(m, position);
            break;
        case 4:
            list.deleteNode();
            break;
        case 5:
            list.display();
            break;
        case 6:
            list.count();
            break;
        case 7:
            cout << "Exiting Program!\n";
            exit(1);
        default:
            cout << "Invalid Input!\n";
            break;
        }
    }
    return 0;
}

```

#### Output
```
Main Menu:
==========
1. Create list
2. Add at Beginning
3. Add After
4. Delete
5. Display
6. Count
7. Quit

Enter Choice: 1
How many nodes do you want: 4
Enter the elements: 5 8 3 1

Enter Choice: 5
List is: 5 8 3 1 

Enter Choice: 2
Enter the element: 9
List is: 9 5 8 3 1 

Enter Choice: 3
Enter the element: 7
Enter the position after which element is inserted: 2
List is: 9 5 7 8 3 1 

Enter Choice: 4
Enter the element for deletion: 8
List is: 9 5 7 3 1 

Enter Choice: 6
Number of nodes in the linked list: 5
Sum of all nodes in the linked list: 25

Enter Choice: 7
Exiting Program!
```

<hr>

## Question 13
Write a program to create a circular linked list.

#### Code
``` cpp
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() {
        head = nullptr;
    }

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            new_node->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = head;
        }
    }

    void remove(int key) {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;


        while (current->data != key) {
            if (current->next == head) {
                cout << "Key not found in the list" << endl;
                return;
            }
            prev = current;
            current = current->next;
        }


        if (current->next == head && prev == nullptr) {
            head = nullptr;
            delete current;
            cout << "Node with data " << key << " removed successfully" << endl;
            return;
        }


        if (current == head) {
            prev = head;
            while (prev->next != head) {
                prev = prev->next;
            }
            head = head->next;
            prev->next = head;
            delete current;
        } else if (current->next == head) {
            prev->next = head;
            delete current;
        } else {
            prev->next = current->next;
            delete current;
        }

        cout << "Node with data " << key << " removed successfully" << endl;
    }

    void display() {
        if (!head) {
            cout << "Circular Linked List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    int choice, data;

    while (true) {
        cout << "\nCircular Linked List Operations:" << endl;
        cout << "1. Append" << endl;
        cout << "2. Remove" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to append: ";
                cin >> data;
                cll.append(data);
                break;
            case 2:
                cout << "Enter data to remove: ";
                cin >> data;
                cll.remove(data);
                break;
            case 3:
                cout << "Circular Linked List:" << endl;
                cll.display();
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
```

#### Output
```
Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 1
Enter data to append: 5

Circular Linked List:
5 

Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 1
Enter data to append: 8

Circular Linked List:
5 8 

Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 1
Enter data to append: 3

Circular Linked List:
5 8 3 

Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 2
Enter data to remove: 8
Node with data 8 removed successfully

Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 3
Circular Linked List:
5 3 

Circular Linked List Operations:
1. Append
2. Remove
3. Display
4. Exit
Enter your choice: 4
Exiting program...
```

<hr>

## Question 14
Write a program to check whether a given number is triad or not.

#### Code
``` cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isTriad(int number) {
    for (int a = 0; a * a * a <= number; a++) {
        for (int b = a; b * b * b <= number; b++) {
            for (int c = b; c * c * c <= number; c++) {
                if (a * a * a + b * b * b + c * c * c == number) {
                    cout << number << " is a triad number!";
                    return true;
                }
            }
        }
    }
    cout << number << " is not a triad number." << endl;
    return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    isTriad(number);

    return 0;
}
```

#### Output
```
Enter a number: 100
100 is not a triad number.

Enter a number: 1729
1729 is a triad number!
```

<hr>

## Question 15
Write a program to find the sum of the upper/lower triangle elements of a giver matrix.

#### Code
``` cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


int sumUpperTriangle(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}


int sumLowerTriangle(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
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

    
    int sumUpper = sumUpperTriangle(matrix, size);
    cout << "Sum of upper triangle elements: " << sumUpper << endl;

    
    int sumLower = sumLowerTriangle(matrix, size);
    cout << "Sum of lower triangle elements: " << sumLower << endl;

    return 0;
}
```

#### Output
```
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

Sum of upper triangle elements: 45
Sum of lower triangle elements: 45
```

<hr>

## Question 16
Write a program to implement the Queue data structure.

#### Code
``` cpp
#include<iostream>
using namespace std;

int queue[10], n = 10, front = -1, rear = -1; 

void Insert(){
    int val; 
    if(rear == n-1){
        cout << "Queue Overflow\n";
        return;
    } else if (front == -1){
        front = 0;
    }
    cout << "Insert element in Queue: ";
    cin >> val; 
    queue[++rear] = val;
}

void Delete(){
    if(front == -1 ){
        cout << "Queue is empty\n";
        return;
    }else if(front > rear){
        cout << "Queue Underflow\n";
        return;
    }else {
        cout << "Element deleted from queue is: " << queue[front] << endl; 
        front++;
    }
}

void Display(){
    if(front == -1){
        cout << "Queue is empty";
    } else {
        cout << "Queue elements are: ";
        for(int i = front; i<=rear; i++){
            cout << queue[i] << " ";
        }
        cout << "\n";
    }   
}

int main() {
    int ch; 
    cout << "Main Menu:\n===========" << endl;
    cout << "1. Insert elements in Queue.\n";
    cout << "2. Delete elements from Queue.\n";
    cout << "3. Display Queue.\n";
    cout << "4. Exit\n";
    do{
        cout << "Enter your choice: ";
        cin >> ch; 
        switch(ch){
            case 1: 
                Insert();
                break; 
            case 2: 
                Delete();
                break; 
            case 3: 
                Display();
                break; 
            case 4: 
                cout << "Exiting Program!\n";
                break;
            default:
                cout << "Invalid Input!";
                break;
        }
    }
    while(ch!=4);

    return 0;
}
```

#### Output
```
Main Menu:
===========
1. Insert elements in Queue.
2. Delete elements from Queue.
3. Display Queue.
4. Exit
Enter your choice: 1
Insert element in Queue: 5
Enter your choice: 1
Insert element in Queue: 8
Enter your choice: 3
Queue elements are: 5 8 
Enter your choice: 2
Element deleted from queue is: 5
Enter your choice: 3
Queue elements are: 8 
Enter your choice: 2
Element deleted from queue is: 8
Enter your choice: 2
Queue is empty
Enter your choice: 4
Exiting Program!
```

<hr>

<h1 align = "center"> Thank You!!!!</h1>
