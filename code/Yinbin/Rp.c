#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
//金字塔
int main()
{
	unsigned short floorNum = 0;

	do
	{
		printf("请输入一个0~9的整数：");
		scanf("%hd", &floorNum);//前显示部分

	} while (floorNum > 9);
	//金字塔的三部分组成
	for (int i = 1; i < floorNum + 1; i++)
	{
		for (int j = 0; j < floorNum - i; j++)
		{
			printf(" ");
		}

		for (int j = 1; j < i; j++)
		{
			printf("%d", j);
		}
		for (int j = i; j > 0; j--)
		{
			printf("%d", j);//塔心以后组成
		}
		printf("\n");
	}

	return 0;
}