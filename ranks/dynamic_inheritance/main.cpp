#include <iostream>
using namespace std;
class Person {
protected:
   string name;
public:
   Person(string n) : name(n) {}
   void display() { cout << "Name: " << name << endl; }
};
class Employee : public Person {
protected:
   int empId;
public:
   Employee(string n, int id) : Person(n), empId(id) {}
   void showEmployee() { display(); cout << "Employee ID: " << empId << endl; }
};
class Student : public Person {
protected:
   int stuId;
public:
   Student(string n, int id) : Person(n), stuId(id) {}
   void showStudent() { display(); cout << "Student ID: " << stuId << endl; }
};
class Intern : public Employee, public Student {
public:
   Intern(string n, int eid, int sid) : Employee(n, eid), Student(n, sid) {}
   void showIntern() {
       cout << "Intern Details:\n";
       showEmployee();
       showStudent();
   }
};
int main() {
   Intern i("Riya", 101, 202);
   i.showIntern();
   return 0;
}
