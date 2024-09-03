#include <iostream>

int main() {
    std::cout << "This program will repeatedly prompt you to enter a positive integer." << std::endl;
    std::cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << std::endl;
    std::cout << "To terminate the program, enter a negative or zero integer." << std::endl;

    while (true) {
        int num;
        std::cout << "Enter a positive integer (or negative/zero to quit): ";
        std::cin >> num;

        if (num <= 0) {
            break;
        }

        std::cout << "Divisors of " << num << " in decreasing order:" << std::endl;
        for (int i = num; i >= 1; i--) {
            if (num % i == 0) {
                std::cout << i << std::endl;
            }
        }

        char repeat;
        std::cout << "Do you want to enter another integer? (y/n): ";
        std::cin >> repeat;

        if (repeat != 'y') {
            break;
        }
    }

    return 0;
}
