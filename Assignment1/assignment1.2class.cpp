#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void initDate() {
        day = 0;
        month = 0;
        year = 0;
    }

    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day (1-31): ";
        cin >> day;
        
        cout << "Enter month (1-12): ";
        cin >> month;
        
        cout << "Enter year (e.g., 2023): ";
        cin >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }
};

int main() {
    Date myDate;
    int choice;
    
    myDate.initDate();
    
    do {
        cout << "\nDate Operations Menu:" << endl;
        cout << "1. Initialize Date" << endl;
        cout << "2. Print Date" << endl;
        cout << "3. Accept Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                myDate.initDate();
                cout << "Date initialized." << endl;
                break;
            case 2:
                myDate.printDateOnConsole();
                break;
            case 3:
                myDate.acceptDateFromConsole();
                break;
            case 4:
                if (myDate.isLeapYear()) {
                    cout << "Leap Year!" << endl;
                } else {
                    cout << "Not a Leap Year!" << endl;
                }
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);
    
    return 0;
}
