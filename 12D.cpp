#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string& str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (std::tolower(str[i]) != std::tolower(str[j])) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    std::string str;
    std::cin >> str;

    if (isPalindrome(str)) {
        std::cout << "YA" << std::endl;
    } else {
        std::cout << "BUKAN" << std::endl;
    }

    return 0;
}
