#include<stdio.h>
int main()
{
	int i,fact=1,number;
	printf("Enter any number:");
	scanf("%d",&number);
	if (number<0)
	{
	printf("Value does not exist");
	}
	else
	{
	for(i=1;i<=number; i++)
	{
		fact = fact*i;
	}   
	printf("factorial is %d",fact );
	}
	return 0;
}
