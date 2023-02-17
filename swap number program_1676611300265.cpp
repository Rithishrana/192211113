#include<stdio.h>
int main()
{
	int swap(*unit,*unit);
	int a,b,p;
	scanf("%d%d",&a,&b);
	printf("before:");
	printf("a=%d\t b=%d\n",a,b);
	int swap(&a,&p);
	printf("affer swap:");
	printf("a=%d\tb=%d\n",a,b);
	return 0;
}
void swap (int*x,int*y)
{
	int t,a;
	t=*a;
	*x=*y;
	*y=t;
}
