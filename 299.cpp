#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; i++)
	{
		int L;
		int train[100];
		cin>>L;
		for(int j=0;j<L;j++)
		{
			cin>>train[j];
		}
		int swaps=0;
		for (int j = 0; j < L; j++)
		{
			for (int k = 0; k < j; k++)
			{
				if(train[j]<train[k])
				{
					swap(train[k],train[j]);
					swaps++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<swaps<<" swaps."<<endl;
	}
}
