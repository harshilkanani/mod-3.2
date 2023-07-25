#include<stdio.h>
int main()
{
	int a,b,choice,sum,sub,mul,div;
	printf("1.summation..\n");
	printf("2.substraction..\n");
	printf("3.multiplication..\n");
	printf("4.divison..\n");
	
	printf("enter a choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("enter a A:");
			scanf("%d",&a);
			printf("enter a B:");
			scanf("%d",&b);
			sum=a+b;
			printf("summation=%d",sum);
			break;
		case 2:	
			printf("enter a A:");
			scanf("%d",&a);
			printf("enter a B:");
			scanf("%d",&b);
			sub=a-b;
			printf("substraction=%d",sub);
			break;
			
		case 3:	
			printf("enter a A:");
			scanf("%d",&a);
			printf("enter a B:");
			scanf("%d",&b);
			mul=a*b;
			printf("multiplication=%d",mul);
			break;
			
		case 4:	
			printf("enter a A:");
			scanf("%d",&a);
			printf("enter a B:");
			scanf("%d",&b);
			div=a/b;
			printf("divison=%d",div);
			break;
			
			default :
			printf("please enter your correct choice");
	}
		
	return 0;
}
