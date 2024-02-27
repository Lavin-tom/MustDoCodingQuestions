//not completed

#include<stdio.h>
#include<stdlib.h>
void getArray(int[]);
void setArray(int[]);
void setTree(int[]);
void findLeave(int []);
int k;
int main()
{
	int n;
    printf("enter n and k\n");
    scanf("%d %d",&n,&k);
    int *array = (int*)malloc(k*sizeof(int));
    int *tree = (int*)malloc(n*sizeof(int));
    setArray(array);
    setTree(array);
    findLeave(array);
    free(array);
}
void setLeaves(int array[])
{
   for(int i=0;i<k;i++)
    tree[i]=i+1;
}
void getArray(int array[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
void setArray(int array[])
{
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}
void findLeave(int array[])
{
	for(int i=0;i<n;i++)
	{
		int k = array[i];
		for(int j=0;j<n;j+=k)
		{
			
		}
	}
}
