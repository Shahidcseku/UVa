#include<bits/stdc++.h>
using namespace std;
int num[10]={0};
void countDigits(int i)
{
    int temp=0;
    while(i!=0)
    {
        temp = i%10;
        i = i/10;
        num[temp]++;
    }

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int i=0;i<10;i++)
        {
            num[i] =0;
        }
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            countDigits(i);
        }

        for(int i=0;i<9;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<num[9]<<endl;
    }
}
