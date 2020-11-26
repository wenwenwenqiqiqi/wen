#include<stdio.h>
void main(){
	int i=54;
	int a;
	printf("友情提示：输入1-100的数字哦~\n");
	while(scanf("%d",&a))
	if(a==i)
	{printf("恭喜你猜对啦\n");}
	else if(a<i)
	{printf("太小了哦\n");}
	else if(a>i)
	{printf("大了哦\n");}

}
