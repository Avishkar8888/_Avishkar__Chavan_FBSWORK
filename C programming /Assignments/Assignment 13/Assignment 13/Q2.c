typedef struct Employee{
	int id ; 
	char name [10];
	double salary;
}Employee;
Employee storeemployee();
void displayemployee(Employee);
void main()
{
    Employee s1;
	printf("Enter the details of employee\n");
	s1=storeemployee();
	printf("employee details are : \n");
	displayemployee(s1);
}
Employee storeemployee(){
	Employee s1;
	printf("Enter the employee id ");
	scanf("%d",&s1.id);
	printf("Enter your name  ");
	scanf("%s",s1.name);
	printf("Enter your salary ");
	scanf("%lf",&s1.salary);
	return s1;
}

void displayemployee(Employee s1)
{
    printf("id=%d name=%s salary=%lf ",s1.id,s1.name,s1.salary);	
}