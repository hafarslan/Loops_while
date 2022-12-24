#include<stdio.h>

int main()
{
	long int userInput;
	int isFound = 0;
	long int temp;
	int counter = 0;
	printf("Enter a number : ");
	scanf("%ld",&userInput);
	
	temp = userInput;
	
	while(1)
	{
		counter++;
		long int reverseNumber = 0;
		
		while(userInput > 0)
		{
			int remainder = userInput % 10;
			reverseNumber = reverseNumber * 10 + remainder;
			userInput = userInput / 10;
		}
		
		if(temp == reverseNumber)
		{
			break;
		}
		
		userInput = temp + reverseNumber;
		temp = userInput;
	}
	
	printf("Found Number is %ld\n",temp);
	printf("Counter = %d",counter);
	return 0;
}