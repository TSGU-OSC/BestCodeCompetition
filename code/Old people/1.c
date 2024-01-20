#include"stdio.h"
int main()
{
    float a,b,c,d;
    printf("请输入性别,man=1,woman=2\n") ;
    scanf("%f",&a);
    if (0<a<1.5)
    {       
        printf("先生，请问你的体重和身高\n");
        scanf("%f,%f",&b,&c); //b是体重，c是身高
        getchar();        
        d=b/c*c;
        if (d<=18.5)
        printf("细狗\n");
        else if (18.5<d<=23.9)
        printf("梁山好汉般的身材\n");
        else if(d>=28)
        printf("兄弟该减肥了\n");
    }
    else
    {
    printf("女士你好，请问你的体重和身高\n");
    scanf("%f,%f",&b,&c);
    d=b/c*c;
    if(d<=18.5)
    printf("你不太需要减肥哦\n");
    else if (18.5<d<=23.9)
    printf ("真是完美的身材，白雪公主都不如你\n");
    else if (d>=28)
    printf ("我的老姐姐你真的很美");
    }
    return 0;
}