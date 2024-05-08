#include <iostream>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; ++i) {
        std::cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int terms;
    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    std::cout << "Fibonacci Series: ";
    fibonacci(terms);

    return 0;
}
