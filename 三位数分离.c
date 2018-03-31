#include"stdio.h"
int main()
{
    int num;
    int a,b,c;
    scanf("%d",&num);
    c=num%100;
    a=num/100;
    b=num%10-a*10;
    pritf("%d %d %d",c,b,a);
    return 0;
}