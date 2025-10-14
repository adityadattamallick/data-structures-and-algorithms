#include <iostream>

// Nested recursion calls uses recursive function as the function parameter(s)

int Fun(int n) {
    if (n > 100) {
        return n - 10;
    } else {
        return Fun(Fun(n + 11));
    }
}

int main() {
    int recursion_result = Fun(200);
    std::cout << recursion_result << std::endl;
    return 0;
}