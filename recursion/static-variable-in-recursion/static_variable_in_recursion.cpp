#include <iostream>

int Fun(int n) {
    static int x = 0; // A static variable is created only once, stays alive throughout the program runs with its latest value
    if (n > 0) {
        x = x + 1;
        return Fun(n - 1) + x;
    }
    return 0;
}

int main() {
    std::cout << "Recursion result with static variable addition in calls: " << Fun(3) << std::endl;

    return 0;
}