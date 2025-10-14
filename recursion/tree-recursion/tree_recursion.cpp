#include <iostream>

void fun(int n) {
    if (n > 0) {
        std::cout << n << std::endl;
        fun(n - 1);
        fun(n - 1);
    }
}

int main() {
    std::cout << "Tree Recursion Result:\n";
    fun(3);
    return 0;
}