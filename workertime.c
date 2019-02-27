#include<stdio.h>
void main()
{
int time;
printf("Enter the time of work:");
scanf("%d",&time);
if(2<=time && time<=3)
	{
	printf("The worker is heighly efficient");
	}
if(3<time && time<=4)
	{
	printf("improve speed.");
	}
if(4<time && time<=5)
	{
	printf("Traning required");
	}
if(time>5)
	printf("Worker is terminated");
}
