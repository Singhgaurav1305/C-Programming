// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int a = 20;
//     int b = 20;
//     int c = a+b;
//     printf("Sum of 2 numbers is : %d",c);
//     return 0;
//     getch();
// }


//user input

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    c = a+b;
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
    getch();
}