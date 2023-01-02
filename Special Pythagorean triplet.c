#include<stdio.h>
int main()
{
  int i=0,j=0,k=0,a=0,b=0,c=0,product=1,d,e,f;
  for(i=1;i<1000;i++)
  {     int d = i;
      for(j=2;j<1000;j++)
      {
         int e= j;
         for (k=3; k<1000; k++)
         {
            int f=k;
            if (d<e && e<f && d*d+e*e==f*f && d+e+f==1000)
              {
                  a=d;
                  b=e;
                  c=f;
              }  
         }  
      }
  }
printf("a= %d \n ",a);
printf("b= %d \n ",b);
printf("c= %d \n ",c);

printf("a*a=%d + b*b= %d= c*c %d \n",a*a,b*b,c*c);
product=a*b*c;
 printf("Product of abc = %d",product);
  return 0;
}