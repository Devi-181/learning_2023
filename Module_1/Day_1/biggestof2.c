#include<stdio.h>
int biggestof2(int,int);
int main()
{
  int a,b,res;
  printf("Enter the a value:");
  scanf("%d",&a);
  printf("Enter the b value:");
  scanf("%d",&b);  
  res=biggestof2(a,b);
  printf("%d is the greater",res);
}
int biggestof2(int a,int b)
{
  if(a>b)
  {
    return a;
  }
  else
  {
    return b;
  }
}