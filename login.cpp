#include "login.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

login::login(){
    cout<<"Enter Username to login: "<<endl;
    cin>>username_login;
    
    ifstream filename(username_login + ".txt");
        string s;
        getline(filename, s);
    if (!filename.is_open()){
        cout << "Login Failed: User not found" << endl;
        return;
    }
    else{
        cout<<"Enter Password to login: "<<endl;
        cin>>password_login;
        int x = password_login.compare(s);
        if(x==0)
            cout<<"Login Successful"<<endl;
        else
            cout<<"Username or password is incorrect"<<endl;
    }  
}