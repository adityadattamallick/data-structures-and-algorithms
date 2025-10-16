// Factorial of a number

#include <iostream>

int Factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return Factorial(n - 1) * n;
}

int main() {
    int n = 5;
    std::cout << "Factorial of " << n << ": " << Factorial(n) << std::endl;
    return 0;
}