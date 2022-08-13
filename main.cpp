#include <iostream>

int numDig (int n) {

  return n * (n - 3) / 2;
  
}

int main() {

  while (true) {

  int n = 0;

  std::cout << "Number of sides: \n";
  std::cin >> n;

  std::cout << "Number of diagonals " << numDig(n) << "\n"; 
  
  }
    
}
