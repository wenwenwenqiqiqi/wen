#include<stdio.h>
void main(){
int a=91;
int row,column;
int array2d[9][10]={
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
};
for(row=0;row<9;row++){
for(column=0;column<10;column++){
printf("%d",array2d[row][column]);
}
printf("\n");
}
for(row=0;row<9;row++){
for(column=0;column<10;column++){
	a--;
array2d[row][column]=a;
		printf("%d ",array2d[row][column]);
}
printf("\n");
}
}
