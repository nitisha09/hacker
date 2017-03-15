#include<stdio.h>
int main()
{

    int n,k;
    scanf("%d%d",&n,&k);
    int max=0;
    int h;
    while(n--)
    {

        scanf("%d",&h);
        max=h>max?h:max;

    }
    if(max>k)
       printf("%d\n",(max-k));
    else
        printf("0\n");
    return 0;
}
