#include<stdio.h>

int main(void){
    int num,count = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do
    {
        num /= 10;
        count++;
    } while (num != 0);
    printf("Count: %d",count);
    return 0;
}