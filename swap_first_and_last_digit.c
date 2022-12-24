#include<stdio.h>
#include<math.h>
int main(void){
    int num;int digits;int firstDigit;int lastDigit;int swappedNum;
    printf("Enter the number: ");
    scanf("%d",&num);

    
    lastDigit = num % 10;
    
    digits = (int)log10(num);
    
    firstDigit = (int)(num/pow(10,digits));
    
    swappedNum = lastDigit;
    swappedNum *= (int)round(pow(10,digits));
    swappedNum += num % ((int)round(pow(10,digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("Swaped Number: %d",swappedNum);
    return 0;
}