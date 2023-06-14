#include<stdio.h>
char grade(int);
int main()
{
  int a,res;
  printf("Enter the score:");
  scanf("%d",&a); 
  res=grade(a);
  printf("Grade of the student is %c",res);
}
char grade(int a)
{
  if(a>=90 && a<=100)
  {
    return 'A';
  }
  else if(a>=75&&a<=89)
  {
    return 'B';
  }
  else if(a>=60&&a<=74)
  {
    return 'C';
  }
  else if(a>=50&&a<=59)
  {
    return 'D';
  }
  else if(a>=0&&a<=49)
  {
    return 'F';
  }
}