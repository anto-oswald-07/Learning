#include "auth.h"
#include <iostream>
#include <algorithm>
#include <sstream>

Authentication::Authentication(const std::string& filename) : dataFile(filename) {
    loadUsers();
}

void Authentication::loadUsers() {
    std::ifstream file(dataFile);
    if (!file.is_open()) {
        return;
    }
    
    std::string line, username, password;
    while (std::getline(file, line)) {
        size_t delimPos = line.find('|');
        if (delimPos != std::string::npos) {
            username = line.substr(0, delimPos);
            password = line.substr(delimPos + 1);
            users.push_back(User(username, password));
        }
    }
    
    file.close();
}

void Authentication::saveUsers() {
    std::ofstream file(dataFile);
    if (!file.is_open()) {
        std::cerr << "Error: Could not save user data!" << std::endl;
        return;
    }
    
    for (const auto& user : users) {
        file << user.getUsername() << "|" << user.getPassword() << std::endl;
    }
    
    file.close();
}

bool Authentication::userExists(const std::string& username) {
    return std::any_of(users.begin(), users.end(),
        [&username](const User& user) {
            return user.getUsername() == username;
        });
}

bool Authentication::registerUser(const std::string& username, const std::string& password) {
    if (username.empty() || password.empty()) {
        std::cout << "Username and password cannot be empty!" << std::endl;
        return false;
    }
    
    if (userExists(username)) {
        std::cout << "Username already exists! Please choose another username." << std::endl;
        return false;
    }
    
    users.push_back(User(username, password));
    saveUsers();
    std::cout << "Registration successful! You can now login." << std::endl;
    return true;
}

bool Authentication::loginUser(const std::string& username, const std::string& password) {
    auto it = std::find_if(users.begin(), users.end(),
        [&username, &password](const User& user) {
            return user.getUsername() == username && user.getPassword() == password;
        });
    
    if (it != users.end()) {
        std::cout << "Login successful! Welcome, " << username << "!" << std::endl;
        return true;
    } else {
        std::cout << "Invalid username or password!" << std::endl;
        return false;
    }
}

void Authentication::displayAllUsers() {
    if (users.empty()) {
        std::cout << "No registered users found." << std::endl;
        return;
    }
    
    std::cout << "\n===== Registered Users =====" << std::endl;
    for (const auto& user : users) {
        std::cout << "Username: " << user.getUsername() << std::endl;
    }
    std::cout << "============================" << std::endl;
}
