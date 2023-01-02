#include<stdio.h>
int find_small_val(int A[] , int n )
{
  int smallest = 1;
  for(int i = 0; i < n ; i++)
  {
      for(int j=0;j<n;j++)
    if(A[j] == smallest)
    {
      smallest++;
    }
    return smallest;
  }
}
int main ()
{
    int a[10]={10,2,3,4,5,6,7,8,9,1};
    int n=10;
    int b=find_small_val(a,n);
    printf("%d",b);
    return 0;
}