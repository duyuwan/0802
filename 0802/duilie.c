#include<stdio.h>
#define N 32
int q[N];

int head = 0;
int rear = 0;

void creat(int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
	q[i] = i + 1;
	}
	rear = n - 1;

}

void print( )
{
	int i;
	if(!is_empty())
	for(i = head; i <= rear; i++)
	printf("%6d",q[i]);
	else
	printf("NULL!");
	printf("\n");

}


void enq(int x)
{
	q[++rear] = x;
}


void outq()
{
	 head++;
	

}

int is_empty()
{
	return rear == head;
}

int main()
{

	int get;

	print();

	if(!is_empty)
	{
	printf("not empty!\n"); 
	}	

	return 0;
}
