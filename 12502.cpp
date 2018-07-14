#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		float a,b,m,a_ex,b_ex,avg=0;
		cin>>a>>b>>m;

        avg = (a+b)/3;

        a_ex = a-avg;
        b_ex = b-avg;

		float work_ex = a_ex+b_ex;
		float money = m*a_ex/work_ex;

        if(money<=0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<money<<endl;
        }

	}
}
