
#include <stdio.h>

int main() {
    int pos = 0;
    int yoe = 0;
    int pcy = 0;
    int bsalary =0;
    int salary = 0;
    int ebonus = 0;
    int sbonus = 0;

    printf("Enter your Number position 1-3\n");
    scanf("%d",&pos);
    
    if(pos > 3 || pos < 1){
        printf("Pleas enter 1-3\n");
        return 0;
    }
    
    printf("Years of Experience\n");
    scanf("%d",&yoe);
    printf("Number of Projects Completed this Year\n");
    scanf("%d",&pcy);
    printf("\n");
    
    if(yoe == 4 || yoe == 5){
        ebonus = 15;
    }else if(yoe > 5){
        ebonus = 20;
    }else if(yoe < 4 && yoe > 0){
        ebonus = 10;
    }
    
    if(pcy > 5){
        sbonus = 5;
    }else if(pcy < 5){
        sbonus = 0;
    }
    
    ebonus = ebonus + sbonus;

    if(pos == 1){
        bsalary = 20000;
        printf("Your position is Junior Programmer\n");
    }else if(pos == 2){
        bsalary = 35000;
        printf("Your position is Mid-Level Programmer\n");
    }else if(pos == 3){
        bsalary = 50000;
        printf("Your position is Senior Programmer\n");
    }
    
    ebonus = bsalary * ebonus / 100;
    salary = bsalary + ebonus;
    
    printf("Base Salary: %d Baht\n",bsalary);
    printf("Experience Bonus: %d Baht\nSpacial Bonus: %d Baht\n",ebonus,sbonus * bsalary / 100);
    printf("Your salary: %d Baht",salary);
    return 0;
}