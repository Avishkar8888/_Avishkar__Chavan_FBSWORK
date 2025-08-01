typedef struct Admin{
	int id ; 
	char name [10];
	double salary;
	double   allowance;
}Admin;
Admin storeadmin();
void displayadmin(Admin);
void main()
{
    Admin  a1;
	printf("Enter the details of admin \n");
	a1=storeadmin();
	printf("admin  details are : \n");
	displayadmin(a1);
}
Admin storeadmin(){
	Admin  a1;
	printf("Enter the admin  id ");
	scanf("%d",&a1.id);
	printf("Enter your name  ");
	scanf("%s",a1.name);
	printf("Enter your salary ");
	scanf("%lf",&a1.salary);
	printf("Enter your allowance ");
	scanf("%lf",&a1.allowance);
	return a1;
}

void displayadmin(Admin a1)
{
    printf("id=%d name=%s salary=%lf  allowance=%lf ",a1.id,a1.name,a1.salary,a1.allowance);	
}