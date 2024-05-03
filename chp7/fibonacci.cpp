#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    cout << "Enter n for a Fibonacci series: ";
    cin >> num;

    cout << "Fibonacci series up to " << num << ":\n";
    for (int i = 0; i < num; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}