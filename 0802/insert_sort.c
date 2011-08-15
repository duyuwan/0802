#include<stdio.h>
#include<time.h>
#define N 10

void insert_sort(int a[])
{
	int i,j,key;
	
	for(j = 1; j < N; j++)
	{
	key = a[j];
	i = j - 1;
	while(i >= 0 && a[i] > key)
	{a[i+1] = a[i];  i--;}
	
	a[i+1] = key;
	}

}


void print(int a[ ] , int N )
{
	int i;

	for(i = 0; i < N; i++)
	{
	printf("%5d",a[i]);
	}
	printf("\n");


}

int main()
{
	int i;
	int a[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++)
	{
	a[i] = rand()%100;
	}

	print(a,N);

	insert_sort(a);

	print(a, N);

	return 0;
}
