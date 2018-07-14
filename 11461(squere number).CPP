#include<stdio.h>
#include<math.h>
int main()
{
        int i,n,a,b,num,sq;


                while(scanf("%d%d",&a,&b)==2)
                {
                        if(a==0 && b==0)
                        {
                                break;
                        }
                        else
                        {
                                num=0;
                                for(i=a;i<=b;i++)
                                {
                                        sq=sqrt(i);
                                        if(sq*sq==i)
                                                num++;
                                }
                                printf("%d\n",num);
                        }
                }
}

