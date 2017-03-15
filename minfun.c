#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int n,t;
    scanf("%d",&n);
    char r[]="int";
    char c[]="min(int ,int)";
    if(n==2)
        printf("%s",c);
    t=n-2;
    while(t--)
    {
        s=min(r, c);
        c=s;
    }
    printf("%s",s);
    return 0;
}
