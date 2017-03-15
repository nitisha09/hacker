#include<stdio.h>
int main()
{
    int n,c,m,i;
    scanf("%d",&n);
    scanf("%d",&c);
    scanf("%d",&m);
    int mu;
    mu=c*m;
    int p[n];int c11=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i]>mu){
            c11=0;
            break;}

    }
    if(c11==0)
        printf("NO");
    else
        printf("Yes");

}

