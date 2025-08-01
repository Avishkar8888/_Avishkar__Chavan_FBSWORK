typedef struct Distance{
	int feet;
	int  inch;
}Distance;
Distance  stored();
void display(Distance);
void main()
{
    Distance  d1;
	d1=stored();
	printf("Distance is :\n");
	display(d1);
}
Distance   stored(){
	Distance  d1;
	printf("Enter the feet");
	scanf("%d",&d1.feet);
	printf("Enter the inches ");
	scanf("%d",&d1.inch);
	return d1;
}

void display(Distance d1)
{
    printf("feet=%d inch=%d " ,d1.feet,d1.inch);	
}