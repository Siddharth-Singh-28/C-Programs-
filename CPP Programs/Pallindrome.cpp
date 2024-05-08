#include <iostream>
#include <cstring>

bool isPalindromeNumber(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

bool isPalindromeString(const char* str) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1])
            return false;
    }

    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPalindromeNumber(num))
        std::cout << num << " is a palindrome number." << std::endl;
    else
        std::cout << num << " is not a palindrome number." << std::endl;

    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (isPalindromeString(str))
        std::cout << "\"" << str << "\" is a palindrome string." << std::endl;
    else
        std::cout << "\"" << str << "\" is not a palindrome string." << std::endl;

    return 0;
}
