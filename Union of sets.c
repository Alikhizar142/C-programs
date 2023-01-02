#include <stdio.h>
void findunion(int array1[], int array2[], int size1, int size2)
{
    int i, j, k = 0;
    int array3[100]={0};
 
    for (i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
                array3[k] = array1[i];
                k++;
                array3[k] = array2[j];
                k++;
    
            
        }
    }
 
 
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k - 1; j++)
        {
            if (array3[j] > array3[j+1])
            {
                int temp = array3[j];
                array3[j] = array3[j+1 ];
                array3[j +1 ] = temp;
            }
        }
    }
 printf("Union of the array is : \n");
    for (i = 0; i < k; i++)
    {
        int flag = 0;
        for (j = 0; j < i; j++)
        {
            if (array3[i] == array3[j])
            {
                flag = 1;
                break;
            }
        }
 
        if (flag == 0)
        {
            printf("%d ", array3[i]);
        }
    }
}
 
int main()
{ 
 int array1[] = {1, 2, 3, 4, 5, 6, 3, 2};
int array2[] = {1, 3, 5, 7};
int size1 = 8;
int size2 = 4;
    findunion(array1, array2, size1, size2);
    return 0;
}