#include<stdio.h>
int main ()
{
	float n , square ,cube;
	printf(" Enter your number");
	scanf("%f",&n);
	square=n*n;
	printf(" Square of a given number is %f\n", square);
	cube = n*n*n;
	printf("Cube of a given number is %f\n",cube);
}
