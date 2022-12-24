#include<stdio.h>

int main(void){
    int total = 0, counter = 1,grades = 0;
    while (counter <= 10)
    {
        printf("Enter grades: ");
        scanf("%d",&grades);
        total += grades;
        counter++;
    }
    float average = total/10;
    printf("Average: %.2f",average);
    return 0;
}