#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter the range\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		printf("%d",i);
	}
	return(0);
	getch();
}