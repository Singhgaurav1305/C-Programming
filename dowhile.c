// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     do{
//         printf("Hello world\n");
//         i++;
//     }while(i<=3);
// }

//user input

#include<stdio.h>
int main()
{
    int i = 1,n;
    printf("Enter the number how much you want to see hello world : ");
    scanf("%d",&n);
    do{
        printf("Hello world\n");
        i++;
    }while(i<=n);
}