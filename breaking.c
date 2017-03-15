#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    long long int max=a[0];
    long long int min=a[0];
    int c=0,c1=0;
    for(i=0;i<n;i++){
    if(a[i]>max)
    {
        c++;
        max=a[i];
    }
    if(a[i]<min)
    {
        c1++;
        min=a[i];
    }
    }
    printf("%d %d\n",c,c1);
    return 0;

}
