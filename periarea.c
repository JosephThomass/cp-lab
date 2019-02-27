#include<stdio.h>
void main()
{
int breath, length,area,perimeter;
printf("enter the length :");
scanf("%d",&length);
printf("Enter the breath:");
scanf("%d",&breath);
area=length*breath;
perimeter=2*(length+breath);
if(area>perimeter)
 	{
	printf("area is greater than perimeter");

	}
else
	printf("Perimeter is greater than Area");
}
