#include "stdio.h"
int main()
{
    int a,b,c;
    double aver;
    scanf("%d%d%d",&a,&b,&c);
    aver=(a+b+c)/3.0;
    printf("%.2lf\n",aver);
    return 0;
}
