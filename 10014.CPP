/// Simple calculations
///10014

#include<stdio.h>
int main()
{
    int t,n;
    double a0,a1,c,res,resc;
    scanf("%d",&t);
    for(int i =1; i<=t;i++)
    {
        scanf("%d %lf %lf",&n,&a0,&a1);

        for (int j=1;j<=n;j++)
        {
            scanf("%lf",&c);
            resc=resc+c;
        }
        res=((a0+a1)/2)-resc;
        printf("%.2lf\n",res);
    }
}
s
