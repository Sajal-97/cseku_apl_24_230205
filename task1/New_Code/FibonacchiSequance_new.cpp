#include<iostream>
using namespace std;

//Calculate the nth Fibonacci number
int Fibonacci(int num) {
    /* Base cases:
       Fibonacci(0) = 0 and Fibonacci(1) = 1 */
    if(num == 0 || num == 1) {
        return num;
    }

    /* Recursive case:
       Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2) */
    return (Fibonacci(num - 2) + Fibonacci(num - 1));
}

int main() {
    int count;  // Number of Fibonacci numbers
    cin >> count;

    //Print Fibonacci sequence up to the entered count
    for(int i = 0; i < count; i++) {
        //Function call to get the ith Fibonacci number
        int ithFibonacciNumber = Fibonacci(i);
        
        // Output the ith Fibonacci number
        cout << ithFibonacciNumber << " ";
    }

    return 0;
}
