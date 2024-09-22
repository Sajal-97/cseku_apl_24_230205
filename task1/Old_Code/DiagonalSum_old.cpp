#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    int DiagonalSum = 0;
    for(int i=0; i<n; i++) {
        DiagonalSum += arr[i][i];
        if(i != (n-i-1)) { DiagonalSum += arr[i][n-i-1]; }
    }

    cout << DiagonalSum;
}
