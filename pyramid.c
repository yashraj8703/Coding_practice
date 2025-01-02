#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
	int row;
	int col;
	for(row=0;row<n;row++)
	{
		for(col=0;col<n-row-1;col++)
		{
			printf(" ");
		}
		for(col=0;col<2*row+1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}