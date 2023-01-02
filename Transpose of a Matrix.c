#include <stdio.h> 
  
int main() 
{ 
    int A[2][2];
    int B[2][2]; 
    int i, j; 
  printf("Enter values of matrix \n");
  for (i = 0; i < 2; i++) 
      {

      for (j = 0; j < 2; j++) 
            {
                scanf("%d",&A[i][j]);
            }
      }
     printf("Displaying matrix enterd by user \n");
    for (i = 0; i < 2; i++) 
       { for (j = 0; j < 2; j++) 
            {
                printf("%d \t",A[i][j]);
            }
            printf("\n");
       }
    for (i = 0; i < 2; i++) 
       {
            for (j = 0; j < 2; j++) 
        {
            B[i][j] = A[j][i]; 
        }
       }
  
    printf("\nTranspose of Matrix : \n"); 
    for (i = 0; i < 2; i++) 
    { 
        for (j = 0; j < 2; j++) 
        {
            printf("%d \t", B[i][j]); 
        }
        printf("\n"); 
    } 

    return 0; 
}