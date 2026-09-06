


#include <bits/stdc++.h>
using namespace std ; 

class Engine {

  public  : 
  Engine() {
    std::cout << "Engine create " <<endl ; 

  } 
  ~Engine() {
    std::cout << "Engine des" <<endl ; 
  } 
  void Run() {
    std::cout << "running machine " <<endl ; 
  }
} ; 
class Car {

  private : 
    std::unique_ptr<Engine> engine ; 
  public : 
     Car() : engine(std::make_unique<Engine>()) {}   
     void start() {
      
       engine -> Run() ; 
     }
} ; 
int main() { 


  Car s ; 
  s.start() ; 

  return 0 ; 
}
chage 
