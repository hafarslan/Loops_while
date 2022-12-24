#include<stdio.h>
#define base 10
int main(void){
   long long int num;
    printf("Enter any number: ");
    scanf("%llu",&num);
    int frequency[base];

    for (size_t i = 0; i < base; i++)
    {
        frequency[i] = 0;
    }

    while (num != 0)
    {
        int lastDigit = num % 10;

        num /= 10;
        frequency[lastDigit]++;
    }
    for (int i = 0; i < base; i++)
    {
        printf("Frequency of %d = %d\n",i,frequency[i]);
    }
    
    
    
    return 0;
}