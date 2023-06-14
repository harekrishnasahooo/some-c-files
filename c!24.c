#include"stdio.h"
int main()
{
 int i,j,n,m,sp,b;
  printf ("enter number of rows ");
    scanf("%d",&n);
    for (i=1;i<=1;i++)
           {
              for (m=1;m<2*n;m++)
                 {printf ("%d",m);}}
                      printf ("\n");
                        b=n+1;
                         sp=1;
             for (i=n-1;i>=1;i--)
             {
                 for(j=1;j<=i;j++)
                    printf ("%d",j);
                      for (j=1;j<=sp;j++)
                        printf (" ");
                          for (j=b;j<2*n;j++)
                             printf ("%d",j);
                                b++;
                                  sp=sp+2;
                                     printf ("\n");}}

/*
123456789
1234 6789
123   789
12     89
1       9*/
