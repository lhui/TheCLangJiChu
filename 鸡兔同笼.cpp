#include "stdio.h"
int main()
{
    int m,n;
    int ji,tu;
    scanf("%d%d",&m,&n);
    for(ji=0;ji<=m;ji++)
    {
    		tu=m-ji;
            if(2*ji+tu*4==n)
            {
                printf("%d %d\n",ji,tu);
                return 0;
            }
        
    }
    return 0;
}
