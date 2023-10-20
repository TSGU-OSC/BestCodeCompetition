/*
*Intelligent_Bath_Garden——simple
*注释代码目前暂不可用，日后将会改进
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//函数声明
void add();
void search();

//定义结构体
typedef struct data
{
    char x;
    char y;
    int status;
    struct data *next;
} Data;

//全局变量
Data *head = NULL;

//menu，main函数
int main()
{  
    int t;
    printf("WELCOME TO Intelligent_Bath_Garden_System\n");
    printf("请选择功能\n");
    printf("1.添加状态\n");
    printf("2.查询状态\n");
    //printf("3.修改状态\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:
        add();
        main();
        break;
    case 2:
        system("CLS");
        search();
        main();
        break;
    }
}

//添加状态函数
void add()
{
    Data *p, *q;
    p = (Data*)malloc(sizeof(Data));

    printf("请输入x:");
    scanf("%s", &p->x);
    printf("请输入y:");
    scanf("%s", &p->y);
    printf("请输入状态：");
    scanf("%d", &p->status);

    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
    printf("添加成功！\n");
}


//查询状态函数
void search()
{
    Data *p = head;
    char x[20];
    char y[20];
    int flag = 0;

    printf("请输入x:");
    scanf("%s", x);
    printf("请输入y:");
    scanf("%s", y);

    while (p != NULL)
    {
        if (/*strcmp(&p->x, x)*/flag == 0)
        {
            printf("状态：%d\n", p->status);
            flag = 1;
            break;
        }
        p = p->next;
    }

    /*if (flag == 0)
    {
        printf("请重新输入数据！\n");
    }*/
    
}