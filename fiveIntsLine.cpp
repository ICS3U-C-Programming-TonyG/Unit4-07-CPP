// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-05-26

// 1000-2000

#include <iostream>

int main() {
    for (int i = 1000; i <= 2000; i++) {
        std::cout << i << " ";
        if ((i - 999) % 5 == 0) {
            std::cout << std::endl;
        }
    }
}
