#include <stdio.h>
#include <string.h>
struct employee{

char name[25];
int id;
char department[20];
float salary;
char email[50];
	
}employee;

int main(){
	strcpy(employee.name,"john Dee");
	employee.id=12345;
	strcpy(employee.department,"Human resources");
	employee.salary=55000.50;
	strcpy(employee.email,"john doe@compny.com");
	
 printf("name: %s\n",employee.name);
 printf("ID: %d\n",employee.id);
 printf("Department: %s\n",employee.department);
 printf("salary: %f\n",employee.salary);
 printf("email: %s\n",employee.email);
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}

