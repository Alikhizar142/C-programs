#include <stdio.h>
void display(char array[3][3])
{
    for(int row=0;row<3;row++)
      {
          for(int col=0;col<3;col++)
          {
          printf("%c\t",array[row][col]);
          }
      printf("\n");
      }
}
int check(char array[3][3])
{
       int row=0,col=0;
       // row  check for X
          if(array[row][col]=='X' && array[row][col+1]=='X'&&array[row][col+2]=='X' || (array[row+1][col]=='X' && array[row+1][col+1]=='X'&&array[row+1][col+2]=='X' )|| (array[row+2][col]=='X' && array[row+2][col+1]=='X'&&array[row+2][col+2]=='X'))
          {
              printf("Player 1 Won \n");
              return 1;
          }
          // row check for O
          else if (array[row][col]=='O' && array[row][col+1]=='O'&&array[row][col+2]=='O' || (array[row+1][col]=='O' && array[row+1][col+1]=='O'&&array[row+1][col+2]=='O' )|| (array[row+2][col]=='O' && array[row+2][col+1]=='O'&&array[row+2][col+2]=='O'))
          {
              printf("Player 2 Won \n");
              return 1;
          }
          // column check for X
          else if(array[row][col]=='X' && array[row+1][col]=='X'&&array[row+2][col]=='X' || (array[row][col+1]=='X' && array[row+1][col+1]=='X'&&array[row+2][col+1]=='X' )|| (array[row][col+2]=='X' && array[row+1][col+2]=='X'&&array[row+2][col+2]=='X'))
          {
              printf("Player 1 Won \n");
              return 1;
          }
          // column check for O
          else if(array[row][col]=='O' && array[row+1][col]=='O'&&array[row+2][col]=='O' || (array[row][col+1]=='O' && array[row+1][col+1]=='O'&&array[row+2][col+1]=='O' )|| (array[row][col+2]=='O' && array[row+1][col+2]=='O'&&array[row+2][col+2]=='O'))
             {
              printf("Player 2 Won \n");
              return 1;
          }
          // Diagnol check for O
          else if((array[row][col]=='O' && array[row+1][col+1]=='O'&&array[row+2][col+2]=='O') || (array[col][row+2]=='O' && array[col+1][row+1]=='O' && array[col+2][row]=='O'))
          {
              printf("Player 2 won \n");
              return 1;
          }
          // Diagnol check for X
          else if((array[row][col]=='X' && array[row+1][col+1]=='X'&&array[row+2][col+2]=='X') || (array[col][row+2]=='X' && array[col+1][row-1]=='X' && array[col+2][row]=='X'))
            {
              printf("Player 1 won \n");
              return 1;
            }
            else
          return 0;
          }
int main() {
   char array[3][3]={0};
   int count=0;
   for(int row=0;row<3;row++)
      {
          for(int col=0;col<3;col++)
          {
          array[row][col]='*';
          }
      }
   while(count!=9)
   { int R , C;
     display(array);
     printf("player 1 turn \n");
     printf("Enter the row  number(O,1,2)\n");
     scanf("%d",&R);
     printf("Enter the column  number(O,1,2)\n");
     scanf("%d",&C);
     array[R][C]='X';
     display(array);
     count++;
    if(count>=5)
    {
        if(check(array))
        break;
    }
    if(count==9)
    {   
        printf("\"Game tie\" \n");
        break;
    }
    else
    {
     printf("player 2 turn\n");
     printf("Enter the row number(O,1,2)\n");
     scanf("%d",&R);
     printf("Enter the column  number(O,1,2)\n");
     scanf("\n%d",&C);
     array[R][C]='O';
     count++;
     if(count>=6)
    {   
        if(check(array))
        {   
            display(array);
              break;
        }
      
    }
   }
   }
    return 0;
}