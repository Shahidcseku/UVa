#include<stdio.h>
int main(void)
        {
                float h,m;
                while(scanf("%f:%f",&h,&m)==2)

                if (h!=0 || m!=0)
                {
                        float x,y,total;
                        x=(h*30.0+(m/2.0));
                        y=m*6.0;

                        if(x>y)
                        {
                                total=x-y;
                        }
                        else
                        {
                                total=y-x;
                        }
                        if(total>180)
                        {
                                total=360-total;
                        }
                        printf("%.3f\n",total);
                }
                return 0;
        }
