#include<stdio.h>
int main()
{
    int a = 10; /* 实际变量的声明 */
    int *p;     /* 实际变量的声明 */
    p = &a;     /* 在指针变量p中存储 a 的地址 */

    printf("a变量的地址:%p \n",&a);
    printf("p变量存储的地址:%p \n",p);
    printf("*p变量的值:%d",*p);      
}