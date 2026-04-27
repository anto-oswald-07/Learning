#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    fstream filename("student_info.txt", ios::app);
    cout<<"1 -> Add Student"<<endl;
    cout<<"2 -> View Students"<<endl;
    cout<<"3 -> Save & Exit"<<endl;
    int choice;
    return 0;
}