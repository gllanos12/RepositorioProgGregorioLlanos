/*
f'(x) = lim h-> 0 (f(x+h)-f(x))/h
f'(x, h) = (f(x+h)-f(x))/h + O(h)
*/

#include <cmath>
#include <iostream>

using fptr = double(double);

double fun(double x);
double g(double x);
double forward(double x, double h, fptr f);

int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const double X = std::atof(argv[1]);
    
    for(double h = 1.0e-1; h>= 1.0e-10; h /= 10.0)
    {
      std::cout << h << "\t"
      <<std::fabs(1-forward(X, h, fun) /std::cos(X)) << "\n";
    }
    return 0;
}

double fun(double x)
{
  return std::sin(x);
}
double g(double x)
{
  return x*x;
}
double forward(double x, double h, fptr f)
{
    return (fun(x+h) - fun(x))/h;
}