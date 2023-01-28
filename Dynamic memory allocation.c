#include<stdio.h>
int main()
{
	int n,i;
	int *data;
	printf("Enter the total number of elements:");
	scanf("%d", &n);
	
	// Allocating memory for n element 
	data = (int *) calloc (n, sizeof(int));
	if (data==NULL)
{
	printf("Error!,");
	exit(0);
	}	
	for (i=0 ; i<n;++i)
	{
	printf("Enter number %d:",i+1);
	scanf("%d",data +1);
	}
	for (i=1;i<n;++i)
	{
		if(*data < *(data +1))
		{
			*data = *(data +1);
		}
	}
	printf("Largest number = %d", *data);
	free(data);
	return 0;
}
