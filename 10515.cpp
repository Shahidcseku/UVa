#include<bits/stdc++.h>
using namespace std;
int main()
{
    char g[][5] = {"0000","1111","6248","1397","6464","5555","6666","1793","6842","1919"};
    char n[105],m[105];
    int x,y,y0,y1,rem,digits;
    while(cin>>m>>n)
    {
        if(m[0] == '0' && n[0] == '0' && m[1] == '\0' && n[1] == '\0')
        {
            break;
        }
        if(n[0] == '0' && n[1] == '\0')
        {
            cout<<1<<endl;
            continue;
        }
        x = m[strlen(m)-1]-'0';
        y0 = n[strlen(n)-1]-'0';
        int c = strlen(n)-1;
        if(c-1>=0)
        {
            y1 = n[strlen(n)-2]-'0';
        }
        else
        {
            y1 = 0;
        }

        y = y1*10+y0;



        y = y%4;

        cout<<g[x][y]<<endl;
    }
}

