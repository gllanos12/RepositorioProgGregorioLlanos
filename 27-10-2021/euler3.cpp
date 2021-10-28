#include <iostream>

bool isprime(long long n);
long long largestprimedivisor(long long n);

int main (void)
{
  const long long N = 600851475143;
  std::cout << largestprimedivisor(N) << std::endl;

  return 0;
}
long long largestprimedivisor(long long n)
{
  long long result = n;
  for(long long dp = 2; dp < n ; dp++)
  {
    if((n%dp == 0))
    {
      //std::cout << N/dp << std::endl;
      long long largedivisor = n/dp;
      
      if(isprime(largedivisor) == true)
      {
        std::cout << largedivisor << std::endl;
        break;
      }
      
    }
  }
}

bool isprime(long long n)
{
  bool isprime = true;
  for(long long jj = 2; jj < n; jj++)
  {
    if(n%jj == 0)
    {
      isprime = false;
      break;
    }
  }
  return isprime;
}