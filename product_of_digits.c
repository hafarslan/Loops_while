#include<stdio.h>

int main(void){
    int num,product = 1;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        product = product * (num % 10);
        num /= 10;
        
    } while (num != 0);
    printf("product: %d",product);
    return 0;
}