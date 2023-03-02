int main()
{
    int n,i;
    double sum=0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d+",i*i);
        sum=sum+i*i;
    }
    printf("\b=%.0lf",sum);

    return 0;

}
