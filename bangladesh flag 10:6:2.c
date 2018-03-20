#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int t,i;
    double l, w,r,area,circle_area,rec_area;
    scanf("%d",&t);
    for( i=0; i<t; i++)
    {
        scanf("%lf",&l);
        w= ((l*6)/10);
        r=(l/5);
        area=(l*w);
        circle_area=PI*r*r;
        rec_area= area-circle_area;
        printf("%0.2lf %0.2lf\n",circle_area,rec_area);
    }
    return 0;
}
