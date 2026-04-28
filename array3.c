#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("enter the %d value of the array:\n",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(i!=size-1&&a[i]+1==a[i+1])
        {
            printf("%d,",a[i]);
        }
        else if(a[i]-1==a[i-1])
        {
            printf("%d,",a[i]);
        }
    }
}