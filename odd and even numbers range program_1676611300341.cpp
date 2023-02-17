#include<stdio.h>
int main()
{
	int m,n,i;
	printf("enter the starting and ending value :\n");
	scanf("%d%d",&m,&n);
	if(m<n)
	{
		printf("the even numbers are:\n");
		for(i=m;i<=n;i++)
		{
			if(i%2==0)
			printf("%d\n",i);
		}
		printf("\n");
		printf("the odd numbers are:\n");
		for(i=m;i<n;i++)
		{
			if(i%2!=0)
			printf("%d\n",i);
		}
	}
		else
		printf("the given number is invaild");
}
