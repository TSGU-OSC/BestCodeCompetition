#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
//����������ģ��
int main()
{
	unsigned short floorNum = 0;

	do
	{
		printf("������һ��0~9��������");
		scanf("%hd", &floorNum);//ǰ��ʾ����

	} while (floorNum > 9);
	//�����������������
	for (int i = 1; i < floorNum + 1; i++)
	{
		for (int j = 0; j < floorNum - i; j++)//��ǰ�˲��ֹ���
		{
			printf(" ");
		}

		for (int j = 1; j < i; j++)//�����幹��
		{
			printf("%d", j);
		}
		for (int j = i; j > 0; j--)//�����˲��ֹ���
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}