#include<stdio.h>
#include<math.h>
void main()
{
	int n,rev=0,rev1=0,sq,sqroot;
	scanf("%d",&n);
	sq=n*n;
	while(sq!=0)
	{
		int rem=sq%10;
		rev=rev*10+rem;
		sq=sq/10;
	}
	sqroot=sqrt(rev);
	while(sqroot!=0)
	{
		int rem1=sqroot%10;
		rev1=rev1*10+rem1;
		sqroot=sqroot/10;
	}
	if(n==rev1)
	{
		printf("%d is adam number",n);
	}
	else
	{
		printf("%d is not adam number",n);
	}
}
