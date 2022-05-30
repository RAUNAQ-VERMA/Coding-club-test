#include<stdio.h>

int main()
{
    int n,i,rev,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=0,rev=0;
    for(i=0;i<=n;i++)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(rev==n){
        printf("PALINDROME");
    }
    else
    printf("NOT PALINDROME",rev);
    return 0;
}