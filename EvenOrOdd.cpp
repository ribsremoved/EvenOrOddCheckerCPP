#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int answer;
    std::cin >> answer;

    if (answer % 2 == 0) {
        std::cout << "Your number (" << answer << ") is even" << std::endl;
    } else {
        std::cout << "Your number (" << answer << ") is odd" << std::endl;
    }

    return 0;
}
