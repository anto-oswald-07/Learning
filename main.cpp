#include <iostream>
#include <string>
#include <limits>
#include "auth.h"

void displayMenu() {
    std::cout << "\n========================================" << std::endl;
    std::cout << "   CONSOLE LOGIN & REGISTRATION SYSTEM  " << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "1. Register" << std::endl;
    std::cout << "2. Login" << std::endl;
    std::cout << "3. Display All Users" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Enter your choice: ";
}

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    Authentication auth;
    int choice;
    std::string username, password;
    
    std::cout << "\n***** Welcome to the Login & Registration System *****\n" << std::endl;
    
    while (true) {
        displayMenu();
        std::cin >> choice;
        
        if (std::cin.fail()) {
            clearInputBuffer();
            std::cout << "\nInvalid input! Please enter a number." << std::endl;
            continue;
        }
        
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                std::cout << "\n----- REGISTRATION -----" << std::endl;
                std::cout << "Enter username: ";
                std::getline(std::cin, username);
                // NOTE: Password is visible during input in this simple implementation
                // For production: Use platform-specific functions to hide password input
                std::cout << "Enter password: ";
                std::getline(std::cin, password);
                auth.registerUser(username, password);
                break;
                
            case 2:
                std::cout << "\n----- LOGIN -----" << std::endl;
                std::cout << "Enter username: ";
                std::getline(std::cin, username);
                // NOTE: Password is visible during input in this simple implementation
                // For production: Use platform-specific functions to hide password input
                std::cout << "Enter password: ";
                std::getline(std::cin, password);
                auth.loginUser(username, password);
                break;
                
            case 3:
                auth.displayAllUsers();
                break;
                
            case 4:
                std::cout << "\nThank you for using the system. Goodbye!" << std::endl;
                return 0;
                
            default:
                std::cout << "\nInvalid choice! Please select 1-4." << std::endl;
        }
    }
    
    return 0;
}
