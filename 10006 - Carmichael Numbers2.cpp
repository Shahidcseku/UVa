#include <iostream>
#include <vector>

using namespace std;
const int MaxNumChecked = 65005;
bool isComp[MaxNumChecked];
bool isCar[MaxNumChecked];

int main()
{
    /// Calculated using Korselt's criterion
    for (int i = 3; i < MaxNumChecked; i += 2)
    {
        isCar[i] = true;
    }

    for (int i=3; i<MaxNumChecked; i+=2)
    {
        ///Means is still prime
        if (!isComp[i])
        {
            isCar[i] = false;
            for (int j = 3*i;j<MaxNumChecked; j+=2*i)
            {
                isComp[j] = true;
                if((j/i)%i == 0 || (j-1)%(i-1)!=0)
                {
                    /// Contains the factor i twice
                    /// i-1 | j-1 is not true
                    isCar[j] = false;
                }


            }
        }
    }
    /// MAIN PROCESS
    int n;
    while (cin >> n, n)
    {
        if (isCar[n])
        {
            cout << "The number " << n << " is a Carmichael number.\n";
        }
        else
        {
            cout << n << " is normal.\n";
        }
    }
}



/*

/// Time limit :-(

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{   int a;
    for(int i=0; ;i++)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }

        bool prime=false;
        int counter = 0;
        for(int i = 3; i <= a; i++)
        {
            prime = true;
            for(int n = 2; n <= i  - 1; n++)
            {
                if(i % n == 0)
                {
                    prime = false;
                }
            }
            if(prime)
            {
              ///cout << i << " is prime" << endl;
              if(a%i==0)
              {
                counter+=1;
              }
            }

        }
        if(counter>=3)
        {
            cout<<"The number "<<a<<" is a Carmichael number."<<endl;
        }
        else
        {
            cout<<a<<" is normal."<<endl;
        }


    }

}


*/