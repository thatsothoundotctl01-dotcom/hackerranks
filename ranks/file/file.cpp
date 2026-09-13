#include "main.h"
#include <iostream>
  
using namespace std ; 
void Solution::cal() {
  std::cout << "the ans is : " << dimensions[0] * dimensions[1] << endl;
}

void show() {
    std::cout << "Hello world\n";
}

int main() {
    show();  
    Solution  s ; 
    std::cout << "Enter width and height: ";
    std::cin >> s.dimensions[0] >> s.dimensions[1];
    s.cal();

    return 0;
}
