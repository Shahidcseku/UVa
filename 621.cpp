#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,temp;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[500];
        cin>>str;
        int len = strlen(str);
        if((len==1 && (str[0]=='1' || str[0]=='4')) || (len==2 && str[0]=='7' &&  str[1]=='8'))
        {
            cout<<"+"<<endl;
        }
        else if(str[len-1]=='5' && str[len-2]=='3')
        {
            cout<<"-"<<endl;
        }
        else if(str[0]=='9' && str[len-1]=='4')
        {
            cout<<"*"<<endl;
        }
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
        {
            cout<<"?"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }
    }
}
