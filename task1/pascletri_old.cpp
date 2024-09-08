#include<iostream>
using namespace std;

int factorial(int a) {
    if(a==0 or a==1) { return 1; }
    return a * factorial(a-1);
}

int combination(int a, int b) {
    return factorial(a)/(factorial(b)*factorial(a-b));
}

int main() {
    int n;
    cout << "Enter row number: ";
    cin >> n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << "  ";
        }

        for(int j=0; j<=i; j++) {
            cout << combination(i, j) << "   ";
        }

        cout << "\n";
    }
}
