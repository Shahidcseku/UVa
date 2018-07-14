#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cases=0;

    while(cin>>t)
    {
        cases++;
        int n[20],neg=0,stop=0,neg_stop;

        for(int i=0;i<t;i++)
        {
            cin>>n[i];
        }

        long long product=1,r=0;

        for(int i=0;i<t ;i++)
        {
           product = n[i];
           r = max(r,product);

           for(int j=i+1;j<t;j++)
           {
               product *= n[j];
               r = max(r,product);
           }
        }
        cout<<"Case #"<<cases<<": The maximum product is "<<max(r,(long long)0)<<".\n"<<endl;


    }
}
