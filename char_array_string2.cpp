//�ļ�����char_array_string2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����char�������ַ���������

#include<stdio.h>

int main02()
{
	char a[10] = "hello";
	//a[3] = 0;  //������Ϊhel����Ϊ�ַ�����0��β�����Ժ����Ԫ�ز����
	//�����ַ���������hel�������������������ĳ�Ա����û�б仯
	a[3] = '1';
	a[4] = 'b';
	a[5] = 'a';
	printf("%s\n",a);
	return 0;
}