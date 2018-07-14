#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    while(1)
    {
        cin>>t;
        if(t==0)
        {
            break;
        }

        getchar();
        int line[15],ch;
        char c[26];
        for(int i=0;i<t;i++)
        {
            ch = 0;
            gets(c);

            //cout<<c<<endl;
            //cout<<i<<endl;
            for(int j=0;j<25;j++)
            {
                if(c[j]==' ')
                {
                    ch++;
                }
            }
            line[i] = ch;
        }

        sort(line,line+t);
        int ans =0;
        for(int i=0;i<t;i++)
        {
             ans += line[i] - line[0];
        }
        cout<<ans<<endl;
    }
}
