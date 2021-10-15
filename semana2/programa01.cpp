// Calcular los numeros pares entre 1 y 100

// incluir librerias que vamos a usar
#include <iostream>
#include <cmath>

void print_even(int nmin, int nmax);//declaracion

// main function
int main(void)
{
  const int m=1;
  const int n=100;
  std::cout << "m:" << m << "\n";
  std::cout << "n:" << n << "\n";

  print_even(m, n);

  return 0;
}
void print_even(int nmin, int nmax)
{
  for(int ii=nmin ; ii <= nmax ; ii = ii+1)
  {
    
    if(ii%2==0)
    {
      std::cout << ii << "\n";
    }
  }
  return;
}