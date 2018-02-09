#include<stdio.h>
int sort(int a[],int n)
{
    int count=0,i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[100];
    int i,n,t,j,k;
    scanf("%d",&t);

    for(j=0; j<t; j++)
    {
        scanf("%d",&n);
        {

            for(i=0; i<n; i++)
            {
                scanf("%d",&a[i]);
            }
            printf("Optimal train swapping takes %d swaps.\n",sort(a,n));
        }

    }



    return 0;
}

