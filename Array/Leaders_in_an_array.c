/*
Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

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
    int count =0;
    for(int i=0;i<n;i++)
    {
        count =0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
        if(count==(n-1-i))
            printf("%d ",arr[i]);
    }
}
