#include <stdio.h>

//函数声明区
int GetSum(int* m, int* n);

int main()
{
    //变量区
    int m = -1;
    int n = -1;

    //执行区
    do
    {
        printf("请输入要算哪两个正整数之间的阶乘和：");
        scanf("%d %d", &m, &n);
    } while ((m <= 0) || (n <= 0));//防止非法输入
    
    printf("这两个正整数之间的阶乘和为：%d。", GetSum(&m, &n));
}

//函数定义区
int GetSum(int* m, int* n)//第一种实现方式
{
    //变量声明区
    int min = 0;
    int max = 0;
    int sum = 0;

    //变量初始化
    max = (*m > *n ? *m : *n);
    min = *m ^ *n ^ max;

    //执行区
    for (int i = max; i >= 1; i--)
    {
        if(i >= min)
        {
            sum += 1;
        }
        sum *= i;
    }

    return sum;
}

/*第二种实现方式

int GetSum(int* m, int* n)
{
    //变量声明区
    int min = 0;
    int max = 0;
    int sum = 0;

    //变量初始化
    max = (*m > *n ? *m : *n);
    min = *m ^ *n ^ max;

    //执行区
    for (int i = max; i >= min; i--)
    {
        sum += 1;
        sum *= i;
    }

    for (int i = min - 1; i > 1; i--)
    {
        sum *= i;
    }

    return sum;
}

*/