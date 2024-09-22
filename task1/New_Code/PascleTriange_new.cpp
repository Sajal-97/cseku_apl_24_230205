#include<iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int num) {
    // Base case: factorial of 0 or 1 is 1
    if (num == 0 || num == 1) {
        return 1;
    }

    // Recursive case : n! = n*(n-1)!
    return num * factorial(num - 1);
}

// Calculate the combination (nCr) of two number
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int totalRows; //number of rows of Pascal's Triangle

    cout << "Enter the number of rows: ";
    cin >> totalRows;

    // Print each row of Pascal's Triangle
    for (int row = 0; row < totalRows; row++) {

        // Print spaces to create triangle shape
        for (int space = 0; space < totalRows - row; space++) {
            cout << "  ";
        }

        // Print the elements of current row
        for (int col = 0; col <= row; col++) {
            cout << combination(row, col) << "   ";
        }

        cout << "\n"; //move to the next row
    }
}
