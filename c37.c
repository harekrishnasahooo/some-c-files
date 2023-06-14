#include "stdio.h"
void  swap(int *,int*);
main()
{
        int a,b;
        printf("Enter any two no");
        scanf("%d%d",&a,&b);
                printf("Before swap %d %d\n",a,b);
        swap(&a,&b);
                printf("After swap %d %d\n",a,b);
        //printf("%d",x);
}
void swap(int *p,int *q)
{
        int temp;
        temp=*p;
        *p=*q;
        *q=temp;
}
