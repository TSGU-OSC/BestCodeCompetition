#include<stdio.h>
#include<windows.h>
int main(){
        float x,y,a;
    for (y=1.5f;y>-1.5f;y-=0.1f){
        for(x=-1.5;x<1.5f;x+=0.05f){
            a=x*x+y*y-1;
            putchar(a*a*a-x*x*y*y*y<=0.0f?'*':'');

    }
    system("color 04");
    putchar('\n')

}
printf("      祝愿大家: \n");
printf("         学有所成\n");
printf("                \n");
        
}