#include<stdio.h>
#include<math.h>
int main()
{
    int x=0,y=0,x1=0,y1=0,temp=0,temp1=0,count=0;
    float avg,s;
    while(1)
   {
    printf("Enter new coordinates: \n");
    printf("Enter value of x1 \n");
    scanf("%d",&x1);
    printf("Enter value of y1 \n");
    scanf("%d",&y1);
     
        s=s+sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
       temp=x;
      x=x1;
       x1=temp;
       temp1=y;
       y=y1;
       y1=temp1;
       count++;
       avg=s/count;
       if (x==x1 && y==y1)
      break;
   
  }
    
   printf("Total dstance covered is %.2f \n ",s);
   printf("Total Step taken are %d \n ",count-1);
   printf("Average distance between each point is %.2f",avg);
    return 0;
}
