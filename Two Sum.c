#include <stdio.h>

int main() 
{
int array[20]={0};
int length=0, target=0;
printf("Enter the length of array \n");
scanf("%d",&length);
printf("Enter numbers: \n ");

    for(int i=0; i<length;i++)
    {
        scanf("%d",&array[i]);
    }
printf("The array is \n");
    for(int i=0; i<length;i++)
    {
      printf("%d\t",array[i]);
    }
printf("\n Enter the number you want to target \n");
scanf("%d",&target);
for(int i=0;;i++)
    {   int flag=0;
    for(int j=0 ;j<length;j++)
    {
        flag=array[i]+array[j];
        if(flag==target)
      {
          printf("output [%d ,%d]",i,j);
          break;
    }
    }
    if(flag==target)
    break;
}
    return 0;
}