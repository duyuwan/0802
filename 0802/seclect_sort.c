//选择排序。

#include<time.h>
#include<stdio.h>


void select_sort(int arr[],int n)
{

	int i, j, k;
	int temp;


	for(i = 0; i < n-1; i++)
	{
	 k = i;
	  for(j = i + 1; j < n; j++)	
	  if(arr[j] > arr[i]) 
	  {
	  k = j;
	  if(k != i)
	  { temp = arr[k];
	  arr[k] = arr[i];
	  arr[i] = temp;}
	   }
  
 	}
}

int main()
{
	//int a[10]= {2, 4, 56, 44, 0, 76, 5, 4, 4, 77};
	srand(time(NULL));
	int i;
	int a[10];
	int n = sizeof(a)/sizeof(a[0]);
	for(i = 0; i < n; i++)
	{
	  a[i] = rand()%100;
	}

	printf("n = %d\n",n);


	for(i = 0; i < n; i++)
	{
	printf("%5d",a[i]);
	}

	printf("\n");

	
	select_sort(a,n);


	
	for(i = 0; i < n; i++)
	{
	printf("%5d",a[i]);
	}

	printf("\n");

	return 0;
}

