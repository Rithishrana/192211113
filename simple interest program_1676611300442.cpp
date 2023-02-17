#include<stdio.h>
int main()
{
	float si,p,n;
	int age,r;
	printf("enter the principle value:");
	scanf("%f",&p);
	printf("enter the no.of years:");
	scanf("%f",&n);
	if(p>0&&n>0&&n<30)
	{
	printf("enter your age:");
	scanf("%d",&age);
	  if (age>=65)
	  r=12;
	  else
	  r=10;
	si=(p*n*r)/100;
	printf("the simple interest is %f",si);
}
   else 
   printf("invaild");
}
