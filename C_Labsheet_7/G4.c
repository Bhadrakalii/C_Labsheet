//Modify question number 3 to read information of 10 Employees and display them.

#include<stdio.h>

struct Employee
{
    char emp_name[100], emp_post[100];
    int emp_id,emp_salary;
}emp[10];

void main() 
{
    int i;
    printf("Enter the details of 10 employees\n");
    for (i = 0; i < 10; i++) 
    {
        printf("\nEnter details of employee %d\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Name: ");
        scanf("%s", emp[i].emp_name);
        printf("Post: ");
        scanf("%s", emp[i].emp_post);
        printf("Salary: ");
        scanf("%d", &emp[i].emp_salary);
    }
    printf("\nDetails of 10 Employees are\n");
    for (i = 0; i < 10; i++) 
    {
        printf("\nEmployee %d\n", i+1);
        printf("ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].emp_name);
        printf("Post: %s\n", emp[i].emp_post);
        printf("Salary: %d\n", emp[i].emp_salary);
    }
    //getch
}