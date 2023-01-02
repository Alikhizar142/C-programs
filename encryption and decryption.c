#include <stdio.h>
#include <string.h>
void encrypt(char *input, int len)
{  
   for(int i=0;i<len-1;i++)
   {
        if(input[i] == 'x' || input[i] == 'y' || input[i] == 'z'||input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
            input[i] =input[i] - 23;
            else 
            input[i]=input[i]+3;
        }
   printf("Encrypted String is : %s",input);
} 
void decrypt(char *input,int len)
{
     for(int i=0;i<len-1;i++)
   {
         if(input[i] == 'a' || input[i] == 'b' || input[i] == 'c'||input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
            input[i] =input[i] + 23;
            else 
            input[i]=input[i]-3;      
     }
 printf("Decrypted String is : %s",input);
}
int main()
{
    char input[30];
    printf("Enter the string \n");
    fgets(input,sizeof(input),stdin);
    int len=strlen(input);
   int c;
   while(c!=3) 
   {
     printf("Menu  \n");
    printf("1.Encrypt \n");
    printf("2.Decrypt \n");
    printf("3.Exit  \n");
    printf("Select the operation: \n");
    scanf("%d",&c);
    if(c==1)
    {
     encrypt(input,len);
    }
    if(c==2)
    {
     decrypt(input,len);
    }
   }
return 0;
}