#include<stdio.h>
int main( )
{
	
	int i;
	int n = 30;
	int f[n];
	f[0] = 1; 
	f[1] = 1;
	for(i = 2; i < n; i++)
	{
	f[i] = f[i - 1] + f[i - 2];
	}
	
	for(i = 0; i < n; i++)
	{
	printf("%7d",f[i]);
	if((i+1)%5 == 0)
	printf("\n");
	}

	printf("\n");
	return 0;

}


