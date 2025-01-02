#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row;
	int col;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d ",row);
		}
		printf("\n");
	}
    return 0;
}
// example
// 1
// 2 2 
// 3 3 3