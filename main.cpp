#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "enter.h"
#include "login.h"

/*5. Login and Registration System
The login And Registration System project in C++ involves mainly the user registration process. User Credentials like usernames and passwords are asked from the user. If the registration of the user is successful then with the given credentials a file will be created of a particular user in the database.

Technologies Required: C++ programming language, User Input/Output Libraries, File Manipulation Libraries, Strings and Structures Libraries and Database Libraries.*/

int main() {
    cout << "Hello, World!" << endl;
    cout<<"1.Register \n2.Login \n3.Exit"<<endl;
    int x;
    cin>>x;
    do {
        switch(x)
        {
            case 1: {
                enter user;
               break;
            }

            case 2: {
                login person;
                break;
            }

            default: {
                cout<<"Exited successfully"<<endl;
                return 0;
            }
        }
        cout<<"1.Register \n2.Login \n3.Exit"<<endl;
        cin>>x;
    } while (x!=3);
    return 0;
}