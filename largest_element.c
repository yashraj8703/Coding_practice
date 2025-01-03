#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    scanf("%d",&size);
    int *arr=(int*)malloc(sizeof(int)*size);
    if(arr==NULL) 
    {
        printf("Memory allocation failed\n"); 
        return 1;
    }
    printf("Enter the elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    int **ptr=&arr;
    int lar=*(*ptr);
    for(int i=0;i<size;i++)
    {
        if(*((*ptr)+i)>lar)
        {
            lar=*((*ptr)+i);
        }
    }
    printf("largest is %d",lar);
    free(arr);
    return 0;
}