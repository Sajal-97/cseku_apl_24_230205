#include<iostream>
using namespace std;

int main() {
    // Input dimensions for matrix A
    int rowsA;
    int colsA;
    cout << "Number of rows in matrix A: ";
    cin >> rowsA;
    cout << "Number of columns in matrix A: ";
    cin >> colsA;

    // Declare matrix A
    int matrixA[rowsA][colsA];

    // Input elements for matrix A
    cout << "Enter the elements of matrix A:" << endl;
    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Input dimensions for matrix B
    int rowsB;
    int colsB;
    cout << "Number of rows in matrix B: ";
    cin >> rowsB;
    cout << "Number of columns in matrix B: ";
    cin >> colsB;

    // Declare matrix B
    int matrixB[rowsB][colsB];

    // Input elements for matrix B
    cout << "Enter the elements of matrix B:" << endl;
    for(int i = 0; i < rowsB; i++) {
        for(int j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    /* Check if matrix multiplication is possible
        (columns of A should match rows of B)*/
    if(colsA != rowsB) {
        cout << "Matrices cannot be multiplied!" << endl;
    } else {
        // Declare the resulting matrix
        int resultMatrix[rowsA][colsB];

        // Perform matrix multiplication
        for(int i = 0; i < rowsA; i++) {
            for(int j = 0; j < colsB; j++) {
                int sum = 0;
                for(int k = 0; k < colsA; k++) {
                    sum += matrixA[i][k] * matrixB[k][j];
                }
                resultMatrix[i][j] = sum; // Store the result
            }
        }

        // Output the resulting matrix (matrix A * matrix B)
        cout << "Result of matrix multiplication (A * B):" << endl;
        for(int i = 0; i < rowsA; i++) {
            for(int j = 0; j < colsB; j++) {
                cout << resultMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
