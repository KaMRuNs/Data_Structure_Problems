#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorialRecursive(n - 1);
}


int factorialNonRecursive(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial (Recursive): " << factorialRecursive(num) << endl;
    cout << "Factorial (Non-Recursive): " << factorialNonRecursive(num) << endl;

    return 0;
}
