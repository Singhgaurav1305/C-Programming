// #include<stdio.h>
// int main()
// {
//    int x = 12,y;
//    y = ++x; //The priority of the pre-increment operator is higher than the assignment operator.
//    printf("%d %d",x,y);
// }

// user input

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    b=++a;
    printf("The pre increment is : %d %d",a,b);
}