#include <iostream>

int main(void){
  char* hello = new char[64];

  hello = "This is a string";

  std::cout << hello << std::endl;

  hello[0] = '0';
}
