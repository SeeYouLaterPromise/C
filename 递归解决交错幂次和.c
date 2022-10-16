#include <stdio.h>

double fn(int x,int n)
{
	if(n==1)
		return x;
	else
		return x-x*fn(x,n-1);
}

double Fn(int x,int n)
{
	if(n==1)
		return x;
	else
		return -x-x*Fn(x,n-1);
}

//第一个是偶次幂前系数为负
//第二个是奇次幂 
