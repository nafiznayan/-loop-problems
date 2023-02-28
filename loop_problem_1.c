#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float sum=1.0;
    for(i=2;i<=n;i++)
    {
        sum=sum+1.0/i;
    }
    printf("sum=%.2f",sum);

}
