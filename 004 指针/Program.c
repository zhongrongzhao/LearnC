#include<stdio.h>
int main()
{
    int a = 10; /* ʵ�ʱ��������� */
    int *p;     /* ʵ�ʱ��������� */
    p = &a;     /* ��ָ�����p�д洢 a �ĵ�ַ */

    printf("a�����ĵ�ַ:%p \n",&a);
    printf("p�����洢�ĵ�ַ:%p \n",p);
    printf("*p������ֵ:%d",*p);      
}