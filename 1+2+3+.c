#include<stdio.h>
#include<conio.h>
int main()

{
    int i, n, sum;
    sum=0;

    printf("Enter The Value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(i*i);

    }

    printf("The Value of Total Sum=%d",sum);

    getch();
}
