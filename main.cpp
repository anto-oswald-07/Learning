#include <iostream>
#include <string>
#include <limits>
#include "auth.h"

using namespace std;

void displayMenu() {
    cout << "\n========================================" << endl;
    cout << "   CONSOLE LOGIN & REGISTRATION SYSTEM  " << endl;
    cout << "========================================" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Display All Users" << endl;
    cout << "4. Exit" << endl;
    cout << "========================================" << endl;
    cout << "Enter your choice: ";
}

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    Authentication auth;
    int choice;
    string username, password;
    
    cout << "\n***** Welcome to the Login & Registration System *****\n" << endl;
    
    while (true) {
        displayMenu();
        cin >> choice;
        
        if (cin.fail()) {
            clearInputBuffer();
            cout << "\nInvalid input! Please enter a number." << endl;
            continue;
        }
        
        clearInputBuffer();
        
        switch (choice) {
            case 1:
                cout << "\n----- REGISTRATION -----" << endl;
                cout << "Enter username: ";
                getline(cin, username);
                cout << "Enter password: ";
                getline(cin, password);
                auth.registerUser(username, password);
                break;
                
            case 2:
                cout << "\n----- LOGIN -----" << endl;
                cout << "Enter username: ";
                getline(cin, username);
                cout << "Enter password: ";
                getline(cin, password);
                auth.loginUser(username, password);
                break;
                
            case 3:
                auth.displayAllUsers();
                break;
                
            case 4:
                cout << "\nThank you for using the system. Goodbye!" << endl;
                return 0;
                
            default:
                cout << "\nInvalid choice! Please select 1-4." << endl;
        }
    }
    
    return 0;
}
