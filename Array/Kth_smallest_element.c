/*
Given an array[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element 
in the given array. It is given that all array elements are distinct.
Example -:
Input 
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation : 3rd smallest element in the given array is 7 
*/

//solution
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void sort_array(int arr[],int n);
void print_array(int arr[],int n);
int main()
{
    int n,k;
    printf("enter size of array and k\n");
    scanf("%d %d",&n,&k);
    while(k>n)
    {
        printf("K value should be less than N\n");
        printf("enter new K value\n");
        scanf("%d",&k);
    }
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    sort_array(arr,n);
    printf("%d",arr[k-1]);
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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}
