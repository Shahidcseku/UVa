#include<stdio.h>
int main()

{ 

float c,f,c1,result;
int i,j;

scanf("%d",&j);

for(i=1;i<=j;i++)

{

scanf("%f%f",&c,&f);

c1=(f/9)*5;

result=c+c1;

printf("Case %d: %.2f\n",i,result);

}

}