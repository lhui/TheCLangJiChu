#include "stdio.h"
int main()
{
    double a,b;
    scanf("%lf",&a);
    if(a<0)
        b=-a;
    else
        b=a;
    printf("%.2lf",b);
    return 0;
}
