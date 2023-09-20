/*
Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

Example 1:

Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.

*/

//solution

#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void sort_array(int [],int);
void print_array(int arr[],int n);
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    sort_array(arr,n);
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
void sort_array(int arr[],int n)
{
    int temp_val;
    int *temp_arr = (int*)malloc(n*sizeof(int));
    //copy content to the temp array 
    for(int i=0;i<n;i++)
    {
        temp_arr[i]=arr[i];
    }
    //sort temp array 
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(temp_arr[i]<temp_arr[j])
            {
                temp_val = temp_arr[i];
                temp_arr[i]=temp_arr[j];
                temp_arr[j]=temp_val;
            }
        }
    }
    
    //arranging array
    for(int i=0,k=0;i<n;i+=2,k++)
    {
        arr[i]=temp_arr[k];
    }
    for(int j=1,k=n-1;j<n;j+=2,k--)
    {
        arr[j]=temp_arr[k];
    }
    free(temp_arr);
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
