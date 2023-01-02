#include <stdio.h>
#include <math.h>
int is_prime(int n)
{    if (n <= 1) 
        return 0; 
  
    if (n <= 3) 
        return 1; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
  
    return 1; 
}
int is_cirular_prime(int n)
{
  int temp=n;
  int count=0;
  while(temp > 0)
  {
      temp=temp/10;
      count++;
  }
  int num=n;
  while(is_prime(num))
  {
      int rem= num % 10;
      int div= num / 10;
      num=pow(10,count-1)*rem+div;
      if(num==n)
        { printf("%d\t",num);
          return 1;
        }
  }
  return 0;
   
}
int main()
 {
int i=0 , count=0;
for (i=2;i<1000000;i++)
{
    if(is_cirular_prime(i))
    count++;
}
printf("\n There are %d circular prime number",count);
    return 0;
}