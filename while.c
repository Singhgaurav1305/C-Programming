//while loop
// #include<stdio.h>
// int main(){
//     int i = 1;

//     while(i<=3){
//         printf("Hello World\n");
//         i++;
//     }
// }

//while user input

#include<stdio.h>
int main()
{
    int i = 1,n;
    printf("Enter the number how much you want to print Hello world : ");
    scanf("%d",&n);
    while(i<=n){
        printf("Hello world\n");
        i++;
    }
}