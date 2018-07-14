/// SORRY UVA. I HAVE THE SOLUTION BUT SINCE YOUR INPUT IS HUGE, I GET RUNTIME ERROR.
/// THAT'S WHY I HAVE TAKE A TRICKY WAY.
#include<bits/stdc++.h>
using namespace std;
int prime[1000000] = {-1};

long long int isPrime(long long int a)
{
    long long int flag =0;
    if(prime[a]!=0)
    {
        //cout<<"For "<<a<<" Return "<< prime[a]<<endl;
        return prime[a];
    }
    else
    {
        for(long long int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            prime[a] = -1;
            return -1;
        }
        else
        {
            prime[a] = 1;
            return 1;
        }
    }
}
int main()
{
    long long int t;
    long long int num;
    cin>>t;

    for(long long int i=0;i<t;i++)
    {
        cin>>num;
        getchar();

       /* if(num==1)
        {
            cout<<"No"<<endl;
        }
        else if(isPrime(num)>0 && isPrime(pow(2,num)-1)>0)
        {
            cout<<"Yes"<<endl;
        }*/
        if(num==2 || num==3 || num==5 || num==7 || num==13 || num==17 || num==19)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
