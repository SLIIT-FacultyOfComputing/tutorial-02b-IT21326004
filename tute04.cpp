/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int n);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int n)
{
  long fac;
  fac = 1;
  for(int x = n; x >= 1; x--)
    {
      fac = fac * x;
    }
  return fac;
}
long nCr(int n, int r)
{
  int fac_n,fac_r,fac_N,nCr;
  fac_n = 1;
  for(int x = n; x >= 1; x--)
    {
      fac_n = fac_n * x;
    }
  fac_r = 1;
  for(int y = r; y >= 1; y--)
    {
      fac_r = fac_r * y;
    }
  fac_N = 1;
  for(int z = (n-r); z >= 1; z--)
    {
      fac_N = fac_N * z;
    }
  
  nCr = fac_n / (fac_r * fac_N);
  return nCr;
}