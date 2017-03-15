#include<stdio.h>
int main()
{
    int t;
    long long i,j,f=0;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)

            scanf("%lld",&a[i]);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            printf("YES\n");
        else
            printf("NO\n");
        f=0;
    }
    return 0;

}
