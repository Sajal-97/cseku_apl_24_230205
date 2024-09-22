#include<iostream>
using namespace std;

int main() {
    // Declare the size of the square matrix
    int matrixSize;
    cout << "Enter the size of a square matrix: ";
    cin >> matrixSize;
    
    // Declare a 2D array (matrix)
    int matrix[matrixSize][matrixSize];
    
    // Input the elements of the matrix
    cout << "Enter the elements: " << endl;
    for(int row = 0; row < matrixSize; row++) {
        for(int col = 0; col < matrixSize; col++) {
            cin >> matrix[row][col];
        }
    }

    // Variable to store the sum of diagonal elements
    int diagonalSum = 0;

    // Calculate the sum of the diagonals
    for(int i = 0; i < matrixSize; i++) {
        // Add the primary diagonal element (where row == col)
        diagonalSum += matrix[i][i];

        /* Add the secondary diagonal element (where row + col == n - 1), 
            avoid adding the center element twice for odd size */
        if(i != (matrixSize - i - 1)) {
            diagonalSum += matrix[i][matrixSize - i - 1];
        }
    }

    // Output the total sum of both diagonals
    cout << diagonalSum << endl;
}
