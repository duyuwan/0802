#include<stdio.h>
int a[10];
int top;
void push(int x)
{
	a[top] = x;
	top++;
	return;
}


int pop()
{
	top--;
	return a[top];
}


int is_empty( )
{
	if(top == 0)
	return 1;
	else 
	return 0;

}



int main()
{
	int i;

	top = 0;
	for(i = 0; i< 8; i++)
	{
	push(i);
	}
	
	while(!is_empty())
	{
	printf("%d  ",pop());
	}
	printf("\n");

	return 0;
}
