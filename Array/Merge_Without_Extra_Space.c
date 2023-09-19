/*
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.

Example 1:

Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.

*/

//solution
//not yet completed

#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void sort_array(int arr1[],int n1,int arr2[],int n2);
void print_array(int arr[],int n);
int main()
{
    int n1,n2;
    printf("enter size of array1 and array2\n");
    scanf("%d %d",&n1,&n2);
    int *arr1 =(int*)malloc(n1*sizeof(int));
    int *arr2 =(int*)malloc(n2*sizeof(int));
    get_array(arr1,n1);
    get_array(arr2,n2);
    
    sort_array(arr1,n1,arr2,n2);
    print_array(arr1,n1);
    print_array(arr2,n2);
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
void sort_array(int arr1[],int n1,int arr2[],int n2)
{
    int temp,s;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]>arr2[j])
            {
                temp = arr1[i];
                arr1[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
