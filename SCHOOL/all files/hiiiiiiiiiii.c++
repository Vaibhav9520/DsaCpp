#include <iostream>
#include <string>

using namespace std;

class Education {
private:
    int qualification;

public:
    Education() {
        qualification = 0;
    }

    void setQualification(int q) {
        qualification = q;
    }

    int getQualification() {
        return qualification;
    }
};

class Staff {
public:
    Staff() {
        cout << "Staff created..." << endl;
    }

    ~Staff() {
        cout << "Staff being deleted..." << endl;
        cout << "Staff being deleted..." << endl;
        cout << "Staff being deleted..." << endl;
    }
};

class Teacher : public Staff {
private:
    string code;
    string name;
    string subject;
    Education edu;

public:
    void setCode(string c) {
        code = c;
    }

    void setName(string n) {
        name = n;
    }

    void setSubject(string s) {
        subject = s;
    }

    void setEducation(int q) {
        edu.setQualification(q);
    }

    void displayInfo() {
        cout << "TEACHER\n\tThe given information:" << endl;
        cout << "\tEmployee code: " << code << endl;
        cout << "\tEmployee name: " << name << endl;
        cout << "\tEducational Qualification: ";
        switch (edu.getQualification()) {
            case 1:
                cout << "Undergraduate" << endl;
                break;
            case 2:
                cout << "Graduate" << endl;
                break;
            case 3:
                cout << "Masters Degree" << endl;
                break;
            case 4:
                cout << "PhD" << endl;
                break;
            default:
                break;
        }
        cout << "\tSubject: " << subject << endl;
    }
};

class Management : public Staff {
private:
    string code;
    string name;
    float grade;
    Education edu;

public:
    void setCode(string c) {
        code = c;
    }

    void setName(string n) {
        name = n;
    }

    void setGrade(float g) {
        grade = g;
    }

    void setEducation(int q) {
        edu.setQualification(q);
    }

    void displayInfo() {
        cout << "\n\tThe given information:" << endl;
        cout << "\tEmployee code: " << code << endl;
        cout << "\tEmployee name: " << name << endl;
        cout << "\tEducational Qualification: ";
        switch (edu.getQualification()) {
            case 1:
                cout << "Undergraduate" << endl;
                break;
            case 2:
                cout << "Graduate" << endl;
                break;
            case 3:
                cout << "Masters Degree" << endl;
                break;
            case 4:
                cout << "PhD" << endl;
                break;
            default:
                break;
        }
        cout << "\tManagement Grade: " << grade << endl;
    }
};

class Admin : public Staff {
private:
    string code;
    string name;
    string department;

public:
    void setCode(string c) {
        code = c;
    }

    void setName(string n) {
        name = n;
    }

    void setDepartment(string d) {
        department = d;
    }

    void displayInfo() {
        cout << "ADMIN\n\tThe given information:" << endl;
        cout << "\tEmployee code: " << code << endl;
        cout << "\tEmployee name: " << name << endl;
        cout << "\tDepartment: " << department << endl;
    }
};

int main() {
    int choice, qualification;
    float grade;

    cin >> choice;

    switch (choice) {
        case 1: {
            Teacher t;

            string code, name, subject;

            cin >> code;

            cin.ignore();
            getline(cin, name);

            while (true) {
                cin >> qualification;

                if (qualification >= 1 && qualification <= 4) {
                    break;
                }

                cout << "Invalid Educational Qualification. Try one more time." << endl;
            }

            cin.ignore();
            getline(cin, subject);

            t.setCode(code);
            t.setName(name);
            t.setEducation(qualification);
            t.setSubject(subject);

            t.displayInfo();

            break;
        }

        case 2: {
            Management m;

            string code, name;

            cin >> code;

            cin.ignore();
            getline(cin, name);

            cout << "MANAGEMENT" << endl; 
            while (true) {
                cin >> qualification;
                

                if (qualification >= 1 && qualification <= 4) {
                    break;
                }
                
               
                cout << "Invalid Educational Qualification. Try one more time." << endl;
            }

            cin >> grade;

            m.setCode(code);
            m.setName(name);
            m.setEducation(qualification);
            m.setGrade(grade);

            m.displayInfo();

            break;
        }

        case 3: {
            Admin a;
            string code, name, department;

            cin >> code;

            cin.ignore();
            getline(cin, name);

            getline(cin, department);

            a.setCode(code);
            a.setName(name);
            a.setDepartment(department);

            a.displayInfo();

            break;
        }

        default: {
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
