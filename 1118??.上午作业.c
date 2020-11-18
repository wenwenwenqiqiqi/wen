#include<stdio.h>
void main(){
int l;
scanf("%d",&l);
if(l<=-1)
{printf("你还有花呗没还，无法使用该程序");}
else if(l>=0&&l<=500)
{printf("赤贫");}
else if(l>=501&&l<+1500)
{printf("贫困");}
else if(l>=1501&&l<=3000)
{printf("普通打工人");}
else if(l>=3001&&l<=5000)
{printf("普通清洁工");}
else if(l>=5001&&l<=12000)
{printf("水电工工资");}
else if(l>=12001&&50000)
{printf("脑袋大脖子粗不是老板就是伙夫");}
else if(l>=50001&&l<=200000000)
{printf("程序员");}
}
