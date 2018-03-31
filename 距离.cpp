#include "stdio.h"
#include "math.h" 
int main()
{
    double x1,y1,x2,y2;
    double juli;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    juli=sqrt(abs((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
    printf("%.2lf",juli);
    return 0;
}
