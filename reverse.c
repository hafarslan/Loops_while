#include<stdio.h>

int main(void){
    int num,reverse = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        reverse = reverse * 10+ (num % 10);
        num /= 10;
        
    } while (num != 0);
    printf("reverse: %d",reverse);
    return 0;
}