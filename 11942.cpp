#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int L[10];
    cin>>t;

    cout<<"Lumberjacks:\n";
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>L[j];
        }
        int flag = 0;
        if(L[0]>L[1])
        {
            for(int j=0;j<10;j++)
            {
                for(int k=j+1;k<10;k++)
                {
                    if(L[j]<L[k])
                    {
                        flag =1;
                        break;
                    }
                }
            }
        }
        else if(L[0]<L[1])
        {
            for(int j=0;j<10;j++)
            {
                for(int k=j+1;k<10;k++)
                {
                    if(L[j]>L[k])
                    {
                        flag =1;
                        break;
                    }
                }
            }
        }


        if(flag==0)
        {
            cout<<"Ordered\n";
        }
        else
        {
            cout<<"Unordered\n";
        }


    }
}
