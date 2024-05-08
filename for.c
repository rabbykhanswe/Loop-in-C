#include<stdio.h>
int main()
{
    int i, n, s=0;

    printf("Enter your value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)
    {
        s=s+i;
    }

    printf("%d",s);
    return 0;

}
