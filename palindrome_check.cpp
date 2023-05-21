#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string temp = str;
    std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
    return temp == std::string(temp.rbegin(), temp.rend());
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome" << std::endl;
    } else {
        std::cout << "The string is not a palindrome" << std::endl;
    }
    return 0;
}
