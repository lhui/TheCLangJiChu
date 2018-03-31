#include"stdio.h"
int main()
{
	int i;
	int x;
	int y;
	for(i=0;i<50;i++)
	{
		x=i*i*i;
		y=x*i;
		if(x<=9999&&x>=1000&&y>=100000&&y<=999999)
		{
			
			printf("%d %d %d\n",i,x,y);
			
		}
	}
	
	
	
	
	
	return 0;
	
 } 
