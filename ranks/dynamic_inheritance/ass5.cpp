#include <bits/stdc++.h>
using namespace std ; 



class Person {
  protected : 
    string name ; 
    int roll ; 
    char  gender ; 
  public : 
    Person(string n , int r , char g ) : name(n) , roll(r) , gender(g) {} 
    void displayperson() {

      std::cout <<  "name  : " <<name <<endl ; 
      std::cout << " roll  :" <<roll <<endl ; 
      std::cout << "gender : " << gender <<endl ; 

    } 

} ;  

class Student : public Person {
  
  protected : 
    double w , h ; 
    public  : 
    Student(string  n , int r , char g , double width , double height )  : Person(n, r ,g )  ,
    w(width) , h(height) {} 
 
    void dipslaystudent() {

      displayperson() ; 
      std::cout << "width : " << w <<endl ; 
      std::cout << "height : " << h <<endl ; 
    }
} ; 
int main() {

  Student s("thx " , 1 , 'm' , 11.11,11.23) ; 

  
  return 0 ; 
}
