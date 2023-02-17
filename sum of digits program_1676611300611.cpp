#include<stdio.h>
int main()
{
	int sum=0,num,d,onum;
	printf("enter the value of number:\n");
	scanf("%d",&num);
	onum=num;
	while(num!=0)
	{
		d=num%10;
		printf("%d\n",d);
		sum=sum+d;
		printf("sum=%d\n",sum);
		num=num/10;
		printf("num=%d\n",num);
	}
	printf("sum of digits of %d is %d",onum,sum);
	
}
