#include<stdio.h>
int main()
{

    int i=1, n, s=0;

    printf("Enter your value of n:");
    scanf("%d",&n);

    do
    {
        s=s+i;
        i=i+1;
    }

    while(i<=n);

    printf("%d",s);

    return 0;

}
