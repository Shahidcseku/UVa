#include<bits/stdc++.h>
using namespace std;
void print(int n,char c)
{
    for(int i=0;i<n;i++)
    {
        if(c=='b')
        {
            cout<<" ";
        }
        else
        {
            cout<<c;
        }
    }
}
int main()
{
    char c[140];
    while(gets(c))
    {
        int len = strlen(c);
        int num = 0,i;
        for(i=0;i<len;i++)
        {
            if(c[i]=='\0')
            {
                cout<<endl;
            }
            if(c[i]=='!')
            {
                cout<<endl;
            }

            else if((c[i]=='b') || (c[i]=='*') || ((c[i]>='A') && (c[i]<='Z')) )
            {
                print(num,c[i]);
            }
            else if((c[i-1]>='0') && (c[i-1]<='9'))
            {
                num += c[i]-'0';
            }
            else
            {
                num = c[i]-'0';
            }

        }

        cout<<endl;
    }
}
