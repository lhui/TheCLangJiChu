#include "stdio.h"
#include "math.h"
int main()
{
    double  a,b,c;
    double s,S;
    scanf("%lf%lf%lf",&a,&b,&c); 
    s=(a+b+c)/2.0;
    S=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf",S);
    return 0;
}
