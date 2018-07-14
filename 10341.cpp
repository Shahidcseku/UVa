/// Numerical methods :-)
/// Bisection

#include<stdio.h>
#include<math.h>
int p, q, r, s, t, u;
double f(double x)
{
	return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
double bisection()
{
    double lo =0,hi = 1;
    while(lo+(1e-7) <hi)
    {
        double d = (lo+hi)/2;
        if(f(lo)*f(d)<=0)
        {
            hi = d;
        }
        else
        {
            lo = d;
        }
    }
    return (lo+hi)/2;

}
int main()
{
    while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)!=EOF)
    {
        if(f(0)*f(1)>0)
        {
            printf("No solution\n");
        }
        else
        {
            printf("%.4lf\n", bisection());
        }
    }

}
