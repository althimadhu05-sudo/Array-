#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
    printf("enter the %d element of the array:\n",i+1);
    scanf("%d",&a[i]);
    }
    int min=a[0];
    int p=0;
    int buy=a[0];
    int sell=a[0];
    for(int i=0;i<=size-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if (a[i]-min>p)
        {
        buy=min;
        sell=a[i];
        p=a[i]-min;
       }
    }
    printf("buy=%d \n sell=%d \n profit=%d \n",buy,sell,p);
}