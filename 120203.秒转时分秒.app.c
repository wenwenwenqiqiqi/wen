#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
printf("%d时",n/3600);
printf("%d分",n/60);
printf("%d秒",n-n/60*60);
}
