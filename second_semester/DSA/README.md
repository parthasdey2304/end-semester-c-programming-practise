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