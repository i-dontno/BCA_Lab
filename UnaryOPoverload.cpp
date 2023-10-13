#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Overload the pre-increment operator
    MyNumber& operator++() {
        // Increment the value
        ++value;
        return *this;
    }

    int getValue() {
        return value;
    }
};

int main() {
    MyNumber num(5);

    std::cout << "Original value: " << num.getValue() << std::endl;

    // Use the overloaded pre-increment operator
    ++num;

    std::cout << "After pre-increment: " << num.getValue() << std::endl;

    return 0;
}
