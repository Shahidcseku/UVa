#include<stdio.h>

int main(void)

{

long int a,b;

int c,i;

scanf("%d",&c);

for(i=1;i<=c;i++)

{

scanf("%ld %ld",&a,&b);

if(a>b)

printf(">\n");

else if
(a<b)
printf("<\n");

else 

printf("=\n");

}

return 0;

}