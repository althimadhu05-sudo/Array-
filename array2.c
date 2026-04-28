#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("enter the %d element value\n ",i+1);
        scanf("%d",&a[i]);
    }
   int min=a[0];
    for(int i=0;i<=size-1;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf(" minimum value=%d\n",min);
    return 0;
}