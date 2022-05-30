#include<stdio.h>

int main(){
    int a,b,x,y;
    printf("Enter the number of pen\n");
    scanf("%d",&a);
    printf("Enter the price of pen\n");
    scanf("%d",&x);
    printf("Enter the number of pencil\n");
    scanf("%d",&b);
    printf("Enter the price of pencil\n");
    scanf("%d",&y);
    printf("The total price = %d", a*x+b*y);
    return 0;
}