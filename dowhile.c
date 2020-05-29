#include<stdio.h>

int main()
{
    int x,sum=0;
    printf("Enter numbers: ");
    do
    {
      scanf("%d",&x);
      sum+=x;
    }while(x!=0);
    printf("\nSum of the numbers: %d\n",sum);
    return 0;
}
