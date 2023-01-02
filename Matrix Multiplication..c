#include<stdio.h>

int main()
{

    int a[10][10], b[10][10],  r1, c1, r2, c2, i, j, k;
  int result[10][10]={0};
    printf("Enter rows  for first matrix: \n");
    scanf("%d",&r1);
    printf("Enter Column  for first matrix: \n");
    scanf("%d",&c1);
    printf("Enter rows  for second matrix: \n");
    scanf("%d",&r2);
    printf("Enter Column  for second matrix: \n");
    scanf("%d",&c2);

    // If column of first matrix in not equal to row of second matrix,
    if  (c1!=r2)
       {
        printf("Matrix cannot be multiplied");
      }

   // Storing elements of first matrix.
   else 
   {
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1;  i++)
        for(j=0; j<c1;j++)
        {
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2;  i++)
    {
        for(j=0; j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // Displaying  matrices a and b 
    printf("Matrix 1 is \n ") ;
    for(i=0; i<r1; i++)
       { for(j=0; j<c1; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
       }
        printf("Matrix 2 is \n ");
    for(i=0; i<r1;i++)
       { for(j=0; j<c1; j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
       }
    // Multiplying matrices a and b &  storing result in result matrix
    for(i=0; i<r1; i++)
      {  for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; ++k)
            {
                result[i][j]=result[i][j]+a[i][k]*b[k][j];
            }
        }
      }
    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1;  i++)
       { for(j=0; j<c2; ++j)
        {
            printf("%d \t ", result[i][j]);
        }
        printf("\n");
       }
   }
    return 0;
}