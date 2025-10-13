#include<iostream>

#include "head_recursion.h"

void HeadRecursion(int n) {
    if (n > 0) {
        HeadRecursion(n - 1);
        std::cout << n << std::endl;
    }

}