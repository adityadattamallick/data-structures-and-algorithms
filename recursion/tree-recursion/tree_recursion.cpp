#include <iostream>

// Here function fun() is "Tree Recursive Function" which has more than one or, multiple recursive calls in it. Time Complexity for this is O(2^n), Space Complexity is O(n) - As at most n number of activation records are created at once.
void Fun(int n) {
    if (n > 0) {
        std::cout << n << std::endl;
        Fun(n - 1);
        Fun(n - 1);
    }
}

int main() {
    std::cout << "Tree Recursion Result:\n";
    Fun(3);
    return 0;
}