#include<stdio.h>

//C program to write storing employees information like emp_id,emp_name,emp_salary.

struct employee{
    char name[30];
    int id, salary;
};
 
void main(){
    struct employee e1;
    
    printf("Enter Details\n");
    printf("Enter Employ Name :- ");
	gets(e1.name);
    printf("Enter Employ ID :- ");
	scanf("%d",&e1.id);
    printf("Enter Employ Salary :- ");
	scanf("%d",&e1.salary);
     
    printf("\nEntered Detail\n");
    printf("Employ Name :- %s\n",e1.name);
    printf("Employ Id :- %d\n",e1.id);
    printf("Employ Salary :- %.d\n",e1.salary);
}


