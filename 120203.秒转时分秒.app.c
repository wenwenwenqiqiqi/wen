#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
printf("%.2d:",n/3600);
printf("%.2d:",n%3600/60);
printf("%.2d",n-n/60*60);
}
