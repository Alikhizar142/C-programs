#include<stdio.h>
int main()
{
	int input;
	float marks=0;
	int S1=2,S2=3,S3=1,S4=2,S5=4;
	printf("Choose the correct Answer \n ");
	printf("Q1: Which is capital of Sindh? \n");
	printf("1.Islamabad \n 2. Karachi \n 3. Peshawar \n 4.Lahore \n");
	scanf("%d",&input);
	if(input==S1)
	marks=marks+1;
	else
	marks=marks-0.25;
	
	printf("Q2: Which is capital of KPK? \n");
	printf("1.Islamabad \n 2. Karachi \n 3. Peshawar \n 4.Lahore \n");
	scanf("%d",&input);
	if(input==S2)
	marks=marks+1;
	else
	marks=marks-0.25;
	
	printf("Q3: Which is capital of Pakistan? \n");
	printf("1.Islamabad \n 2. Karachi \n 3. Peshawar \n 4.Lahore \n");
	scanf("%d",&input);
	if(input==S3)
	marks=marks+1;
	else
	marks=marks-0.25;
	
	printf("Q4: Which is capital of Balochistan? \n");
	printf("1.Islamabad \n 2. Quetta \n 3. Peshawar \n 4.Lahore \n");
	scanf("%d",&input);
	if(input==S4)
	marks=marks+1;
	else
	marks=marks-0.25;
	
	printf("Q5: Which is capital of Punjab? \n");
	printf("1.Islamabad \n 2. Quetta \n 3. Peshawar \n 4.Lahore \n");
	scanf("%d",&input);
	if(input==S5)
	marks=marks+1;
	else
	marks=marks-0.25;
	 
	printf("Your marks are %.2f \n",marks);
	if (marks>2.5)
	printf("Pass");
	else
	printf("Fail");
	return 0;
	
}
