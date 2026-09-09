#include <iostream> 
using namespace std ; 

class Person {
  protected : 
    string name ; 
  public : 
    Person(const string &name )  : name(name){}
    void display() {std::cout << "name : " << name <<endl ; } 


} ; 
class Employee : public Person {

  protected : 
    int employeeID ; 
  public : 
    Employee(const string &name , int id ) : Person(name) , employeeID(id) {}  
    
    void displayEmplyee() {
 
      display() ; 
      std::cout << "ID  employee :  " << employeeID <<endl ; 
    }
} ; 
class Student : public Person {
  protected : 
    int studentID  ; 
  public : 
    Student(const string &name ,  int id )  : Person (name ) , studentID(id){} 
    void displayStudent() { 
      display() ; 
      std::cout << "Student ID : " <<studentID <<endl ;
    }

} ; 
 
class StudentIntern : public Employee, public Student {

  public : 
    StudentIntern(const string &name , int empId  , int stId )   : Employee(name  , empId ) , Student(name ,stId) {}  

    void displayStudentIntern() {
      displayEmplyee() ; 
      displayStudent() ; 

    }
} ; 
int main(){

  string name  ; 
  int code , id ; 

  std::cout << "name  : " ; std::cin>>name ; 
  std::cout << " empId: "  ; std::cin>>code ; 
  std::cout << "id : " ; std::cin>>id ; 
  StudentIntern tx(name , code , id ) ; 
  tx.displayStudentIntern() ; 
  return 0 ; 
}
