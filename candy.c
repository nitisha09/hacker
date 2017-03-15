#include<stdio.h>
int main ()
{
    int n,t,s=0;
    scanf("%d",&n);
    int temp=n;
    scanf("%d",&t);
    while(t--)
    {
        int c;
        scanf("%d",&c);

        if(temp<5)
        {
            s=s+(n-temp);
            temp=n;
        }
        temp=temp-c;
    }
    printf("%d\n",s);
    return 0;
}
