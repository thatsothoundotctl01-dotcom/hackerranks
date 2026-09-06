#include <bits/stdc++.h>
using namespace std ; 
class App {
  private : 
    string name ; 
    int age ;  
  public:
    int password ; 
    App(string n  , int a ) : name(n) , age(a) {
      std::cout << "Name : " << name <<endl ; 
      std::cout << "age : " <<age <<endl ; 
    } 
} ; 
// inheritance class 
class So {
 
  public : 
    string name ; 
    int age ;  
    void show() {
      std::cout << "Hell world " <<endl ; 
    }
}; 
class Ans  : public  So {

  public : 
    string ans ; 
    void show_ans() {  
      std::cout << "ans : " << ans <<endl ; 
    }
}  ;   
class Ans1 : public  So {
  public : 
    string ans1 ; 
    void show() {
      std::cout << "ans1 : " <<ans1 <<endl ; 
    }
} ; 
 
// polymophysm 
class Aws { 
  public : 

    void aws(int a , int b)  { 
      std::cout << a+b  <<endl  ; 

  } 
    void aws(double  a , double  b) {
      std::cout << a - b <<endl; 

    }
} ; 
class cont_anw : public Aws {
  public : 
    void show_asw() {
      std::cout << "this is of aws answer " <<endl ;  

    }
} ;
// encapsulation 
//
class User {
  private : 
    int card ; 
    int code ; 
  public : 
    string name ; 
    int age ;  
    // for public 
    void show_user () {

      std::cout << left ; 
      std::cout << "Name : " <<name <<endl ; 
      std::cout << "age : " <<age <<endl ; 

       
    } 
    void setcard(int c ) {
      card  = c ; 
    }
    int getcard( ) {
      return card ; 
    }
    void setcode(int co ) {
      code = co ; 
    }
    int getcode() {
      return code ; 
    }


} ;
int main()  { 
  App user("Thoun" , 18) ; 



  return 0 ; 
}

