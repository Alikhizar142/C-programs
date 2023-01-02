#include<stdio.h>
#include<string.h>
void A(char *Input)
{
 strlwr(Input);
 int len=strlen(Input);
 int count=0;
     for(int i=0;i<len-1;i++)  
    {
            if(Input[i]=='a'|| Input[i]=='e'||Input[i]=='i'||Input[i]=='o'||Input[i]=='u')
		        count++;
    
 	}
          printf("The Array has %d vowles \n",count);
  }
void B(char *Input)
{  
   int count=0,count1=0,len;
    strlwr(Input);
    len=strlen(Input);
    for(int i=0;i<len;i++)  
    {
            if(Input[i]=='a'|| Input[i]=='e'||Input[i]=='i'||Input[i]=='o'||Input[i]=='u')
		     {
                 count++;
             }
             else
             {
             count1++;
             }
 	}
 printf("The array has %d vowles and %d consonents \n",count,count1-1);
}
void C(char *Input)
{
          char ch;
            int max=0;
             int  len = strlen(Input);
           for(int j=0; j<len-1; j++)
           {
                 int count = 0;
                  ch = Input[j];

                  for(int k=j+1;k<len-1; k++)
                  {
                 if(Input[k] == ch)
                    {
                      count++;
                    }
                  }
               if(count > max)
               {
                 max = count;
                 ch = Input[j];
               }
               
             }
                 printf("The most frequent character is %c \n",ch);
  }
void D(char *Input , char *second)
{
   strcat(Input-1,second);
    puts(Input);
}

int main()
{     char Input[100];
      char input;
      char second[20]={"Alikhizar@142"};
    printf("Enter The string \n");
    fgets(Input,sizeof(Input),stdin);
    while (input!='E')
    {
         printf(" A) Count the number of vowels in the string. \n");
         printf("B) Count both the vowels and consonants in the string. \n");
         printf("C) Display the most frequent character in the string. \n");
         printf("D) Concatenate another string with the existing string. \n");
         printf("E) Exit the program. \n");
         printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
         printf("\nEnter The Opeartion You want to Do \n");
         scanf("\n%c",&input);
       if(input=='A')
       {   
          A(Input);
       }
        if(input=='B')
        {
            B(Input);
        }
        if(input=='C')
         {  
            C(Input);
         }
          if(input=='D')
          {
            D(Input,second);
          }
     }
     return 0;
}