#include<stdio.h>
#include<math.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  for(i=2; i<=sqrt(n); i++)
    {
      if (n%i==0)
           return 0;
    }
  return 1;
}
void output(int n, int is_prime)
{
  if(is prime)
  printf("%d is a prime number\n",n);
  else
  printf("%d is not a prime number\n",n);
}
int main()
{
  int n,a;
  n=is_prime(n);
  a=input_number();
  output(n,a);
  return 0;
}