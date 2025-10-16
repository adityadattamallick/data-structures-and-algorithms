#include <iostream>

int Sum(int n) {
    if (n == 0) {
        return 0;
    }

    return Sum(n - 1) + n;
}

int main() {
    int n = 15;
    std::cout << "Sum of 1 + 2 + 3 + ... + " << n << ": " << Sum(n) << std::endl;
    return 0;
}