//WAP to check the number is positive or negative by user input

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num>0){
        printf("Positive Number");
    }else if(num == 0)
    {
        printf("Neutral Number");
    }else{
        printf("Negative Number");
    }
}