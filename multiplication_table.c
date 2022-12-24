#include<stdio.h>

int main(void){
    int num = 2;
    int i = 1;
    while (i <= 10)
    {
        int multiply = num * i;
        printf("%d * %d = %d\n",num,i,multiply);
        i++;
    }
    
    return 0;
}