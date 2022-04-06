#include <stdio.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++)
    {
      fibo = a;
      a = b;
      b = fibo + b;
    }
  return fibo;
}
void output(int n,int fibo)
{
  printf("%d:%d\n",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}


