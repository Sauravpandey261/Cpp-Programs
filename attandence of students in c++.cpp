#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 50;
const int MAX_DAYS = 30;

class Student {
public:
    string name;
    bool attendance[MAX_DAYS];

    Student(string n) {
        name = n;
        for (int i = 0; i < MAX_DAYS; i++) {
            attendance[i] = false;
        }
    }
};

class Course {
public:
    Student students[MAX_STUDENTS];
    int numStudents;
    int numDays;
    int n;

    Course(int n){
        numStudents = n;
        numDays = 0;
    }

    void addStudent(string name) {
        if (numStudents >= MAX_STUDENTS) {
            cout << "Maximum number of students reached." << endl;
            return;
        }
        students[numStudents] = Student(name);
        numStudents++;
    }

    void addAttendance() {
        if (numDays >= MAX_DAYS) {
            cout << "Maximum number of days reached." << endl;
            return;
        }
        cout << "Enter attendance for day " << numDays + 1 << endl;
        for (int i = 0; i < numStudents; i++) {
            cout << "Is " << students[i].name << " present? (y/n): ";
            char response;
            cin >> response;
            students[i].attendance[numDays] = (response == 'y' || response == 'Y');
        }
        numDays++;
    }

    void printReport() {
        cout << "Attendance Report" << endl;
        for (int i = 0; i < numStudents; i++) {
            int numPresent = 0;
            for (int j = 0; j < numDays; j++) {
                if (students[i].attendance[j]) {
                    numPresent++;
                }
            }
            double percentage = 100.0 * numPresent / numDays;
            cout << students[i].name << ": " << numPresent << "/" << numDays << " (" << percentage << "%)" << endl;
        }
    }
};

int main() {
    Course course(0);
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Add attendance" << endl;
        cout << "3. Print report" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                {
                    string name;
                    cout << "Enter student name: ";
                    cin >> name;
                    course.addStudent(name);
                    break;
                }
            case 2:
                course.addAttendance();
                break;
            case 3:
                course.printReport();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);
    return 0;
}

