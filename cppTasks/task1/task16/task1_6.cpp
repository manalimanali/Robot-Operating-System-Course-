/*print ascii value*/
#include <iostream>

using namespace std;

int main() {
  char ch;
  
  std::cout << "Enter any character: ";
  std::cin >> ch;
  
  
  
  cout << "The ASCII value of character " << ch << " is " << (int)ch <<std :: endl;
  
  return 0;
}