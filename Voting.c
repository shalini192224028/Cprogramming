#include <stdio.h>
int main ()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age<=0)
	printf("\n Invalid Entry");
	if(age>=18)
	printf("\n Your are eligible to vote");
	else
	printf("\n Your are allowed to vote after %d years",(18-age));
}
