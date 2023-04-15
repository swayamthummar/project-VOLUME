#include<stdio.h>
struct students
{
	char name[100];
	int roll_no;
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float percentage;
};
main()
{
	int i;
	struct students s[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Name->");
		scanf("%s",&s[i].name);
		printf("Enter Roll Number->");
		scanf("%d",&s[i].roll_no);
		printf("Enter the marks of Chemestry->");
		scanf("%d",&s[i].chem_marks);
		printf("Enter the marks of Maths->");
		scanf("%d",&s[i].maths_marks);
		printf("Enter the marks of Physics->");
		scanf("%d",&s[i].phy_marks);
	}
	printf("\n________________________________________________\n");
	for(i=0;i<5;i++)
	{
		s[i].percentage=((s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)*100)/300;
		printf("\nName=%s\nRoll-Number=%d\nChemestry Marks=%d\nMaths Marks=%d\nPhysics Marks=%d\n",s[i].name,s[i].roll_no,s[i].chem_marks,s[i].maths_marks,s[i].phy_marks);
		printf("Percentage=%.2f\n",s[i].percentage);
	}
}
