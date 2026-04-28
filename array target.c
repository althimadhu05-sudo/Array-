 #include<stdio.h>
int main()
{
    int size=4;
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
    printf("enter the %d element of the array \n",i+1);
    scanf("%d",&a[i]);
    }
    int k;
    printf("enter the target sum value:\n");
    scanf("%d",&k);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            if(a[i]+a[j]==k)
            {
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}
