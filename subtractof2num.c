// subtract of two numbers

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int a = 20;
//     int b = 5;
//     int c = a-b;
//     printf("Subtract of %d and %d is %d",a,b,c);
//     return 0;
//     getch();
// }

// user input

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    c = a-b;
    printf("subtract of %d and %d is %d",a,b,c);
    return 0;
    getch();
}