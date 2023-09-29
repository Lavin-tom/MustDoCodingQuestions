/*
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.
Example 1:

Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.
*/

//solution
#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_element(int[],int);
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    find_element(arr,n);
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
void find_element(int arr[],int n)
{
    int flag_r,flag_l,flag=0;
   for(int i=0;i<n;i++)
   {
       flag_r =0,flag_l=0;
        int value = arr[i];
        for(int j=i;j<n;j++)
        {
            if(value < arr[j])
            {
                flag_r = 1;
            }
        }
        for(int k=i;k>=0;k--)
        {
            if(value > arr[k])
            {
                flag_l = 1;
            }
        }
        if(flag_r&&flag_l)
        {
            printf("%d ",arr[i]);
            flag=1;
            break;
        }
   }
   if(flag==0)
        printf("%d",-1);
}
