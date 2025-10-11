#include <stdio.h>

int main() {
    char empID[11];    
    int hours;         
    float rate;        
    float salary;      
    
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", empID);
    
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    
    printf("Salary amount/hr: ");
    scanf("%f", &rate);
    
    printf("\n");
    
    salary = hours * rate;
    
    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2f\n", salary);
    
    return 0;
}
