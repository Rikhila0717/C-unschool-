
#include<stdio.h>

int main()
{
    float p;
    printf("Enter Percentage: ");
    scanf("%f",&p);
    if(p>80)
        printf("\nA grade");
    else if(p<80 && p>=70)
        printf("\nB grade");
    else if(p<70 && p>=60)
        printf("\nC grade");
    else if(p<60 && p>=45)
        printf("\nD grade");
    else
        printf("\nFAIL");
    return 0;
}
