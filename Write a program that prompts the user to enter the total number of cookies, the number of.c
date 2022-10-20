#include<stdio.h>
int main()
{     
    int cookies=0 , box=0  , container=0 ;
    // Taking number of cookies .
    printf("Enter number of cookies: \n ");
    scanf("%d",&cookies);
    // taking number of cookies in a  box.
    printf("Enter number of cookies in a  Boxes: \n ");
    scanf("%d",&box);
    // taking number of boxes in a container 
    printf("Enter number of boxes in a conatiners: \n ");
    scanf("%d",&container);
    // finding number of boxes 
    int box1=cookies/box;
    {     // if cookies fit in boxes properly 
        if (cookies%box==0)
        {
            printf("The number of boxes are %d \n",box1);
        }
        else // if  some cookies are left printing them,
        printf("The number of cookies left are %d \n",cookies%box);
    }
    // finding number of conatiner 
   int container1=box1/container;
   {     // if boxes fit properly in conatiner
       if (box1%container==0)
       {
           printf("The number of Conatiner are %d \n",container1);
       }
       else // if boxes are left printing them  
       {
           printf("The number of boxes left are %d:", box1%container);
       }
   }
return 0;
}
