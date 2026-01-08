#ifndef AUTH_H
#define AUTH_H

#include <string>
#include <vector>
#include <fstream>
#include "user.h"

class Authentication {
private:
    std::string dataFile;
    std::vector<User> users;
    
    void loadUsers();
    void saveUsers();
    bool userExists(const std::string& username);

public:
    Authentication(const std::string& filename = "users.dat");
    
    bool registerUser(const std::string& username, const std::string& password);
    bool loginUser(const std::string& username, const std::string& password);
    void displayAllUsers();
};

#endif
