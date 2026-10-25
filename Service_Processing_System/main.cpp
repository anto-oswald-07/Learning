#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<fstream>

using namespace std;

class Task{
    private:
        string title;
        string description;
        bool completed;

    public:
        Task(string title, string description) : title(title), description(description), completed(false) {}

        void displayTask() const {
            cout << "Title: " << title << endl;
            cout << "Description: " << description << endl;
            cout << "Completed: " << (completed ? "Yes" : "No") << endl;
        }


        void displayTitle() const {
            cout << "Title: " << title << endl;
        }

        void markCompleted() {
            completed = true;
        }

        string getTitle() const {
            return title;
        }

        string getDescription() const {
            return description;
        }

        bool isCompleted() const {
            return completed;
        }
};

int main() {

    vector<Task> tasks;

    string line = "==============================";
    string text = "TaskForge";

    int padding = (line.length() - text.length()) / 2;
    int total_width = padding + text.length();

    cout << line << endl;
    cout<<setw(total_width) << text << endl;
    cout << line << endl;

    int choice {};
    cout << "1) Add Task \n2) View Tasks \n3) Complete Task \n4) Delete Task \n5) Exit" << endl;
    cin>> choice;
    
    do{
        switch (choice) {
            case 1:{
                cout << "You selected option 1." << endl;

                cin.ignore();

                cout << "Enter Task name: ";
                string taskName;
                getline(cin, taskName);

                cout << "\nEnter Task description: ";
                string taskDescription;
                getline(cin, taskDescription);

                Task newTask(taskName, taskDescription);
                tasks.push_back(newTask);
                cout << "Task added successfully." << endl;

                break;
            }

            case 2:{
                cout << "You selected option 2." << endl;

                if (tasks.empty()) {
                    cout << "No tasks available." << endl;
                    break;
                } else {
                    for (const Task& task : tasks) {
                        task.displayTask();
                        cout << endl;
                    }
                }
                break;
            }

            case 3:{
                cout << "You selected option 3." << endl;

                if (tasks.empty()) {
                    cout << "No tasks available." << endl;
                    break;
                }
                cout << "Select the task to mark as completed: " << endl;

                for (int i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ") ";
                    tasks[i].displayTitle();
                }

                cout << "Enter the task number: ";
                int taskNumber;
                cin >> taskNumber;

                if (taskNumber < 1 || taskNumber > tasks.size()) {
                    cout << "Invalid task number." << endl;
                    break;
                } else {
                    tasks[taskNumber - 1].markCompleted();
                    cout << "Task marked as completed." << endl;
                }

                break;
            }

            case 4:{
                cout << "You selected option 4." << endl;

                if (tasks.empty()) {
                    cout << "No tasks available." << endl;
                    break;
                }
                cout << "Select the task to delete: " << endl;

                for (int i = 0; i < tasks.size(); ++i) {
                    cout << i + 1 << ") ";
                    tasks[i].displayTitle();
                }

                cout << "Enter the task number: ";
                int taskNumber;
                cin >> taskNumber;

                if (taskNumber < 1 || taskNumber > tasks.size()) {
                    cout << "Invalid task number." << endl;
                    break;
                } else {
                    tasks.erase(tasks.begin() + taskNumber - 1);
                    cout << "Task deleted successfully." << endl;
                }

                break;
            }

            case 5:{
                cout << "Exiting..." << endl;
                return 0;
            }

            default:{
                cout << "Invalid choice. Please select a valid option." << endl;
            }

        }
    cout << "1) Add Task \n2) View Tasks \n3) Complete Task \n4) Delete Task \n5) Exit" << endl;
    cin >> choice;
    } while (choice >= 1 && choice <= 5);

    return 0;
}