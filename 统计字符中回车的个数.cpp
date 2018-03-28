#include<stdio.h>
int main()
{
	int nc;
	char c; 
	for(;c=getchar()!=EOF;)
	{
		if(c=='\n')
		nc++;
	}
	printf("%d\n",nc);	
	return 0;
 } 
