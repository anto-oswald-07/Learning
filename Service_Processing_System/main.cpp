#include<iostream>

using namespace std;

class add_service{
    private:
        int id;
        string name;
    
    public:
        add_service(){
            cout<<"Enter service id: ";
            cin>>id;
            cout<<"Enter service name: ";
            cin>>name;
            cout<<"Service added successfully!"<<endl;
        }
};

class process_service{
    private:
        int id;
    public:
        process_service(){
            cout<<"Enter service id to process: ";
            cin>>id;
            cout<<"Service processed successfully!"<<endl;
        }
};

class view_service{
    public:
        view_service(){
            cout<<"Viewing all services..."<<endl;
        }
};

int main() {
    cout << "Hello, World!" << endl;
    int n;
    cout<<"Press 1 to add service"<<endl<<"Press 2 to process a service"<<endl<<"Press 3 to view services"<<endl;
    cin>>n;
    switch (n) {
        case 1:{
            add_service o;
            break;
        }
        case 2:{    
            process_service o;
            break;
        }
        case 3:{
            view_service o;
            break;
        }
        default:
            cout<<"An error occured"<<endl;
            return 0;
    }

    return 0;
}