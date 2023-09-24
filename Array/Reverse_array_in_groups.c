/*
Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.

*/

//solution
//not completed
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void print_array(int[],int);
void reverse_array(int[],int,int);
int main()
{
    int n,k;
    printf("enter size of array and k\n");
    scanf("%d %d",&n,&k);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    reverse_array(arr,n,k);
    print_array(arr,n);
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
void reverse_array(int arr[],int n,int k)
{
    static int index = 0;
    static int i=0;
    int j;
    index = i;
    for(i=index,j=i+k-1;i<index+k/2;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j];
        }
    }
    while(i-1+k>n)
    {
        k--;
    }
    index = i;
    if(index<n/2)
        reverse_array(arr,n,k);
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
