#include<stdio.h>
int main()
{
    int x = 10,y;
    y=x++; //The priority of the post-increment operator is lower than other operators, especially the assignment operator.
    printf("%d %d",x,y);
}