#include<stdio.h>
#include<string.h>
void encrypt(char* p,int num);//声明一个加密函数
int main()
{
	char org[] = "China";//定义一个“China”的字符串
	encrypt(org, strlen(org));//传入原码的指针及原码的长度
	printf("%s\n", org);
	return 0;
}
//声明一个加密函数
void encrypt(char* p,int num)
{
	int i;
	for (i = 0; i < num; i++) {//对原码进行加密，后移四位
		p[i] = p[i] + 4;
	}
}