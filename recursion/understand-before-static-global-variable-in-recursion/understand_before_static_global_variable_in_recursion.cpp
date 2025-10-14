// Understand the tracing of recursion tree with paper and pen first for this program to understand the use cases of "static" and "global" variables in recursion

#include <iostream>

int Fun(int n) {
    if (n > 0) {
        return Fun(n - 1) + n;
    }
    return 0;
}

int main() {
    std::cout << "Recursion result: " << Fun(3) << std::endl;

    return 0;
}