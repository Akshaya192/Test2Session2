#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s",a);
}
int string_length(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++);
  return i;
}
int string_ncmp(char *s1,char *s2)
{
  int n;
  for(int i=0; i<n && s1[i]==s2[i] && s1[i] != '\0';i++);
  return s1[i] - s2[i];
}
int string_index(char *s, char *subs)
{
  int l1=string_lenght(s);
  int l2=string_lenght(subs);
  if l1 < l2
      return -1;
  for(int i=0;i<l1-l2;i++)
    if (string_nscmp(s,subs))
      return i;
  return -1;
}
void output(char *string, char *substring, int index)
{
  printf("the index of a substring of a string is : %s",index)
}
int main()
{
  int i;
  input_string(a);
  i=strig_length(s);
  s1=string_ncmp();
  s2=string_ncmp();
  output(string,substring,index);
  return 0;
}
/* Understand and debug the functions and write main */
