#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//ָ�����������ָ����ڴ�ռ��������������ͬ�ĸ������������
//��const �Ƿ���*����߻����ұ� ��const������ָ�����������������ָ����ڴ�ձ���

int getStr(const char *p1)
{
	//p1[0] = 'a';
	p1 = 0x1;
	p1 = 0x2;
	
	return 0;
}

int getStr2( char * const p1)
{
	
	//p1 = 0x1;
	//p1 = 0x2;

	p1[0] = 'a';

	return 0;
}

int getStr3(const char * const p1)
{

	//p1 = 0x1;
	//p1 = 0x2;

	//p1[0] = 'a';

	return 0;
}
int main()
{
	const int a;  //const���� a b������ͬ
	int const b; 

	const char *c; //const����c��ִ�е��ڴ�ռ䣬c��ֵ���ڴ�ռ䲻�ܱ��޸�
	char * const d; //d��һ������ָ�룻
	const char  * const e ;

	{
		char *p1 = "abcde";
		getStr(p1);
	}

	{
		int a[10]; //a��һ��ָ��===��a����ָ��===��Ϊʲôc++
		int *p = a;
		p ++;

		a ++;
	}
	

	return 0;
}


