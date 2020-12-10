#include<stdio.h>
#include<string.h>
void main(){
	int i=54;
	int a;
	char l1[]="芝麻开门";
	char l2[]="芝麻开门";
	printf("请先输入闯关密码\n");
	scanf("%s",&l2);
	if(strcmp(l1,l2)==0){
		printf("开始游戏吧！\n");
	
	printf("友情提示：输入1-100的数字哦~\n");
	while(scanf("%d",&a))
	if(a==i)
	{printf("恭喜你猜对啦\n");}
	else if(a<i)
	{printf("太小了哦\n");}
	else if(a>i)
	{printf("大了哦\n");}
	}
		else
	{printf("密码错误啊，不可以猜数字哦~\n");
	}

}
