#include<stdio.h>
struct mesure
{
   int inch;
   int feet;
	
}s1,s2,ans;
main()
{
  printf("Enter the distance in inches & feet:-");
  scanf("%d\t%d",&s1.feet,&s1.inch);
  
  ans.inch =s1.inch+s2.inch;
  ans.feet =s1.feet+s2.feet;
  if(ans.inch>=12.00) 
  {
    ans.inch=ans.inch-12.00;
    ++ans.feet;
  }
  printf("The answer is %d'%d",ans.feet,ans.inch);
}
