/*
Given an array of distinct integers. 
The task is to count all the triplets such that sum of two elements equals the third element.

Input: 
N = 4 
arr[] = {1, 5, 3, 2}
Output: 2 
Explanation: There are 2 triplets:
 1 + 2 = 3 and 3 +2 = 5
 
*/

//solution
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_triplets(int[],int);
int check_in_array(int[],int,int);
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    find_triplets(arr,n);
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
void find_triplets(int arr[],int n)
{
    int count=0,sum;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
            sum = arr[i]+arr[j];
            if(check_in_array(arr,n,sum))
                count++;
            }
        }
    }
    printf("count: %d",count/2);
}
int check_in_array(int arr[],int n,int sum)
{
    int k;
    for(k=0;k<n;k++)
    {
        if(arr[k]==sum)
            break;
    }
    if(k!=n)
        return 1;
    if(k==n)
        return 0;
}
