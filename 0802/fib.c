#include<stdio.h>

int fib(int n)
{	
	int f;
	if(n == 0 || n == 1)
	return 1;
	
	 f = fib(n - 1) + fib(n - 2);
	return  f;

}


int main()
{
	int n;
	int i;



	printf("enter n:");
	scanf("%d",&n);
	
	int f[n];	
	for(i = 0; i < n; i++)
	{
	f[i] = fib(i);
	}


	for(i = 0; i < n; i++)
	{printf("%7d",f[i]);
	 if((i+1) % 5 == 0)
	 printf("\n");
	}
	


	return 0;
}
