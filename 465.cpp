#include<bits/stdc++.h>
using namespace std;
int main() 
{
    double a, b;
    int int_range = 2147483647;
    char op, s[2000];
    while(gets(s))
    {
		cout<<s<<endl;
		sscanf(s, "%lf %c %lf", &a, &op, &b);
		if(a > int_range)
		{
			printf("first number too big\n");
		}
		if(b > int_range)
		{
			printf("second number too big\n");
		}
		if(op == '+' && a+b > int_range)
		{
			printf("result too big\n");
		}
		else if(op == '*' && a*b > int_range)
		{
			printf("result too big\n");
		}
    }
    return 0;
}