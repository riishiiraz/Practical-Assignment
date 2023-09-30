/*
    Que : 20| W.A.C.P. to define a Structure for employee details and take two inputs.
*/

#include <stdio.h>

#define N 2

struct emp
{
    char name[20];
    int age;
    int salary;
};

void main()
{

    struct emp Emps[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Enter Name of employee %d : ", i + 1);
        scanf("%s", Emps[i].name);

        printf("Enter Age of employee %d : ", i + 1);
        scanf("%d", &Emps[i].age);

        printf("Enter Salary of employee %d : ", i + 1);
        scanf("%d", &Emps[i].salary);

        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        printf("\nEmployee %d Name : %s", i + 1, Emps[i].name);
        printf("\nEmployee %d Age : %d", i + 1, Emps[i].age);
        printf("\nEmployee %d Salary : %d", i + 1, Emps[i].salary);
    }
}