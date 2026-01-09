#include "enter.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

enter::enter() {
    register_user:
    cout << "Enter Username:\n";
    cin >> username;
    
    ifstream filename(username + ".txt");
    if (filename.is_open()){
        cout << "Username already exists" << endl;
        goto register_user;
    }
    else{
        cout << "Enter Password:\n";
        cin >> password;
        ofstream file(username + ".txt");
        file << password << endl;
        file.close();

        cout << "Registered Successfully\n";
    }
}
