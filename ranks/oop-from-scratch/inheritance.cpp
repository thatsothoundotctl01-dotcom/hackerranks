#include <bits/stdc++.h>
using namespace std;

class Person {

  protected:
    string name;
    int roll;
    char gen;
  public:
    void read_data() {
      std::cout << left;
      std::cout << "Name :"; std::cin >> name;
      std::cout << "Roll : "; std::cin >> roll;
      std::cout << "Gen  :  "; std::cin >> gen;
    }
    void display_data() {
      std::cout << left;
      std::cout << "Name  : " << this->name << endl;
      std::cout << "Roll  : " << this->roll << endl;
      std::cout << "gen : " << this->gen << endl;
    }
};
//multiplay
//

class User {

  protected:
    string name;
    int age;
  public:
    User(string n, int a) {
      this->name = n;
      this->age = a;
    }
    void display_user() {
      std::cout << left;
      std::cout << "name : " << name << endl;
      std::cout << "age : " << age << endl;
    }
};

class UserA : public User {

  public:
    UserA(string n, int a ) : User(n, a) { 


    }

};

int main() {

  Person p;
  p.read_data();
  p.display_data();

  UserA a("aame", 12);
  a.display_user();

  return 0;
}
