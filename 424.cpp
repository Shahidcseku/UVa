#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char res[201];
void stringAdd(char s1[],char s2[])
{
    int i,j,k=0;
    char sum[201],str1[201],str2[201],temp[201];
    for(int i=0;i<201;i++)
    {
        sum[i] = 0;
        str1[i] = 0;
        str2[i] = 0;
        temp[i] = 0;
    }

    int len = strlen(s1);
    int len2 = strlen(s2);
    //cout<<strlen(str1)<<" "<<strlen(str2)<<" "<<len<<" "<<len2;

    for( i=len-1,j=0;i>=0,j<201;i--,j++)
    {
        str1[j] = s1[i];
    }
    for( i=len2-1, j=0;i>=0,j<201;i--,j++)
    {
        str2[j] = s2[i];
    }
    for(i=0; i<len; i++)
    {
        sum[i] = (str1[i]-'0' + str2[i]-'0' + k)%10 + '0';
        k = (str1[i]-'0' + str2[i]-'0' + k)/10;
    }
    for(i=len; i<len2; i++)
    {
        sum[i] = (str2[i]-'0' +k)%10 + '0';
        k = (str2[i]-'0' +k)/10;
    }
    if(k>0)
    {
        sum[len2] = k+'0';
    }


    for(i=strlen(sum)-1,j=0;i>=0;i--,j++)
    {
        res[j] = sum[i];
    }
}

int main()
{
    char ints[201]= {0};
    while(cin>>ints)
    {
        if(strlen(ints)==1 && ints[0]-'0'==0)
        {
            break;
        }
        if(strlen(ints)<strlen(res))
        {
            stringAdd(ints,res);
        }
        else
        {
            stringAdd(res,ints);
        }

    }
    cout<<res<<endl;
}

