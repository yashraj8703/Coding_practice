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
			printf("%d ",col);
		}
		printf("\n");
	}
    return 0;
}
// example
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 