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

//��һ����ż����ǰϵ��Ϊ��
//�ڶ���������� 
