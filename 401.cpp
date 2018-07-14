///401 - Palindromes
#include<bits/stdc++.h>
using namespace std;
char m[] = {'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
char mr[] ={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};
int checkPalindrome(char str[])
{
    int i=0,j=strlen(str)-1;
    while(i<j)
    {

        if(str[i]!=str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int findLocationX(char c)
{
    int s = strlen(m);
    for(int i=0;i<s;i++)
    {
        if(m[i]==c)
        {
            return i;
        }
    }
    return -1;
}
int findLocationY(char c)
{
    int s = strlen(mr);
    for(int i=0;i<s;i++)
    {
        if(mr[i]==c)
        {
            return i;
        }
    }
    return -2;
}
int checkMirror(char str[])
{
    int i=0,j=strlen(str)-1;
    while(i<=j)
    {
        char x = str[i];
        char y = str[j];
        int xx = findLocationX(x);
        int yy = findLocationY(y);
        if(xx!=yy)
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}
int main()
{
    char str[20];
    int t=0;
    while(gets(str))
    {
        int p = checkPalindrome(str);
        int mr = checkMirror(str);

        if(p==0 && mr ==0)
        {
            cout<<str<<" -- is not a palindrome.\n"<<endl;
        }
        else if(p==1 && mr ==0)
        {
            cout<<str<<" -- is a regular palindrome.\n"<<endl;
        }
        else if(p==0 && mr ==1)
        {
            cout<<str<<" -- is a mirrored string.\n"<<endl;
        }
        else if(p==1 && mr ==1)
        {
            cout<<str<<" -- is a mirrored palindrome.\n"<<endl;
        }
    }

}

