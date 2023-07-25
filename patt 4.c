#include<stdio.h>

int main()
{
    int i,j,k=1,n;

    printf("Enter the no of lines\n");
    scanf("%d",&n);

    printf("Floyd's Triangle using alphabets/characters\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4c",(char)(k+64));   
        }
        printf("\n");
    }
    return 0;
}

