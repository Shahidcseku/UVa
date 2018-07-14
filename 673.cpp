/// AUTHOR : SHAHID
/// UVA : 673
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    getc(stdin);
    for(int i=0;i<test;i++)
    {
        char ch[150];
        stack<char> brace;
        gets(ch);

        int k=strlen(ch);

        for(int j=0;j<k;j++)
        {
            if(ch[j]=='[' || ch[j]=='(')
            {
                brace.push(ch[j]);
            }
            else if(ch[j]==']')
            {
                if(brace.empty() || brace.top()!='[')
                {
                    brace.push('x');  /// Push dummy
                    break;
                }
                brace.pop();
            }
            else if(ch[j]==')')
            {
                if(brace.empty() || brace.top()!='(')
                {
                    brace.push('x');
                    break;
                }
                brace.pop();
            }
        }

        if(brace.empty())
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
