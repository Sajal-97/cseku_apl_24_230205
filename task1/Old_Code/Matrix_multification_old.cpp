#include<iostream>
using namespace std;
int main() {
    int r1, c1;
    cout << "Row of matrix A: ";
    cin >> r1;
    cout << "Col of matrix A: ";
    cin >> c1;
    int A[r1][c1];
    cout << "Enter matrix A:" << endl;
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c1; j++) {
            cin >> A[i][j];
        }
    }

    int r2, c2;
    cout << "Row of matrix B: ";
    cin >> r2;
    cout << "Col of matrix B: ";
    cin >> c2;
    int B[r2][c2];
    cout << "Enter matrix B:" << endl;
    for(int i=0; i<r2; i++) {
        for(int j=0; j<c2; j++) {
            cin >> B[i][j];
        }
    }

    if(c1 != r2) {
        cout << "Can not be multipied!!" << endl;
    } else {
        int arr[r1][c2];
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                int ans = 0;
                for(int k=0; k<c1; k++) {
                    ans += A[i][k] * B[k][j];
                }
                arr[i][j] = ans;
            }
        }

        cout << "A*B:" << endl;
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
