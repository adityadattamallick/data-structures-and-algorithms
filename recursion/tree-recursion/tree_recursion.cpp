#include <iostream>

// Here function fun() is "Tree Recursive Function" which has more than one or, multiple recursive calls in it. Time Complexity for this is O(2^n), Space Complexity is O(n) - As at most n number of activation records are created at once.
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