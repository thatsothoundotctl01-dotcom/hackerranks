#include <bits/stdc++.h>
using namespace std ; 

class Person {
  protected : 
    string name ; 
    int age ; 
  public : 
    Person(string n, int a) {
      this -> name  = n ; 
      this -> age = a ; 
    }
    void displayIfo() {
      std::cout << left ; 
      std::cout << "name : "  << name <<endl ; 
      std::cout << "age : "  << age <<endl ; 

    }
} ;   
class Course {

  protected : 
    string course ; 
    int code ; 
  public  : 
    Course(string name ,  int codes ) : course(name) , code(codes ){}  
    void display() {
      std::cout << left ; 
      std::cout << "cosrse : " <<course <<endl ; 
      std::cout << "code : " << code <<endl ; 
    }
} ; 
 class Student : public  Person , public Course {

   private : 
     int id_student ; 
     double gpa ; 
   public  : 
     Student(string name , int age  , string course , int code , int id , double g ) : 
       Person (name , age ) , Course(course , code ) , id_student(id)  , gpa(g)  {} 
     void display_student () {
       displayIfo() ; 
       display() ; 
       std::cout << "id student : " << id_student<<endl ; 
       std::cout << "gpa  : " << gpa <<endl ;
     }
} ; 
int main() {


  Student s("Thoun "  , 12 , "lua language " , 11223 , 1212312312 , 3.13) ; 
  s.display_student() ; 
 
  return 0 ; 
}
