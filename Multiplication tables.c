#include<stdio.h>
int main()
{
	int m,n,i;
	printf("Enter m and n value:");
	scanf("%d %d", &m ,&n);
	for (i=1; i<=n;i++)
	{
		printf("%d X %d = %d\n",i,m,i*m);
	}
	return 0;
}
