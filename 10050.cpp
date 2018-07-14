#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,party,days;
    cin>>t;

    for(int i=0;i<t ;i++)
    {
        cin>>days;
        int hartal[100] = {0}; // Refresh
        cin>>party;
        for(int j=0;j<party;j++)
        {
            cin>>hartal[j];
        }

        int ans = 0;
        for(int i=1;i<=days;i++)
        {
            if(i%7==6 || i%7==0)
            {
                continue;
            }
            bool found = false;
            /// Stretching over the time
            for(int j=0;j<party;j++)
            {
                if(i%hartal[j]==0)
                {
                    found = true;
                }
            }
            if(found)
            {
                ans++;
            }
        }
        printf("%d\n",ans);
    }
}

