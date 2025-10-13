#include<iostream>
#include "tail_recursion.h"

int main() {
    int n = 5;
    TailRecursion(n);
    return 0;
}

// For compiling both .cpp files together: g++ main.cpp head_recursion.cpp -o main
// Then run ./main