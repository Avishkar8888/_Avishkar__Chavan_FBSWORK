typedef struct SalesManager{
	int id ; 
	char name [10];
	double salary;
	double  incentive;
	double target;
}SalesManager;
SalesManager storesm();
void displaysm(SalesManager);
void main()
{
    SalesManager  s1;
	printf("Enter the details of SalesManager \n");
	s1=storesm();
	printf("SalesManager  details are : \n");
	displaysm(s1);
}
SalesManager  storesm(){
	SalesManager s1;
	printf("Enter the SalesManager  id ");
	scanf("%d",&s1.id);
	printf("Enter your name  ");
	scanf("%s",s1.name);
	printf("Enter your salary ");
	scanf("%lf",&s1.salary);
	printf("Enter your incentive ");
	scanf("%lf",&s1.incentive);
	printf("Enter your target ");
	scanf("%lf",&s1.target);
	return s1;
}

void displaysm(SalesManager s1)
{
    printf("id=%d name=%s salary=%lf  incentive=%lf  target=%lf",s1.id,s1.name,s1.salary,s1.incentive,s1.target);	
}