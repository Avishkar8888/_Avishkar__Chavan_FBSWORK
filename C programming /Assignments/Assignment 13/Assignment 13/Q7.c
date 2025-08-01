typedef struct Time{
	int hr;
	int  min;
   int sec;
}Time;
Time  stored();
void display(Time);
void main()
{
    Time  t1;
	t1=stored();
	printf("Time is :\n");
	display(t1);
}
Time   stored(){
	Time  t1;
	printf("Enter the hour");
	scanf("%d",&t1.hr);
	printf("Enter the min ");
	scanf("%d",&t1.min);
	printf("Enter the second");
	scanf("%d",&t1.sec);
	return t1;
}

void display(Time t1)
{
    printf("Hour=%d min=%d sec=%d " ,t1.hr,t1.min,t1.sec);	
}