#include <stdio.h>

int main()
{
	printf(
	"请输入身高，英尺，英寸");
	


	double foot;//定义输入 
    double inch;//...... 
	
	scanf("%lf %lf",&foot, &inch);//接收输入 
	printf("身高是%f米.\n",
	((foot+ inch / 12) * 0.3048));//计算打印 
	return 0;


















}
