#include <stdio.h>
void main() {
    int size;
    printf("enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size-1;i++)
    {
    printf("enter the %d element of the array:",i+1);
    scanf("%d",&a[i]);
    }
    printf("\n{");
    for(int i=0;i<size-1;i++)
    {
        printf("%d,",a[i]);
    }
    printf("}");
}