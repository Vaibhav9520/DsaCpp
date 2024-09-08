#include <iostream>

// Function to swap two numbers and return the swapped values
std::pair<int, int> swapNumbers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return std::make_pair(a, b);
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call the swapNumbers function and get the swapped values
    std::pair<int, int> swapped = swapNumbers(num1, num2);
    num1 = swapped.first;
    num2 = swapped.second;

    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
