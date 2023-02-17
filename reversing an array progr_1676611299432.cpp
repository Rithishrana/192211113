#include<stdio.h>
int main()
{
	int a[]={16,18,27,16,23,21,19},i,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("Orginal array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	printf("array in reverse order:\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
