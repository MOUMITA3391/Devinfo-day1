#include<stdio.h>
#include<conio.h>
int main()
{
	int n,p=0;
	printf("enter a electric unit");
	scanf("%d",&n);
	if(n<=50)
	{
		p=n*0.50;
		p=p+(p*20/100);
		
	}
	else if(n<=150)
	{
		p=n*0.75;
		p=p+(p*20/100);
	}
	else if(n<=250)
	{
		p=n*1.20;
		p=p+(p*20/100);
	}
	else if(n>250)
	{
		p=n*1.50;
		p=p+(p*20/100);
	}
	printf("total electric bill=%d",p);
	return(0);
	getch();
}