#include<stdio.h>
#include<math.h>
#define r 1%
int main()
{
	double d=300000.0,p=6000.0;//贷款额d；每月还款额
	double m;//还清月数
	m = (log(p) - log(p - d * r)) / log(1 + r);
	printf("需要%.2f还清",m);
	return 0;
}