#include<stdio.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  int i,count=0;
  for(i=1; i<=n; i++)
    {
      if (n%i==0)
        count++;
    }
  return 0;
}
void output(int n, int is_prime)
{
  int count;
  if (count==2)
  printf("%d mumber is prime\n",n);
  else
    printf("%d number is not prime\n",n);
}
int main()
{
  int n,a;
  a=is_prime(n);
  n=input_number();
  output(n,a);
  return 0;
}