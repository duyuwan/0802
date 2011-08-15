/*2、编写递归程序求1到n的整数之和,int sum(int n)。
仿照上题写出递归终止条件与递推关系，再编写出代码。
递归终止条件:if(n == 0  || n == 1) return n;
		
递推关系:sum(n) = sum(n - 1) + n;
*/


#include<stdio.h>

int sum(int n)
{
	int s;
	if(n == 0  || n == 1) 
	return n;

	s = sum(n - 1) + n;
	return s;
}

int main()
{
	int n;
	printf("please enter n:");
	scanf("%d",&n);

	printf("sum = %d\n",sum(n));

	return 0;
}
