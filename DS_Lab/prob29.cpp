#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciNonRecursive(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int term;
    cout << "Enter the term (n): ";
    cin >> term;

    cout << "Fibonacci (Recursive): " << fibonacciRecursive(term) << endl;
    cout << "Fibonacci (Non-Recursive): " << fibonacciNonRecursive(term) << endl;

    return 0;
}
