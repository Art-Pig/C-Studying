#include <stdio.h>

#include <iostream>

int main(void) {

    std::cout << "Please input two numbers:" << std::endl;

    int numbers_1 = 0, numbers_2 = 0;

    std::cin >> numbers_1 >> numbers_2;

    std::cout << "The multiply of "<<numbers_1 << " and " 
        <<numbers_2<<" is "<<numbers_1 * numbers_2 << "." << std::endl;

    return 0;

}
