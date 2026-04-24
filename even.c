#include<stdio.h>
void number(int i)
{
    if(i<-7)
    {
        return;
    }
    if(i%2==0)
    {
        printf("%d\n",i);
    }
        number(i-1);
}
    int main()
    {
        number(4);
    }
