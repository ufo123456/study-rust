#include<stdio.h>
int main()
{
const int a = 35;
int  age = 0;

printf("请输入你的年龄；");
scanf("%d",&age);

printf("你的年龄是%d睡.\n",age);

if (age <= a) {
	printf("年轻时是美好的");
	
	 } else {
	 	printf("年龄决定了你的精神世界，好好珍惜吧。\n");

	 }
}

