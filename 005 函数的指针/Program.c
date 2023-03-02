#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    while (1)
    {
        int(*p)(int,int) = &add;
        int a,b,c;
        printf("\nPlease input:");
        scanf("%d %d",&a,&b);
        c = p(a,b);
        printf("\nresult:%d",c);
    }
}