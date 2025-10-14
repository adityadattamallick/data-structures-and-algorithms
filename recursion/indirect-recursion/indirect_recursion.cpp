#include <iostream>

// Indirect recursion creates cycles of recursive function calls

void FunB(int n);

void FunA(int n) {
    if (n > 0) {
        std::cout << n << std::endl;
        FunB(n - 1);
    }
}

void FunB(int n) {
    if (n > 1) {
        std::cout << n << std::endl;
        FunA(n / 2); // Will return an integer division
    }
}

int main() {
    FunA(20);
    return 0;
}