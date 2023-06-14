#include<stdio.h>
#include<string.h>
int main()
{
    char operator[2];
    int a,b;
    printf("Enter operand1");
    scanf("%d",&a);
    printf("Enter operator");
    scanf("%s",&operator);
    printf("Enter operand2");
    scanf("%d",&b);

    if(operator[0]=='+')
    {
        printf("sum=%d",a+b);
    }
    else if(operator[0]=='-')
    {
        printf("differnce=%d",a-b);
    }
    else if(operator[0]=='*')
    {
        printf("multiplication=%d",a*b);
    }
    else if(operator[0]=='/')
    {
        printf("divison=%f",a/b);
    }
}