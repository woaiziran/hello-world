#include<stdio.h>
#include<math.h>
#define r 1%
int main()
{
	double d=300000.0,p=6000.0;//�����d��ÿ�»����
	double m;//��������
	m = (log(p) - log(p - d * r)) / log(1 + r);
	printf("��Ҫ%.2f����",m);
	return 0;
}