#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p,h,o;
	while(cin>>p>>h>>o)
	{
		int rest = o - h;
		if(rest>=p)
		{
			cout<<"Props win!"<<endl;
		}
		else
		{
			cout<<"Hunters win!"<<endl;
		}
	}
}