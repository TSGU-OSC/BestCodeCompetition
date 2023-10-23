#include <stdio.h>
#include <Windows.h> 
int main()
{
	printf ("准备好了吗，请按ENTER键继续运行\n");
	getchar();
	printf("今日之中国，富庶强大，中华民族自信自豪傲立世界！\n");
	getchar();
	printf("“我们生在国旗下，长在春风里~”\n");
	getchar();
	printf("“目光所至皆为华夏，五星闪耀皆为信仰！”\n");
	getchar();	
	printf("如果信念有颜色，那一定是中国红！ ！  ！\n");
	getchar();	
	system("color 04");
	printf("“愿以存心寄华夏，且将岁月赠山河~”\n");
	getchar();	
	printf("“以吾少年意气  许国万里恒昌”\n");	
	getchar();
	printf("“何其有幸  生于华夏  愿山河无恙  愿祖国繁荣昌盛”\n");
	getchar();	    
	double x,y,a;
	for(y=1.5;y>-1.5;y-=0.1214) 
	{
		for(x=-1.5;x<1.5;x+=0.05)
		{
			a=x*x+y*y-1;
			if(a*a*a-x*x*y*y*y<=0)   
			{
				printf("*");
				Sleep(8);       
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	getchar();
	printf("先生您看，山河换了新颜~  曾经的十里长安街，如今繁华如斯。山河无恙，国富民安 \n");	
	getchar();	
	printf("这盛世 皆如您所愿~\n");
	return 0;
	
}

