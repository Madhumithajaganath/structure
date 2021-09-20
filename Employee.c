#include<stdio.h>
struct employee
{
    int age,ph;
    float salary;
    char name[20];
    
};
int main()
{
    struct employee emp;
    int i,n;
    printf ("Enter the number of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name\n");
        scanf("%s",&emp.name);
        //gets(emp.name);
        printf("Enter the age\n");
        scanf("%d",&emp.age);
        printf("Enter mobile number");
        scanf("%d",&emp.ph);
        printf("Enter the salary amount\n");
        scanf("%f",&emp.salary);
    }
    for(i=0;i<n;i++)
    {
      
        printf("%s",emp.name );
        printf("\t%d",emp.age);
        printf("\t%d",emp.ph);
        printf("\t%f",emp.salary);
    }
}
