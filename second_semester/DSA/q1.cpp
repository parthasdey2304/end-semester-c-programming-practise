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