//Given N leaves numbered from 1 to N . A caterpillar at leaf 1, 
//jumps from leaf to leaf in multiples of Aj (Aj, 2Aj, 3Aj).
//j is specific to the caterpillar. Whenever a caterpillar reaches a leaf, 
//it eats it a little bit.. You have to find out how many leaves, from 1 to N, 
//are left uneaten after all K caterpillars have reached the end. 
//Each caterpillar has its own jump factor denoted by Aj, and each caterpillar starts at leaf number 1.


//example
/*

Input:
N=10 K=3
arr[] = {2, 3, 5} 
Output: 2
Explanation: The leaves eaten by the first 
caterpillar are (2, 4, 6, 8, 10). The leaves 
eaten by the second caterpilllar are (3, 6, 9).
The leaves eaten by the third caterpilllar 
are (5, 10). Ultimately, the uneaten leaves are 
1, 7 and their number is 2.

*/

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
   for(int i=0;i<n;i++)
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
    int count=0;
	for(int i=0;i<k;i++)
	{
		int m = caterpiller[i];
		for(int j=0;j<n;j+=m)
		{
			tree[j]=0;      //eaten leaves are marked as '0'
		}
	}
    for(int i=0;i<n;i++)    //finding leaves without '0'
	  {
		  if(tree[i]!=0)
			  count++;
	  }
	  printf("%d\n",count);
}
