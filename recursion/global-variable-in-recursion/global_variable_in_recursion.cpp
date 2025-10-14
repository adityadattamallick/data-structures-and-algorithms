#include <iostream>

// A static variable holds its value when a function is called again, but it is only known within that function. A global variable also keeps its value, but it can be used and changed anywhere in the program.
int x = 0; // Here, declared x as a global variable, acts same as a static variable, that is created only once, stays alive throughout the program runs with its latest value

int Fun(int n) {
    if (n > 0) {
        x = x + 1;
        return Fun(n - 1) + x;
    }
    return 0;
}

int main() {
    std::cout << "Recursion result with global variable addition in calls: " << Fun(3) << std::endl;

    return 0;
}