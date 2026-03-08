#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void registerUser() {
    string username, password;

    register_user:
    cout << "Enter Username: ";
    cin >> username;

    ifstream checkFile(username + ".txt");
    if (checkFile.is_open()) {
        checkFile.close();
        cout << "Username already exists" << endl;
        goto register_user;
    } else {
        cout << "Enter Password: ";
        cin >> password;
        ofstream file(username + ".txt");
        file << password << endl;
        file.close();
        cout << "Registered Successfully" << endl;
    }
}

void loginUser() {
    string username_login, password_login;

    cout << "Enter Username to login: ";
    cin >> username_login;

    ifstream filename(username_login + ".txt");
    if (!filename.is_open()) {
        cout << "Login Failed: User not found" << endl;
        return;
    }

    string s;
    getline(filename, s);
    filename.close();

    cout << "Enter Password to login: ";
    cin >> password_login;

    if (password_login.compare(s) == 0)
        cout << "Login Successful" << endl;
    else
        cout << "Username or password is incorrect" << endl;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "1.Register \n2.Login \n3.Exit" << endl;

    int x;
    cin >> x;

    do {
        switch (x) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            default:
                cout << "Exited successfully" << endl;
                return 0;
        }
        cout << "1.Register \n2.Login \n3.Exit" << endl;
        cin >> x;
    } while (x != 3);

    return 0;
}
