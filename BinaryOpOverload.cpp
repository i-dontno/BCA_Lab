#include <iostream>
#include <string>

class MyString {
public:
    std::string value;

    MyString(const std::string& str) {
        value=str;
    } 

    MyString operator+(const MyString& other) {
        return MyString(value + other.value);
    }
};

int main() {
    MyString first("Hello, ");
    MyString second("world!");

    MyString result = first + second; // This uses the overloaded + operator

    std::cout << "Concatenated string: " << result.value << std::endl;

    return 0;
}
