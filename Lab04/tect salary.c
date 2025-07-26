#include<stdio.h>

int main() 
{
    char employeeID [20];
    int workperD = 0;
    float Salary;

    printf(" Your Employees ID : ");
    scanf("%s", employeeID);

    printf(" Working / Day : ");
    scanf("%d", &workperD);

    printf(" Salary / Day : ");
    scanf("%f", &Salary);
    
    printf("______________________________________\n");
    printf(" Your salary\n");
    printf(" Employee ID : %s\n", employeeID);
    printf(" Salary : %.2f Baht\n", Salary * workperD);

}