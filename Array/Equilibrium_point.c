/*
Given an array A of n positive numbers. The task is to find the first equilibrium point in an array. Equilibrium point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 
3 
Explanation:  
equilibrium point is at position 3 as sum of elements before it (1+3) = sum of elements after it (2+2). 

*/

//solution

#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_array(int arr[],int n);
int main()
{
    int n;
    printf("enter size of array1\n");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    find_array(arr,n);
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
void find_array(int arr[],int n)
{
    int k = 0,left=0,right=0;    
    for(int i=0,j=n-1;i<=k;i++,j--)
    {
        left = left + arr[i];
        right = right + arr[j];
        if((left==right) && (arr[i+1]==arr[j-1]))
        {
            printf("%d",arr[i]);
            break;
        }
        if(i<n)
        {
            k++;
        }
    }
}
