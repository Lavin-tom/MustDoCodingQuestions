#include<stdio.h>
#include<stdlib.h>
void setCaterpiller(int[]);
void setLeaves(int[]);
void findLeave(int[],int[]);
int k,n;
int main()
{
    printf("enter n and k\n");
    scanf("%d %d",&n,&k);
    int *caterpiller = (int*)malloc(k*sizeof(int));
    int *tree = (int*)malloc(n*sizeof(int));
    setLeaves(tree);
    setCaterpiller(caterpiller);
    findLeave(caterpiller,tree);
    free(caterpiller);
    free(tree);
}
void setLeaves(int tree[])
{
   for(int i=0;i<k;i++)
    tree[i]=i+1;
}
void setCaterpiller(int caterpiller[])
{
    printf("enter array elements\n");
    for(int i=0;i<k;i++)
    {
        scanf("%d",&caterpiller[i]);
    }
}
void findLeave(int caterpiller[],int tree[])
{
	for(int i=0;i<n;i++)
	{
		int k = caterpiller[i];
		for(int j=0;j<n;j+=k)
		{
			tree[j]=0;
		}
	}
  for(int i=0;i<n;i++)
	  {
		  if(tree[i]!=0)
			  printf("%d",tree[i]);
	  }
}
