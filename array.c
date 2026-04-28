#include <stdio.h>
#define size 7
int main() 
{
    int a[size];
    for(int i=0;i<=size;i++)
    {
    printf("enter the %d element of the array \n ",i+1);
    scanf("%d",&a[i]);
    }
    for (int i=0;i<size-2;i++)
    {
        for(int j=0;j<=size-1;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    printf("{");
    for(int i=0;i<size-1;i++)
    {
        printf("%d,",a[i]);
    }
    printf("}");
    return 0;
}