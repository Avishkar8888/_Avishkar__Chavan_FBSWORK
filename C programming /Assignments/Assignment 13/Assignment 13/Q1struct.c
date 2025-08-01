typedef struct Student{
	int rollNo;
	char name[10];
	int marks;
}Student;
Student storedata();
void displaydata(Student);
void main(){
	Student s1;
	printf("Enter the details of student: ");
	s1=storedata();
	printf("Student Details are :");
	displaydata(s1);
}
Student storedata(){
	Student s1;
	printf("\nEnter roll no :");
	scanf("%d",&s1.rollNo);
	printf("Enter name  :");
	scanf("%s",s1.name);
	printf("Enter marks :");
	scanf("%d",&s1.marks);
	return s1;
}
void displaydata(Student s1){
	printf("\nRollno=%d  name= %s mark=%d\n",s1.rollNo,s1.name,s1.marks);
}