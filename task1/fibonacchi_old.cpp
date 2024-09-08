#include<iostream>
using namespace std;

int Fibonacchi(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int k = (Fibonacchi(n-2) + Fibonacchi(n-1));
    return k;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int a = Fibonacchi(i);
        cout << a << " ";
    }
    
}