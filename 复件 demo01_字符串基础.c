#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//int * char *
//c��������û���ַ����������͡���������
//ͨ���ַ�������ģ���ַ���
//C����ַ����������β���ַ���
//
void main11()
{
	//�ַ������ʼ��
	//ָ������ �������ĳ���ʣ�ಿ�ֲ���0
	char buf1[100] = {'a', 'b', 'c'};
	//��ָ������
	char buf2[] = {'a', 'b', 'c'};
	char buf3[] = {'a', 'b', 'c','\0'};

	//ͨ���ַ�����ʼ���ַ����� ����׷��\0
	char buf4[] = "abcdefg";

	printf("%s\n", buf4 );

	system("pause");
}

//sizeof
void main12()
{
	//�ַ������ʼ��
	//ָ������ �������ĳ���ʣ�ಿ�ֲ���0
	char buf1[100] = {'a', 'b', 'c'};
	//��ָ������
	char buf2[] = {'a', 'b', 'c'};
	char buf3[] = {'a', 'b', 'c','\0'};

	//ͨ���ַ�����ʼ���ַ����� ����׷��\0
	char buf4[] = "abcd";

	printf("%s\n", buf4 );
	printf("sizeof(buf4): %d\n ", sizeof(buf4)); //ע��sizeof�Ƕ��������ͽ��д�С���� ������\0
	printf("strlen(buf4): %d \n", strlen(buf4));//strlen�����ַ����ĳ��Ȳ�����\0

	system("pause");
}

//��������ķ���
//�±귨��ָ�뷨
void main()
{
	int i = 0;
	char *p = NULL;
	//ͨ���ַ�����ʼ���ַ����� ����׷��\0
	char buf4[] = "abcd";
	
	for (i=0; i<strlen(buf4); i++)
	{
		printf("%c", buf4[i]); //p[]
	}
	
	//[] *�ı��ʵ�����ʲô��
	//*p �����ǳ���Ա�ֹ��ģ���ʾ��ȥ���ü�Ӹ�ֵ
	//���� ֻ�����ǣ�c/c++ ����������������һ��*p�Ĳ���������������
	// buf4[i]======> buf4[0+i] ====>  *(buf4+i)
	//===*(buf4+i)   --> bu4[i];


	printf("\n");

	p = buf4;
	for (i=0; i<strlen(buf4); i++)
	{
		printf("%c", *(p+i)); //*p 
	}

	system("pause");
}