#include<stdio.h>
int hahaha(int a){
	if(a<=0){
	return 0;
	}
	return a+hahaha(a-1);
}
void main(){
int b;
scanf("%d",&b);
printf("%d",hahaha(b));
}
