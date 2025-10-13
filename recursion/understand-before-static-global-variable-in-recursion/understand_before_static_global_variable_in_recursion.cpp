// Understand the tracing of recursion tree with paper and pen first for this program to understand the use cases of "static" and "global" variables in recursion

#include <iostream>

int fun(int n) {
    if (n > 0) {
        return fun(n - 1) + n;
    }
    return 0;
}

int main() {
    std::cout << "Recursion result: " << fun(3) << std::endl;

    return 0;
}