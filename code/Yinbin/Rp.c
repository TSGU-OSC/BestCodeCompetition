#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
//金字塔数字模型
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
		for (int j = 0; j < floorNum - i; j++)//塔前端部分构成
		{
			printf(" ");
		}

		for (int j = 1; j < i; j++)//塔主体构成
		{
			printf("%d", j);
		}
		for (int j = i; j > 0; j--)//塔外后端部分构成
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}