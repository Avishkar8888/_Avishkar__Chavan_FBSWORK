typedef struct Date{
	int date;
	int  month;
   int year;
}Date;
Date  stored();
void display(Date);
void main()
{
    Date  d1;
	d1=stored();
	printf("Birth date   details are : \n");
	display(d1);
}
Date   stored(){
	Date  d1;
	printf("Enter the birth  date");
	scanf("%d",&d1.date);
	printf("Enter the month ");
	scanf("%d",&d1.month);
	printf("Enter the year");
	scanf("%d",&d1.year);
	return d1;
}

void display(Date d1)
{
    printf("birthdate=%d month=%d year=%d " ,d1.date,d1.month,d1.year);	
}