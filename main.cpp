#include <iostream>
#include "complex.h"

int main()
{
  Complex_number a;
  Complex_number b;
  std::cout << "Input the first complex number: \n";
  std::cin >> a;
  std::cout << a;
  std::cout << "Input the second complex number: \n";
  std::cin >> b;
  std::cout << b;
  std::cout << "Complex conjugate to the first number: \n";
  a.conj().print(std::cout);
  std::cout << "\n\n\n";
  std::cout << "\n\n\n";
  if (a == b)
      std::cout << "Input numbers are equivalent\n";
  else
      std::cout << "Input numbers are not equivalent\n";
  std::cout << "\n\n\n";
  std::cout << "The sum of input complex numbers:\n";
  (a+b).print(std::cout);
  std::cout << "\n\n\n";
  std::cout << "The difference of input complex numbers:\n";
  (a-b).print(std::cout);
  std::cout << "\n\n\n";
  std::cout << "The multiple of input complex numbers:\n";
  (a*b).print(std::cout);
  std::cout << "\n\n\n";
  std::cout << "The private of input complex numbers:\n";
  (a/b).print(std::cout);
  std::cout << "\n\n\n";
  auto x = 2.4_Complex;
  std::cout << "The value of literal:\n";
  x.print(std::cout);
  return 0;
}
