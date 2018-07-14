#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        if(n==1)
        {
             printf("0%%\n");
        }
        else
        {
             printf("%.0lf%%\n",double(n*100/4));
        }


    }
}


