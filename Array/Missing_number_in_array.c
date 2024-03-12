/*
Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. 
Find the missing element.

Example 1:

Input:
N = 5
A[] = {1,2,3,5}
Output: 4

*/

//solution
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_missing(int arr[],int n);
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    n-=1;
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    find_missing(arr,n);
    free(arr);
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
void find_missing(int arr[],int n)
{
    int flag;
    for(int i=1;i<=n;i++)
    {
        flag = 0;
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d",i);
        }
    }
}
