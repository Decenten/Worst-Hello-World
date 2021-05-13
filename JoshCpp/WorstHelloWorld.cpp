#include <iostream>
#include <string>
using namespace std;
 
int main () {
  cout << "Is this the worst Hello World ^_^? \n \n \n";
  string firstName = "   H         e         l         l        o \n \n \n \n";
  string lastName = "         W         o         r         l         d \n";
  string fullName = firstName + " " + lastName;
  cout << fullName;
  
  return 0;
}