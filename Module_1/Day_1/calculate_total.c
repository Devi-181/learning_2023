#include<stdio.h>
#include<string.h>

int main()
{
  int roll,physics,maths,chemistry;
  float res,res1;
  char name[15];

  printf("Enter the roll:");
  scanf("%d",&roll);
  printf("Enter the name:");
  scanf("%s",&name); 
  printf("Enter the physics marks:");
  scanf("%d",&physics);
  printf("Enter the maths marks:");
  scanf("%d",&maths);
  printf("Enter the chemistry marks:");
  scanf("%d",&chemistry);
  res=(physics+chemistry+maths);
  res1=(res/300)*100;
  printf("total and percentage of the student %s is %f and %f respectively",name,res,res1);
}