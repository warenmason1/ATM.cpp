#include <iostream>
#include <string>

const int MAX_ATTEMPTS = 3;

int accountBalance = 1000;
std::string accountNumber;
std::string pin;

void login() {
    int attempts = 0;
    while (attempts < MAX_ATTEMPTS) {
        std::cout << "Enter your account number: ";
        std::cin >> accountNumber;
        std::cout << "Enter your PIN: ";
        std::cin >> pin;

        if (accountNumber == "12345" && pin == "1234") {
            std::cout << "Access granted." << std::endl;
            return;
        } else {
            std::cout << "Invalid account number or PIN. Please try again." << std::endl;
            attempts++;
        }
    }
    std::cout << "Maximum attempts exceeded. Exiting." << std::endl;
    exit(0);
}

void displayMenu() {
    int choice;
    do {
        std::cout << "Please select an option:" << std::endl;
        std::cout << "1. Check balance" << std::endl;
        std::cout << "2. Withdraw funds" << std::endl;
        std::cout << "3. Deposit funds" << std::endl;
