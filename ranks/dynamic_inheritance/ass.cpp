#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Standard Inheritance (No virtual)
class Student : public Person {
protected:
    int studentId;
    double gpa;
public:
    Student(string n, int a, int id, double g) 
        : Person(n, a), studentId(id), gpa(g) {}

    void displayStudent() {
        cout << "Student ID: " << studentId << "\nGPA: " << gpa << endl;
    }
};

// Standard Inheritance (No virtual)
class Teacher : public Person {
protected:
    string employeeId;
    double salary;
public:
    Teacher(string n, int a, string empId, double s) 
        : Person(n, a), employeeId(empId), salary(s) {}

    void displayTeacher() {
        cout << "Employee ID: " << employeeId << "\nSalary: $" << salary << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
private:
    string courseAssigned;
public:
    // Person(n, a) CANNOT be called directly here without virtual.
    // Person is initialized twice via Student and Teacher constructors.
    TeachingAssistant(string n, int a, int id, double g, string empId, double s, string course)
        : Student(n, a, id, g), 
          Teacher(n, a, empId, s), 
          courseAssigned(course) {}

    void displayTA() {
        // displayPerson(); // ERROR: Ambiguous call!

        // MUST specify which path to take:
        Student::displayPerson(); 
        
        displayStudent();
        displayTeacher();
        cout << "Assigned Course: " << courseAssigned << endl;
    }
};

int main() {
    TeachingAssistant ta("Alice", 24, 1001, 3.9, "EMP-502", 25000, "CS101");

    ta.displayTA();

    return 0;
}
