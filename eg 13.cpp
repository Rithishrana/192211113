#include<stdio.h>
int main()
{
int a,b,n;
printf("Input Natural Number n: ");
scanf("%d",&n);
for(a=1;a<=100;a++)
    for(b=1;b<=100;b++)

        if(a<b&&a*a+b*b==n*n)
        {
            printf("(%d, %d, %d)\n",a,b,n);
        }
}