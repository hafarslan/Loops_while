#include<stdio.h>

int main(void){
    int num,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        sum = sum + (num % 10);
        num /= 10;
        
    } while (num != 0);
    printf("sum: %d",sum);
    return 0;
}