#include <bits/stdc++.h>
using namespace std ;  
class Person {

  protected : 
    string name ; 
    int age ; 
  public : 
    Person(string n , int a ) : name(n) , age(a) {} 
    
    void displayPerson() {
      std::cout << "name : " << name <<endl   ; 
      std::cout << "age : " <<age<<endl ;  
    } 

} ; 
class Student : public Person {
  protected : 
    int Id_st ; 
    double  st_gpa ; 


    public : 
    Student(string name , int age , int id , double gpa ) : Person(name, age) , Id_st(id ) , st_gpa(gpa) { }  
    void displayStudent() {
      std::cout << "id of student : " << Id_st <<endl ; 
      std::cout << "gpa : " << st_gpa <<endl ; 
    }
} ;
class Techer : public Person {

  protected : 
    string sub ; 
    
  public :
    Techer(string n , int a ,string subject  ) : Person(n,a) , sub(subject){} 
    void displayTecher() {

      std::cout << "subject " << sub <<endl ; 
    } 

} ; 
class ResearchTopic : public Student  , public Techer {

  protected : 

    string research ;  
    
    
  public  : 
    
    ResearchTopic(string n , int a , int id , double gpa , string subject , string topic ) :  
   
    Student(n,a,id,gpa ) , Techer(n, a,  subject) , research(topic) {}  
    void displayResearchTopic() {

      std::cout <<"Research Topic : " <<  research <<endl ; 

    } 
    void displayAll() { 
      Student::displayPerson() ; 
      displayStudent() ; 
      displayTecher() ; 
      displayResearchTopic() ; 
    }
} ; 
int main () {

  string name  , sub  , topic; 
  int age ,id ; 
  double gpa  ;  
  std::cout << "name : " ; std::cin>>name ; 
  std::cout << "age : " ; std::cin>> age ; 
  std::cout << "id : " ; std::cin>>id ;
  std::cout << " gpa : " ; std::cin>> gpa ; 
  std::cout << "subject : " ; std::cin>>sub ; 
  std::cout << "topic  : " ; std::cin>>topic ; 
  ResearchTopic search(name , age , id , gpa , sub ,topic ) ; 
  search.displayAll() ; 
  return 0  ; 
}
