#include"stdio.h"
int main()
{
 int n,i,j,k,nu,count;
   printf ("ener number ");
     scanf ("%d",&n);
       nu=1;
         for (i=1;i<=n;i++)
           {
             for (j=1;j<=i;j++)
             {
               while (nu>=1)
                 {
                   count=0;
                     for (k=1;k<=nu;k++)
                      {
                       if (nu%k==0)
                         count ++;
                         }
                         if (count ==2)
                           printf ("%d ",nu);
                            nu++;
                            if (count==2)
                                break;

                                 }}
                                 printf ("\n");
                                     }}
