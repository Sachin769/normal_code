#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("enter the factoral of a given no.");
    scanf("%d\n",&n);
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial of a %d is %d",n,fact);
}hii
