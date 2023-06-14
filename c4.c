#include"stdio.h"
int main()
{
  int i,j,n,x;
  printf ("enter  no of rows ");
   scanf("%d",&n);
     for (i=1;i<=n;i++)
        {
           printf ("%d ",i);
            x=i;

             for (j=2;j<=i;j++)
                {
                  x=x+5;
               printf ("%d ",x);}
             printf ("\n");
             }}
/*
1
2 7
3 8 13
4 9 14 19
5 10 15 20 25
*/
