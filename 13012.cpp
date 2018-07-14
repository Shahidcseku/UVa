#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,correct;
    int n[5];
    while(scanf("%d",&t)==1)
    {
        correct=0;
        for(int i=0;i<5;i++)
        {
            cin>>n[i];

            if(n[i]==t)
            {
                correct++;
            }
        }
        cout<<correct<<endl;

    }
}

