#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 10;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    Task tasks[MAX_TASKS];
    int taskCount;

public:
    ToDoList() : taskCount(0) {}

    void addTask(const string & description) {
        if (taskCount < MAX_TASKS) {
            tasks[taskCount].description = description;
            tasks[taskCount].completed = false;
            taskCount++;
            cout << "Task added." << endl;
        } else {
            cout << "Maximum number of tasks reached." << endl;
        }
    }

    void viewTasks() {
        if (taskCount == 0) {
            cout << "No tasks to display." << endl;
        } else {
            cout << "Tasks:" << endl;
            for (int i = 0; i < taskCount; i++) {
                cout << i + 1 << ". " << tasks[i].description << " - " ;
                
                if(tasks[i].completed==true )
                {
                	cout<<"Completed " << endl;
				}
				else
				{
					cout<<"Pending " << endl;
				}
            }
        }
    }

    void markAsCompleted(int taskIndex) {
        if (taskIndex > 0 && taskIndex <= taskCount) {
            tasks[taskIndex - 1].completed = true;
            cout << "Task marked as completed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(int taskIndex) {
        if (taskIndex > 0 && taskIndex <= taskCount) {
            for (int i = taskIndex - 1; i < taskCount - 1; i++) {
                tasks[i] = tasks[i + 1];
            }
            taskCount--;
            cout << "Task removed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
            	string description;
                cout << "Enter task: ";
                cin.ignore(); 
                getline(cin, description);
                todoList.addTask(description);
				break;
			}
                 
            case 2:
            	
                todoList.viewTasks();
                break;
                
            case 3: 
            	{
            		int taskIndex;
                cout << "Enter task index to mark as completed: ";
                cin >> taskIndex;
                todoList.markAsCompleted(taskIndex);
                break;
				}
                
            
            case 4: 
            	{
            		int taskIndex;
                cout << "Enter task index to remove: ";
                cin >> taskIndex;
                todoList.removeTask(taskIndex);
                break;
				}
                
            
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}