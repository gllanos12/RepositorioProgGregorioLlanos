#include <iostream>
#include <cmath>

int main ()
{
  float a; //Float sin inicializar
  bool b = false; //Bool en False
  double c; //Double
  int size_of_double = sizeof(double); //Bytes que ocupa
  float d = 1.0e40; //Float inicializada
  

  std::cout << "a = " << a << "\n";
  std::cout << "b = " << b << "\n";
  std::cout << "c = " << &c << "\n";
  std::cout << "size_of_double = " << size_of_double << "\n";
  std::cout << "d = " << d << "\n";

  //La variable se guarda en 32 bits, por lo cual solo puede guardar hasta 2^32. un numero mayor a eso lo toma como infinitamente grande.

  return 0;

}