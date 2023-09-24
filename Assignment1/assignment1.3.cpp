#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double marks;

public:
    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    Student student;
    int choice;
    
    student.initStudent();
    
    do {
        cout << "\nStudent Operations Menu:" << endl;
        cout << "1. Initialize Student" << endl;
        cout << "2. Print Student" << endl;
        cout << "3. Accept Student" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                student.initStudent();
                cout << "Student initialized." << endl;
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            case 3:
                student.acceptStudentFromConsole();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);
    
    return 0;
}
