#include <stdio.h>
#include <math.h>

//函数声明区
int IsPrimeNum(long long int num);

int main()
{
    //变量区
    long long int num = 0;//储存用户输入的数字
    long long int point = 2;//标记循环次数，相当于i，j，k
    long long int ret = 0;//存储质数数量

    //执行区
    do
    {
        printf("请输入一个正整数：");
        scanf("%lld", &num);
    } while (num <= 0);//防止非法输入

    while (point <= num)
    {
        if (IsPrimeNum(point))
        {
            if(point != 2)//质数且不是2的情况
            {
                point += 2;
            }
            else//2的情况
            {
                point += 1;
            }

            ret += 1;
        }

        else
        {
            point += 1;
        }
    }

    printf("一共有%lld个质数。\n", ret);
    
}

//函数定义区
int IsPrimeNum(long long int num)
{
    for (int i = 2; i <= sqrt(num); i++)//去除合数
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    {//剩下的情况
        printf("%lld是质数。\n", num);
        return 1;
    }
}