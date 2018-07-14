/// 458
/// Decoder

#include<stdio.h>
#include<string.h>
int main()
{

    int i,j;
    char ch[1000];

    while(gets(ch))
    {
        j=strlen(ch);

        for (i=0;i<j;i++)
        {
            printf("%c",ch[i]-7);
        }
        printf("\n");
    }
}
