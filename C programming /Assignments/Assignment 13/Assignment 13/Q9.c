typedef struct Complex{
	int real;
	int  img;
}Complex;
Complex  stored();
void display(Complex);
void main()
{
    Complex  c1;
	c1=stored();
	printf("Complex number is : \n");
	display(c1);
}
Complex   stored(){
	Complex  c1;
	printf("Enter the real number");
	scanf("%d",&c1.real);
	printf("Enter the imiginary number ");
	scanf("%d",&c1.img);
	return c1;
}

void display(Complex c1)
{
    printf("%d+%di " ,c1.real,c1.img);	
}