#include<stdio.h>
void main()
{
int num,rev=0,b;
printf("enter the number");
scanf("%d",&num);
while(num>0)
	{
	b=num%10;
	rev=rev*10+b;
	num=num/10;
	}
printf("%d",rev);
}
