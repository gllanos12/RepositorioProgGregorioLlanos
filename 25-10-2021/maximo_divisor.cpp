#include <iostream>
#include <cmath>

int main(void)
{
  long int N = 600851475147;
  
  for(long int d = 1; d < N ; d += 1)
  {
    if((N%d == 0) && (d != 1)) 
    //Se excluye 1, porque 1 es divisor de todo número.
    {
      std::cout<< "El mayor divisor de N es:" << N / d << "\n";
      //Al dividir un numero entre su menor divisor arroja el mayor.
      break; 
      //Para detener el ciclo una vez encuentre un divisor
    }
  }

  return 0;
}