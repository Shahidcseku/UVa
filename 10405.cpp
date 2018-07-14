#include<bits/stdc++.h>
using namespace std;

int sequence[1000][1000];
int main()
{

    char s1[1000],s2[1000];
    while(gets(s1) && gets(s2))
    {
        int L1 = strlen(s1);
        int L2 = strlen(s2);

        for(int i=L1;i>=0;i--)
        {
            for(int j=L2;j>=0;j--)
            {
                if(i==L1 || j==L2)
                {
                    sequence[i][j]=0;
                    continue;
                }
                if(s1[i]==s2[j])
                {
                    sequence[i][j] = sequence[i+1][j+1] + 1;
                }
                else
                {
                    sequence[i][j] = max(sequence[i+1][j],sequence[i][j+1]);
                }
            }
        }
        cout<<sequence[0][0]<<endl;
    }
}
