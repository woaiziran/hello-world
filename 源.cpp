#include<stdio.h>
#include<string.h>
void encrypt(char* p,int num);//����һ�����ܺ���
int main()
{
	char org[] = "China";//����һ����China�����ַ���
	encrypt(org, strlen(org));//����ԭ���ָ�뼰ԭ��ĳ���
	printf("%s\n", org);
	return 0;
}
//����һ�����ܺ���
void encrypt(char* p,int num)
{
	int i;
	for (i = 0; i < num; i++) {//��ԭ����м��ܣ�������λ
		p[i] = p[i] + 4;
	}
}