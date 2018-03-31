#define PI 3.14159
#include "stdio.h"
int main()
{
    double r,h;
    double s;
    scanf("%lf%lf",&r,&h);
    s=PI*r*r*2+PI*2*r*h;
    printf("%.2lf",s);
    return 0;
}
