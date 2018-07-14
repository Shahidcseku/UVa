/// We'll have to take the possible biggest step to get the min_steps
#include<iostream>
using namespace std;
int main ()
{
    int x , y;
    int t;
    int min_steps = 0;
    cin>>t;

    for(int i=0; i<t ; i++)
    {
        cin>>x>>y;
        int difference = y - x;
        min_steps = 0;
        if(difference != 0)
        {
            int sumOfSteps = 0;
            int z = 2; //divided by 2, it represents the size if the next step
            while(difference > sumOfSteps)
            {
               sumOfSteps += (z / 2); //next step
                min_steps++;
                z++;
                //cout<<sumOfSteps<<"sum "<<z<<"z "<<min_steps<<"min"<<endl;
            }
        }
        cout<<min_steps<<endl;
    }
    return 0;
}
