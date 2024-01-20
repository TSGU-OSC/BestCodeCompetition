#include <stdio.h>
#include <Windows.h>

//函数声明区
void normal();
void extra();

int main()
{
    //变量区
    int num = 0;

    //执行区
    printf("请扣1进入猜数字游戏：");
    scanf("%d", &num);
    Sleep(1000);
    if(num == 1)//合法
    {
        normal();
    }
    else//不合法
    {
        extra();
    }

    Sleep(1000);
    printf("GAME OVER!\n");
    return 0;
}

//函数定义区
void normal()
{
    //变量区
    int input = -2;
    int left = 1;
    int right = 100;

    //执行区
    printf("请在心里想一个1~100的整数并记住它。\n");
    while (left < right)//循环缩小范围
    {
        Sleep(1000);
        printf("你的数字是%d吗？（猜中请扣0，猜大了扣1，猜小了请扣-1）", (left + right) / 2);
        scanf("%d", &input);

        switch (input)
        {
        case 0:
            //猜中了
            printf("猜中了！你的数字是：%d！\n", (left + right) / 2);
            return;
            break;
        case 1:
            //猜大了
            right = (left + right) / 2 - 1;
            break;
        case -1:
            //猜小了
            left = (left + right) / 2 + 1;
            break;
        
        default:
            //非法输入
            printf("非法输入，请重试。\n");
            printf("tip：为什么不试试一开始就非法输入呢？\n");
            break;
        }

        Sleep(1000);
    }

    if(left == right)//只剩一个数字
    {
        printf("我知道了！你猜的数字是%d！\n", left);
    }
    else//没有任何数字了，程序出错或数字中途更换
    {
        printf("程序出错或数字中途更换，请重新启动程序。\n");
    }
    
}

void extra()
{
    //变量区
    int input = -1;

    //执行区
    printf("现在是彩蛋时间！\n");
    Sleep(1000);
    printf("请在心里想一个任意数字并记住ta。\n");
    Sleep(1000);

    {//第一问
        printf("第一问！\n");
        Sleep(1000);
        printf("你的数字是无限不循环小数吗？（猜对请扣1，猜错扣0）");
        scanf("%d", &input);

        if (input == 1)//无限不循环小数
        {
            printf("那你猜的数字是π吗？（猜对请扣1，猜错扣0)");
            scanf("%d",&input);

            if (input == 1)//π
            {
            printf("猜中了！你的数字是：π！\n");
            }
            else
            {
                printf("我猜，你的数字是：e！（不准说我错）\n");
            }
        
        }
        else
        {
            printf("这道题太难了，我不会TAT。\n");
        }
    
    }

    Sleep(1000);

    {//第二问
        printf("第二问！\n");
        Sleep(1000);
        printf("你的数字是虚数吗？（猜对请扣1，猜错扣0）");
        scanf("%d", &input);

        if (input == 1)//虚数
        {
            printf("你猜的数字是i吗？（猜对请扣1，猜错也请扣1111111111)\n");
            Sleep(1000);
            printf("很好！你的数字是：i！\n");
        }
        else
        {
            printf("我不管，你猜的数字就是：i！\n");
        }
    }

    Sleep(3000);

    {//第三问
        printf("第三问！\n");
        Sleep(1000);
        printf("你猜的数字是存在的吗？\n");
        Sleep(3000);
        printf("你猜的没错，你的数字就是：∞！\n");
    }

    Sleep(2000);
    printf("彩蛋题目已完成，重开请输入π的最后一位#$~*!^&#\n");
    Sleep(1000);
}