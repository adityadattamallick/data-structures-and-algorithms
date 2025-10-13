#include <iostream>

int x = 0; // Here, declared x as a global variable, acts same as a static variable, that is created only once, stays alive throughout the program runs with its latest value

int fun(int n) {
    if (n > 0) {
        x = x + 1;
        return fun(n - 1) + x;
    }
    return 0;
}

int main() {
    std::cout << "Recursion result with global variable addition in calls: " << fun(3) << std::endl;

    return 0;
}