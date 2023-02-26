#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
    };
    struct Employee MaxSalaryEmployee(struct Employee e[], int n){
    struct Employee m;
    int i;
    m=e[0];
    for(i=0;i<n;i++){
        if(e[i].salary > m.salary){
            m=e[i];
    }
    }
    return m;
    }
void main(){
    struct Employee e[5], max;
    int i;
    printf("Please enter id, name and salary");
    for(i=0; i<5; i++)
    {
        scanf("%d %s %f", &e[i].id, &e[i].name, &e[i].salary);
    }
    max = MaxSalaryEmployee(e,5);
    printf("Employee having max salary\n");
    printf("%d\t %s\t %f", max.id, max.name, max.salary);
    }