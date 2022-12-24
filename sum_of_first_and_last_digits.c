#include<stdio.h>

int main(void){
    int num = 123;
    int lastDigit = num % 10;
    while (num >=10)
    {
        num /= 10;
    }
    int firstNum = num;
    int sum = firstNum + lastDigit;
    printf("%d",sum);
    return 0;
}