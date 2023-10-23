#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//定义角色属性
typedef struct{
	int health;
	int attack;
	int defense;
	int experience;
}Player;

//函数声明
void display_menu(void);
void play_game(void);
void display_options(void);

int main(){
	display_menu();
	return 0;
	
}
void display_menu(){
	int choice;
	printf("\n欢迎来到文字修仙类游戏！\n");
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("3.原神启动\n");
	
	while (true)
	{
		printf("请输入您的选择(1-开始游戏，2-退出游戏,3.原神启动)：");
		scanf("%d",&choice);
		
		switch (choice)
{
case 1:
	play_game();
	break;
case 2:
	printf("感谢您的游玩，再见\n");
	exit(0);
case 3:
	printf("原来你也玩原神\n");
	printf("请按键盘继续\n");
	getchar();
	printf("有趣的签名\n");
	getchar();
	printf("矮子忍者爱睡觉，早柚才不是狸猫\n");
	getchar();
	printf("旗袍黑丝大长腿，璃月椰羊王小美\n");
	getchar();
	printf("梅花瞳孔杯罩A，胡桃小姐不自卑\n");
	getchar();
	printf("起手技能雪纷飞，你却叫我小乌龟\n");
	getchar();
	printf("智慧树上智慧果，智慧草神就是我\n");
	getchar();
	printf("蒙德战力顶梁柱，我叫可莉你记住\n");
	getchar();
	printf("浪花骑士迷人眼，姐记你仇别晒脸\n");
	getchar();
	printf("中分头，背带裤，我是ikun你记住\n");
	getchar();
	printf("搞错了，再来！\n");
	getchar();
	printf("感谢你的使用，亲。\n");
	exit(0);
default:
	printf("无效的选择，请重新输入。\n");
}
	}
	
}

void play_game(){
	Player player;
	int input;
	bool is_alive=100;
	
	player.health=100;
	player.attack=10;
	player.defense=5;
	player.experience=0;
	
	printf("游戏开始！\n");
	while (is_alive)
	{
		display_options();
		scanf("%d",&input);
		
		switch (input)
{
case 1:
	player.health-=10;
	printf("您攻击了敌人，但受到了反击，生命值减少了10点。当前生命值：%d\n",player.health);
	break;
case 2:
	player.health+=5;
	printf("您修炼了一下，生命值增加了5点。当前生命值：%d\n",player.health);
	break;
case 3:
	player.attack+=2;
	printf("您修炼了一下，攻击力增加了2点。当前攻击力：%d\n",player.attack);
	break;
case 4:
	player.defense+=2;
	printf("您修炼了一下，防御力增加了2点。当前防御力：%d\n",player.defense);
	break;
case 5:
	printf("您击败了敌人，获得了10点经验值。当前经验值：%d\n",player.experience);
	break;
case 6:
	printf("游戏结束。您的修仙之路还要继续努力！\n");
	is_alive=false;
	break;
default:
	printf("无效的选项，请重新输入。\n");
}
	}
	
}

void display_options(){
	printf("\n游戏选项\n");
	printf("1.攻击\n");
	printf("2.修炼\n");
	printf("3.提升攻击力\n");
	printf("4.提升防御力\n");
	printf("5.获得经验\n");
	printf("6.结束游戏\n");
}
