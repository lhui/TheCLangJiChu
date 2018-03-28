#include<stdio.h>
int main()
{
	double nc;
	for(nc=0;getchar()!='\n';++nc) //此处为电脑输入，因此换位'\n',若为acm 请注意换成EOF 
	{
	}
	printf("%.0f\n",nc); 
	return 0;
 } 
