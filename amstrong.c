#include<stdio.h>
void main()
{
int num,arm=0,digit,num1;
printf("enter the number");
scanf("%d",&num);
num=num1;
while(num>0)
	{
	digit=num%10;
	arm=arm+(digit*digit*digit);
	num=num/10;
	}
if(arm==num1)
	{
	printf("the number is amstrong");
	}
else 
{
printf("the number is not amstrong");
}
}
