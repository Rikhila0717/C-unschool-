#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    char s1[20],s2[20];
    int x,y;
    printf("Enter string1: \n");
    gets(s1);
    printf("Enter string2: \n");
    gets(s2);
    int n=strlen(s1); //strlen() function
    printf("Length of string1: %d\n",n);
    strupr(s2);//strupr function
    strlwr(s1);//strlwr function
    printf("Lower case string1: %s\n",s1);
    printf("Upper case string1: %s\n",s2);
    int a=strcmp(s1,s2);//strcmp function
    if (a==0)
        printf("The two strings are equal\n");
    else if(a<0)
        printf("String1 comes before string2 in alphabetical order\n");
    else
        printf("String1 comes after string2 in alphabetical order\n");
    strcpy(s1,s2);//strcpy function
    printf("String1 after copying: %s\n",s1);
    printf("Reverse of string2: %s\n",strrev(s2));//strrev function
    printf("Enter two integers: \n");
    scanf("%d%d",&x,&y);
    printf("Square root of %d is %.3f\n",x,sqrt(x));//sqrt() function
    printf("Power of %d,%d is %f\n",x,y,pow(x,y));//pow() function
    printf("Smallest integer greater than or equal to 2.8 is %f\n",ceil(2.8));//ceil () function
    printf("Floor of 987.654 is %f\n",floor(987.654));//floor() function
    srand(time(0));  //rand() function
    for(int i=0;i<5;i++)
        printf("%d\t",rand());
    return 0;
}
