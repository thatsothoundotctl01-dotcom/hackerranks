#include <bits/stdc++.h>
using namespace std ; 

class Parent {
  protected : 
    int protectedvalue ; 

} ;  
class Child  : public Parent {
  public : 
    void setProtectedValue ( int val) { 

      protectedvalue = val  ; 
    } 
    void display_protected () {
      std::cout << this -> protectedvalue <<endl ; 
    }
} ;  
class User {
  protected  : 
    int id_protected  ; 
}; 
class Childs : public User {

  public : 
    void setId(int id ) {
      id_protected = id ; 
    }
    void display_ID() {
      std::cout << "id_protected : " <<this ->id_protected <<endl ;  

  }
} ;  
class Circle {
  public : 
    double radius ; 
    double computeArea() {
      return 3.14 * radius ; 
    }
} ; 
class Ani {

  protected  : 
    string name ; 
    int age  ; 
    void makeSound () {
      std::cout << name <<"Make sound " <<endl ; 
    } 
  public : 
    Ani(string n  , int a )  : name(n) , age(a) {} ; 

};  
class Dog : public Ani {
  public : 
    Dog(string n , int a ) : Ani (n , a ) {
      std::cout << "Name : " <<  this -> name <<endl ; 
      std::cout << "age : " << this -> age <<endl; 
      makeSound() ; 
    }
}; 
int main() {
 
  Child  obj ; 
  obj.setProtectedValue(10) ; 
  obj.display_protected() ;  
  Childs obj1 ; 
  int id_pr  ; 
  std::cin>>id_pr ; 
  obj1.setId(id_pr) ;
  obj1.display_ID() ;  
  Circle cal ; 
  int radius ; 
  std::cout << "radius : "  ; std::cin>>cal.radius ;  
  std::cout << "ans of circle : " <<cal.computeArea() <<endl ; 
  Dog gx("ggg" , 2) ; 
  return 0 ; 
}

