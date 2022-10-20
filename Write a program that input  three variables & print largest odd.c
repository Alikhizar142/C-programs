#include<stdio.h>
int main()
{     
    int x,y,z;
    int X,Y,Z;
    // Taking input 
    printf("Enter 1st Number: \n");
    scanf("%d",&x);
    printf("Enter 2nd Number: \n");
    scanf("%d",&y);
    printf("Enter 3rd Number: \n");
    scanf("%d",&z);
     // checking are there odd numbers 
 if(x%2!=0 || y%2!=0 || z%2!=0)
  // if x is odd
    { if(x%2!=0)
          X=x;
    // if y is odd
         if(y%2!=0)
           Y=y;
           // if z is odd 
           if (z%2!=0)
             Z =z;
             // if X is greatest among them 
             if (X>Y && X > Y)
                 printf("%d if the greatest odd among them \n",X);
                 // if Y is greatest among them 
                 else if ( Y > X && Y > Z)
                  printf("%d is the greatest odd among them \n",Y);
                  else
                  printf("%d is greatest odd among them \n",Z);
    }
    // If none of them is odd. 
else
printf("None of them is odd.");
 return 0;
}

