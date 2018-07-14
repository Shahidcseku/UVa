///490 - Rotating Sentences
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define rep(i, n) for(int i=0;i<n;i++)
#define repb(n, i) for(int i=n-1;i=>0;i--)
using namespace std;
int main()
{
    char str[101][101];
    char s[101];
    int i=0,counter=0;
    while(gets(str[i++]))
    {
        counter++;
    }
    int m=0;
    for(int i=0;i<counter;i++)
    {
        if(m<strlen(str[i]))
        {
            m=strlen(str[i]);
        }
    }
    for(int i=0;i<=m;i++)
    {
        for(int j=counter;j>=0;j--)
        {
            if(strlen(str[j])> i)
            {
                cout<<str[j][i];
            }
            else
            {
                cout<<' ';
            }

        }
        cout<<endl;
    }
}
