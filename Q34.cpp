#include <iostream>
#include <string>
#include <regex>

bool validateEmail(const std::string &email) {
    // Regular expression to match a valid email address
    std::regex pattern("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");

    // Check if the email matches the pattern
    return std::regex_match(email, pattern);
}

int main() {
    std::string email;
    std::cout << "Enter an email address: ";
    std::cin >> email;

    if (validateEmail(email)) {
        std::cout << "The email address is valid." << std::endl;
    } else {
        std::cout << "Invalid email address. Please enter a valid email address." << std::endl;
    }

    return 0;
}