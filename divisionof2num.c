// Division of Two numbers

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a = 10;
//     int b = 5;
//     int c = a/b;
//     printf("Division of %d and %d is %d",a,b,c);
//     return 0;
//     getch();
// }

// user input

#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    c = a/b;
    printf("Division of %.1f and %.1f is %.1f",a,b,c);
    return 0;
    getch();
}