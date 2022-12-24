#include<stdio.h>

int main(void){
    int i = 1;
    int last = 100;
    int oddSum = 0;
    int EvenSum = 0;
    printf("Odd Numbers \t Even Numbers\n");
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            oddSum += i;
            printf("%11d\t",i);
        }
        if (i % 2 == 0)
        {
            EvenSum += i ;
            printf("%13d\n",i);
        }

        i++;
    }
    printf("Sum = %4d\t\tSum = %4d",oddSum,EvenSum);
    return 0;
}