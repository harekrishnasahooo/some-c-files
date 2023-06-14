#include"stdio.h"
int main()
{
 int i,j,k=0,count=0,n,m,x,p,q;
  printf ("enter no of rows &p");
   scanf ("%d",&p);
   for (i=1;i<=p;i++)
{
       for (j=1;j<=i;j++)
        {      q=j;
        c:
            while(q<=i)
            { q++;

         a:
             count=0;
                k++;
               for(m=1;m<=k;m++)
               {
                   if (k%m==0)
                    count++;
               }
              x=k;

            if (count==2)

                printf("%d\t",x);
                    else goto a;}
                   }
      }}
