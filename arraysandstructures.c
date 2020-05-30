#include<stdio.h>

typedef struct
{
  char Name[25];
  int emp_ID;//employee id
  int Exp; //experience in years
  float sal; //salary of the employee
}employee;

int main()
{
    employee e[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter employee name: ");
        if(i!=0)
        getchar();
        gets(e[i].Name);
        printf("\nEnter emploee ID: ");
        scanf("%d",&e[i].emp_ID);
        printf("\nEnter experience in years: \n");
        scanf("%d",&e[i].Exp);
        printf("\nEnter Salary: ");
        scanf("%f",&e[i].sal);
    }
    for(i=0;i<5;i++)
    {
        printf("\n******Employee %d details*****",i+1);
        printf("\nEmployee Name: %s",e[i].Name);
        printf("\nEmployee ID: %d",e[i].emp_ID);
        printf("\nEmployee Experience: %d years",e[i].Exp);
        printf("\nEmployee salary: %.3f",e[i].sal);
    }
    return 0;
}
