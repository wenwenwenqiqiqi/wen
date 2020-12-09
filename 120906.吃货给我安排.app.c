#include<stdio.h>
#include<string.h>
void main(){
char l5[]="";
char l1[]="春节";
char l2[]="端午";
char l3[]="中秋";
char l4[]="元宵";
printf("吃货的日程总是被安排的明明白白，请问现在是什么节？\n");
scanf("%s",&l5);
if(strcmp(l1,l5)==0)
{printf("给我安排饺子");}
else if(strcmp(l2,l5)==0);
{printf("给我安排粽子");}
else if(strcmp(l3,l5)==0);
{printf("给我安排月饼");}
else if(strcmp(l4,l5)==0);
{printf("给我安排元宵");}
}
