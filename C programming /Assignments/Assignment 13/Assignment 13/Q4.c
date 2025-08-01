typedef struct HR{
	int id ; 
	char name [10];
	double salary;
	double  commission;
}HR;
HR storehr();
void displayhr(HR);
void main()
{
    HR  h1;
	printf("Enter the details of HR \n");
	h1=storehr();
	printf("HR  details are : \n");
	displayhr(h1);
}
HR storehr(){
	HR h1;
	printf("Enter the HR  id ");
	scanf("%d",&h1.id);
	printf("Enter your name  ");
	scanf("%s",h1.name);
	printf("Enter your salary ");
	scanf("%lf",&h1.salary);
	printf("Enter your commission ");
	scanf("%lf",&h1.commission);
	return h1;
}

void displayhr(HR h1)
{
    printf("id=%d name=%s salary=%lf  commision=%lf ",h1.id,h1.name,h1.salary,h1.commission);	
}