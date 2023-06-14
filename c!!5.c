#include"stdio.h"
int main()
{
  int i,k=0,n,c=0,j,x,o,p,q;
  printf ("enter the limit");
   scanf("%d",&n);
  goto a;
        a:
            k++;
            c=0;
     for (i=1;i<=k;i++)
        {
        if (k%i==0)
          c++;
        }
          if (c==2)
          {
            x=k;
              goto b;}
              else
                goto a;
               b:
                          {printf ("%d",x);

                 printf ("\n");}
                  n--;
                  if(n>=1)
                     goto a;
}
