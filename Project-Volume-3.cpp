#include<stdio.h>
enum week_days
{
	monday=1,tuesday,wednesday,thursday,friday,saturday,sunday
};
main()
{
	int i;
	printf("intiger value of days:-:\n");
	for(i=monday;i<=sunday;i++)
	{
		printf("%d\n",i);
	}
}
