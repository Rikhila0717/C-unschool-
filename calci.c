//calculator function
#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("Sum of %d and %d is %d\n",x,y,x+y);
    printf("Difference of %d and %d is %d\n",x,y,x-y);
    printf("Product of %d and %d is %d\n",x,y,x*y);
    printf("Division of %d and %d is %d\n",x,y,x/y);
    printf("Modulus of %d and %d is %d\n",x,y,x%y); //only applicable for integers
    return 0;

}
