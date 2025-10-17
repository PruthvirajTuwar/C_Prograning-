#include <stdio.h>

int Add(int a ,int b)
{
    int sum = 0;
    sum = a + b; // Business Logic
    return sum; 
}

int main()
{
    int i = 0 ,j= 0, ans = 0;

    printf("Enter first number :\n");
    scanf("%d",&i);

    printf("Enter Second number :\n");
    scanf("%d",&j);

    ans = Add(i,j);

    printf("Addition is :%d\n",ans);
    
    return 0;
}