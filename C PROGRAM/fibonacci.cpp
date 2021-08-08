#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter the numbers\n");
	scanf("%d",&n);
	printf("%d",a);
	for(i=0;i<=n;i++)
	{
      c=b-1+i;
      printf("%d",c);
      b++;
    }
    return(0);
	getch();
	
	}