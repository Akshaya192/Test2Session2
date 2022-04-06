#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  a[0]=0;
  a[1]=0;
  for(int i=2;i<=n;i++)
  {
    a[i] = i;
  }
}
void ets(int n, int a[n])
{
  int i=0;
   /* Find next non-zero number */
  while(i<sqrt(n)){
   for(;a[i]==0 ;i++);
   for(int k=i+i;k<n;k += i)
     a[i] = 0;
   i++;
  }
}
void display(int n, int a[n])
{
  for(int i=0;i<n-1;i++)
    {
    if(a[i]!=0)
      printf("%d ",a[i]);
    }
  if(a[n-1])
    printf("%d\n",a[n-1]);
  else
    printf("\n");
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}
