/*

Given an unsorted array A of size N that contains only positive integers, 
find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.
In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

*/
//solution 1
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_index(int[],int,int);
int main()
{
    int n,sum;
    printf("enter n and sum\n");
    scanf("%d %d",&n,&sum);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    find_index(arr,n,sum);
    return 0;
}
void get_array(int arr[],int n)
{
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void find_index(int arr[],int n,int sum)
{
    int s=0,flag=0;
    for(int i=0;i<n;i++)
    {
        s = arr[i];
        for(int j=i+1;j<n;j++)
        {
            s = s + arr[j];
            if(s==sum)
            {
                printf("%d %d\n",i+1,j+1);
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        printf("No such sub array\n");
}
