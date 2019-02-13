#include<stdio.h>
void main()
{
int num,rev=0,b,num1;
printf("enter the number");
scanf("%d",&num);
num1=num;
while(num>0)
	{
	b=num%10;
	rev=rev*10+b;
	num=num/10;
	}
if (num1==rev)
	{
	printf("the number is palindrome");	
	}
else
{	
printf("the number is not palindrome");
}
}
