#include <stdio.h> 
  
int main() 
{    
    int a[3][3]; 
    int i, j, sum = 0; 
    printf("Enter the numbers \n");
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        { 
            scanf("%d", &a[i][j]); 
        } 
    } 
    printf("DIsplaying the matrix \n ");
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        { 
            printf("%d \t",a[i][j]); 
        } 
        printf("\n");
    } 
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        { 
            if (i == j) 
            { 
                sum = sum + a[i][j]; 
            } 
        } 
    } 
    printf("sum of diagnol elments is %d", sum); 
    return 0; 
}