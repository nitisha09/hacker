#include<stdio.h>
int main()
{
  long long int n;
    scanf("%lld",&n);
    long long int a[n+1];
    long long int i,j;
    int c=0;
    for(i=1;i<=n;i++)
        a[i]=0;

    for(i=2;i<=n;i++)
    {
        for(j=i;j<=n;j=j+i)
        {
            if(a[i]==1)
                a[i]=0;
            else
                a[i]=1;
        }
    }
    for(i=1;i<=n;i++)
        if(a[i]==0)
        c++;
        printf("%d",c);
        return 0;
}
