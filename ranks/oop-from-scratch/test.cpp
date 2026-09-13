#include <bits/stdc++.h>
using namespace std  ; 
 
class Person {
  protected : 
    string name ;
    int age ; 
    string address ; 
  public : 
    Person(string n , int a , string add )  : name(n) , age(a) , address(add) {} 
    void displayPerson() {
      std::cout << "name : " << name <<endl ;
      std::cout << "age : " << age <<endl ;
      std::cout << "address : " << address <<endl ; 
    }
} ;  
class Teacher : public Person {

  protected : 
    string subject ; 
    int tId ;  
  public : 
    Teacher(string n , int a , string add , string sub  , int id ) : Person(n , a , add) , 
    subject(sub) , tId(id) {}  
    void displayTecher() { 
      displayPerson()  ; 
      std::cout << "subject : " << subject <<endl ; 
      std::cout << "teacher ID  : " <<tId <<endl ; 

    }
} ; 
class Student : public Person {

  protected : 
    string course ; 
    int studentId  ; 
    public  : 
    Student(string n , int a , string add , string course_student , int idofstudent ) : Person(n,a,add)  ,
    course(course_student) , studentId(idofstudent) {} 
    void displaystudent() { 
      displayPerson() ;  
      std::cout << "course : " << course <<endl ;
      std::cout << "student ID : " << studentId <<endl ; 
    }

}  ; 
class Admin  : public Person {

  protected : 
    int adminId  ;
    string role   ; 
  public : 
    Admin(string n , int a , string add , int aId, string roleAdmin) : Person(n,a,add) , 
    adminId(aId) , role(roleAdmin) {} 
    void displayAdmin() {
    
      displayPerson() ;
      std::cout << "admin ID : " << adminId <<endl ;
      std::cout << "role : " <<role <<endl ; 
    }
} ; 
class Department  : public Teacher {
  protected : 
    string departement   ; 
  public : 
    Department(string n , int a , string add , string sub  , int id , string dep)  : Teacher( n , a, add, sub , id ) ,   departement(dep) {} 
    void displaydepartment() {
      displayTecher() ; 
      std::cout << "department : "<<departement <<endl ; 
    }
} ; 
class Graduate   : public Student {
  protected : 
    string topic ;  
    public  : 
    Graduate(    string n , int a , string add , string course_student , int idofstudent   , string topics_student) : 
      Student(n  , a , add , course_student , idofstudent  )   ,  topic(topics_student) {} 
    void displayGraduate() { 
      displaystudent() ; 
      std::cout << "topic research : " << topic <<endl ; 

    }
} ; 
int main() {
 
  string name ; 
  int age  ; 
  string address ; 
  string course  ; 
  int id ; 
  string topic ; 
  std::cout << "name : " ; std::cin>>name ; 
  std::cout << "age : " ;std::cin>>age ; 
  std::cout << "address : " ; std::cin>>address ; 
  std::cout << "course : "  ; std::cin>>course ; 
  std::cout << "id : " ; std::cin>> id ; 
  std::cout << "topic : " ; std::cin>>topic ; 
  Graduate g(name , age , address , course , id , topic ) ; 
  g.displayGraduate();
 
  return 0 ; 
}

