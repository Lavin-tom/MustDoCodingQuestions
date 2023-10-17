/*
Given an array of integers arr, length of the array  N, and an integer K, find all the unique combinations in arr where the sum of the combination is equal to K. Each number can only be used once in a combination.

Example 1:

Input: 
N = 5, K = 7
arr[] = { 1, 2, 3, 3, 5 }
Output:
{ { 1, 3, 3 }, { 2, 5 } }
Explanation:
1 + 3 + 3 = 7
2 + 5 = 7

*/
//solution
//not completed

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void get_array(int arr[],int n);
void find_pair(int arr[],int n);
int main()
{
    int n,k;
    printf("enter N and K\n");
    scanf("%d %d",&n,&k);
    int *arr = (int*)malloc(n*sizeof(int));
    get_array(arr,n);
    find_pair(arr,n);
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
void find_pair(int arr[],int n)
{
    //not yet implemented
}