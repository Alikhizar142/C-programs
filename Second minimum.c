#include<stdio.h>
int main()
{
   int array[7];
   int i,n;
   printf("ENter element  of arrays \n");
   scanf("%d",&n);
    printf("ENter number \n");
     for(i=0;i<n;i++)
     {
         scanf("%d",&array[i]);
     }
  int min=array[0];
  int max=array[0];
  for(i=1;i<n;i++)
  {
      if(array[i]<min)
         min=array[i];
             if(max>min);
              max=array[i];
              break;
      }
  printf("1st minimum is %d \n",min);

  printf("The 2nd minimum is %d",max);
  return 0;
}