#include<stdio.h>
int main ()
{
	int num,rem,arm=0,i,temp;
	printf("enter a  number: ");
	scanf("%d",&num);
	temp=num;
	for (i>0;i=num;i++)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
		num=num/10;
	}
	if ( temp == arm )
	printf("it is an armstrong number:");
	else
	printf("it is an armstrong number:");
	return 0;
	}