#include <iostream>

int a = 8;

int main()
{
  int a =9;
  std::cout << a << "\n";
  std::cout << &a << "\n";
  std::cout << ::a << "\n";
  std::cout << &::a << "\n";

  {
    int a = 10;
    std::cout << a << "\n";
    std::cout << &a << "\n";
  }
  std::cout << a << "\n";
  std::cout << &a << "\n";

  return 0;
}