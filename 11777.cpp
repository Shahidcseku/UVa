#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int t1=0,t2=0,fin=0,att=0,ct1=0,ct2=0,ct3=0,best1=0,best2=0;
        cin>>t1>>t2>>fin>>att>>ct1>>ct2>>ct3;

        if(ct1>=ct2 && ct1>=ct3)
        {
            best1 = ct1;
            if(ct2>=ct3)
            {
                best2 = ct2;
            }
            else
            {
                best2 = ct3;
            }
        }
        else if(ct2>=ct1 && ct2>=ct3)
        {
            best1 = ct2;
            if(ct1>=ct3)
            {
                best2 = ct1;
            }
            else
            {
                best2 = ct3;
            }
        }
        else if(ct3>=ct1 && ct3>=ct2)
        {
            best1 = ct3;
            if(ct1>=ct2)
            {
                best2 = ct1;
            }
            else
            {
                best2 = ct2;
            }
        }

        //cout<<best1<<" "<<best2<<endl;
        float avg = (float)(best1+best2)/2;
        float sum = avg+t1+t2+fin+att;

        if(sum>=90)
        {
            cout<<"Case "<<i<<": A"<<endl;
        }
        else if(sum>=80)
        {
            cout<<"Case "<<i<<": B"<<endl;
        }
        else if(sum>=70)
        {
            cout<<"Case "<<i<<": C"<<endl;
        }
        else if(sum>=60)
        {
            cout<<"Case "<<i<<": D"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": F"<<endl;
        }
    }
}
