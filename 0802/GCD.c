/*编写递归函数求两个正整数a和b的最大公约数(GCD，Greatest Common Divisor），使用Euclid算法：

   a、如果a除以b能整除，则最大公约数就是b。
if(a % b == 0)
return r = b;
else
return r = gcd(b, a%b);

   b、否则，最大公约数等于b和a%b的最大公约数
写出递归终止条件:gcd()
递推关系:
*/
#include<stdio.h>

int gcd(int a, int b)
{
	if(a % b == 0)
	return b;
	else 
	return gcd(b, a%b);
}


int main()
{

	int a, b;
	printf("please enter a,b(a>b):");
	scanf("%d %d",&a, &b);
	
	printf("the zuida gongyueshu of a&b is:%d\n",gcd(a,b));


	return 0;
}
