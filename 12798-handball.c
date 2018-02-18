#include<stdio.h>
int main()
{
    long long  int a[150][150],count,k;
    long long int i,j,n,m;
    while(scanf("%lld%lld",&n,&m)==2)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%lld",&a[i][j]);
            }
        }
        k=0;
        for(i=0; i<n; i++)
        {
            count=0;
            for(j=0; j<m; j++)
            {
                if(a[i][j]==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                k++;
            }
        }
        printf("%lld\n",k);
    }

    return 0;
}




