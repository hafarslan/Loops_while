#include<stdio.h>

int main(void){
    int a = 0, b= 1, c = 2,d=0;
    printf("%d\n%d\n",a,b);
    for (int i = 2; i <= 5; i++)
    {
        d = a + b;
        a = b;
        b = d;
        
        printf("%d\n",d);
    }
    
    return 0;
}