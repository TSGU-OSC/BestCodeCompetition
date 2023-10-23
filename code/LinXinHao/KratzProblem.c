#include <stdio.h>

//函数声明区
long long int Calc(long long int* num);

int main()
{
    //变量区
    long long int num = 0;
    long long int ret = 0;

    //执行区
    do
    {
        printf("请输入一个正整数：");
        scanf("%lld", &num);
    } while (num <= 0);//防止非法输入

    ret = Calc(&num);
    printf("经过了%lld次运算，结果为：%lld。", ret, num);

    // if (Calc(&num, &ret), ret == -1)//假如会形成死循环
    // {
    //     printf("该正整数运行时可能形成了死循环！\n");
    // }
    // else
    // {
    //     printf("经过了%lld次运算，结果为：%lld。", ret, num)
    // }
    
}

long long int Calc(long long int* pnum)//假如不会形成死循环
{
    if(*pnum % 2 == 0)
    {
        *pnum /= 2;
        return Calc(pnum) + 1;
    }

    if(*pnum == 1)
    {
        return 0;
    }

    {
        *pnum *= 3;
        *pnum += 1;
        return Calc(pnum) + 1;
    }
}

// void Calc(long long int* pnum, long long int* pres)//假如会形成死循环
// {
//     if(*pnum % 2 = 0)
//     {
//         *pnum /= 2;
//         *pres += 1;
//         return Calc(pnum, pres);
//     }

//     if(*pnum == 1)
//     {
//         return 0;
//     }
     
//     if(*pres == 2147483647)
//     {
//         *pres = -1;
//         return 0;
//     }

//     {
//         *pnum *= 3;
//         *pnum += 1;
//         return Calc(pnum);
//     }
// }