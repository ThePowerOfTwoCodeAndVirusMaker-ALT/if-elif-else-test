#include <iostream>

int main() {
    int num = 0;
    if (num > 0) {
        std::cout << "Positive" << std::endl;
    }
    else if (num == 0) {
        std::cout << "Zero" << std::endl;
    }
    else {
        std::cout << "Negative" << std::endl;
    }
    return 0;
}

