#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string input;
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The text is a palindrome." << endl;
    } else {
        cout << "The text is not a palindrome." << endl;
    }

    return 0;
}
