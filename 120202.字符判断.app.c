#include<stdio.h>
void main(){
char n;
printf("你正在点击的方向键\n");
scanf("%c",&n);
switch(n)
{
	case 'w':printf("你在点击上键\n");break;
	case 'a':printf("你在点击左键\n");break;
	case 's':printf("你在点击下键\n");break;
	case 'd':printf("你在点击右键\n");break;
	default:printf("输入错误\n");
}
}
