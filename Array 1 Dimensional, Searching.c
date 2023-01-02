#include<stdio.h>
int main()
{
    int a[]={2,4,6,12,4,12,44,5,4,2,14,45,12,14,12,14,21,42,11,41,14};
    int n;
    int count=0;
    printf("Enter tha number you want to search:");
    scanf("%d",&n);
    for(int i=0;i<21;i++)
    {
        if(a[i]==n)
        {
         count++;
        }
    }
    printf("The element %d is foud %d times in the array",n,count);
    return 0;
}