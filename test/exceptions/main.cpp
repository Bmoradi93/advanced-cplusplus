#include <iostream>
#include <stdexcept>

void testFunction(int value) {
    if (value < 0) {
        throw std::invalid_argument("Negative value provided");
    }
    // Further processing
}

int main() {
    try {
        testFunction(-1);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
