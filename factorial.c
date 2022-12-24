#include<stdio.h>

int main(void){
    unsigned long long int factorial = 1;
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i = num; i > 0; i--){
        factorial *= i;
    }
    printf("Factorial = %llu",factorial);
    return 0;
}