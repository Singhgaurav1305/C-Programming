// #include<stdio.h>
// int main()
// {
//     for(int i = 1;i<=3;i++)
//     {
//         printf("Hello world\n");
//     }
// }

//user input

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number how much to see hello world : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        printf("Hello world\n");
    }
}