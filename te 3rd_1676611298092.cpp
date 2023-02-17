#include<stdio.h>
int main()
{
	int num,d,reversenumber=0;
	printf("Enter the number: \n ");
	scanf("%d",&num);
	if(num>0)
	{
		while(num!=0)
		{
		d=num%10;
		reversenumber=reversenumber*10+d;
		num=num/10;
	    }
	    printf("%d",reversenumber);
    }
	else
	{
		printf("the given number is invaild");
	}
	printf("\n");
	if(num<0)
	{
		printf("the given number is negative and does not satisfy the condition");
	}
}
