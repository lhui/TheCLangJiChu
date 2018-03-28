/*
*计算华氏温度与摄氏度的转化 
*/
#include"stdio.h"
int main()
{
	int hua,she;
	int lower,upper,step;
	
	lower=0;
	upper=300;
	step=20;
	
	hua=lower;
	while (hua<=upper)
	{
		she=5*(hua-32)/9;
		printf("%d\t%d\n",hua,she);
		hua=hua+step;
	 } 	
	return 0;
 } 
