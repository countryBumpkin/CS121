#include <iostream>

int main(){
  for(int i = 40; i < 110; i+=10){
    std::cout << i << " ";
    for(int k = 0; k < 10; k++){
      std::cout << static_cast<char>(i+k) << " ";
    }
    std::cout << std::endl;
  }
}
