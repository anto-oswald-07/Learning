#include "user.h"

User::User() : username(""), password("") {}

User::User(const std::string& username, const std::string& password) 
    : username(username), password(password) {}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

void User::setUsername(const std::string& username) {
    this->username = username;
}

void User::setPassword(const std::string& password) {
    this->password = password;
}
