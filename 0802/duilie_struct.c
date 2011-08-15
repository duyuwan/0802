#include<stdio.h>

#define N 10
struct queue{
int head;
int rear;
int q[N];
}pq;

void enq(int x)
{
pq.rear++;
pq.q[pq.rear] = x;
}


void outq()
{
pq.head++;
}
 
void printq()
{

int i;
if(!is_empty())
{
for(i = pq.head; i <= pq.rear; i++)
{
	printf("%d   ",pq.q[i]);
}
printf("\n");
}

}


void init_q()
{
pq.head = 0;
pq.rear = 0;
}


void creat(n)
{
	int i;
	for(i = 0; i < n; i++)
	{
	pq.q[i] = i+1;
	}
	pq.rear = n-1;

}

int is_empty()
{
return pq.head == pq.rear;
}

int is_full()
{
return pq.rear == N - 1;
}




int main()
{


	creat(7);

	printq();


	enq(9);
	printq();

	outq();
	printq();

	return 0;
}
