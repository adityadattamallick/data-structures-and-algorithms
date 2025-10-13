#include<iostream>

#include "tail_recursion.h"

void TailRecursion(int n) {
    if (n > 0) {
        std::cout << n << std::endl;
        TailRecursion(n - 1);
    }

}