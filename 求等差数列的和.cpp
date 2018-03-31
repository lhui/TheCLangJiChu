#include "stdio.h"
int main()
{
    int a,b,c; 
    int sum=0;
    scanf("%d%d%d",&a,&b,&c);
    for(;a<=b;a=a+c)
    {
        sum=sum+a;
    }
    printf("%d\n",sum);
    return 0;
}
