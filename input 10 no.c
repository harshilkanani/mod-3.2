#include<stdio.h>
int main()
{
	int i,even=0,odd=0;
	for(i=1;i<=10;i++)
	{
		printf("\n%d",i);
	}
	printf("\n\n\neven odd..................");
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("\neven %d",i);
		}
		else
		{
			printf("\nodd %d",i);
		}
	}
	printf("even odd sum........................");
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
	}
	printf("\n\neven sum=%d",even);
	printf("\n\nodd sum=%d",odd);	
	return 0;
}
