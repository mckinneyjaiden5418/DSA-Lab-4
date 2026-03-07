#include <iostream>
#include "include/algebra.h"
#include "include/searching_algorithms.h"

int main() {

    std::cout << "Binary Search Tests" << std::endl;

    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int size = 7;
    int target = 7;

    std::cout << "Iterative Binary Search (target 7): "
              << iterative::binary_search(arr, size, target) << std::endl;

    std::cout << "Recursive Binary Search (target 7): "
              << recursive::binary_search(arr, size, target) << std::endl;


    std::cout << "Algebra Tests" << std::endl;

    int n = 5;

    std::cout << "Iterative sum_n(5): "
              << iterative::sum_n(n) << std::endl;

    std::cout << "Recursive sum_n(5): "
              << recursive::sum_n(n) << std::endl;


    std::cout << "\nIterative factorial(5): "
              << iterative::factorial(n) << std::endl;

    std::cout << "Recursive factorial(5): "
              << recursive::factorial(n) << std::endl;


    std::cout << "\nIterative fibonacci(10): "
              << iterative::fibonacci(10) << std::endl;

    std::cout << "Recursive fibonacci(10): "
              << recursive::fibonacci(10) << std::endl;


    return 0;
}