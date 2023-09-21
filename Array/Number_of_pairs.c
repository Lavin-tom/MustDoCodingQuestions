/*
Given two arrays X and Y of positive integers, find the number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y.

Example 1:

Input: 
M = 3, X[] = [2 1 6] 
N = 2, Y[] = [1 5]
Output: 3
Explanation: 
The pairs which follow xy > yx are 
as such: 21 > 12,  25 > 52 and 61 > 16 .

*/

//solution

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void get_array(int[],int);
void find_pair(int arr1[],int m,int arr2[],int n);
void print_array(int arr[],int n);
int main()
{
    int m,n;
    printf("enter size of array1 and array2\n");
    scanf("%d %d",&m,&n);
    int *arr1 =(int*)malloc(m*sizeof(int));
    int *arr2 =(int*)malloc(n*sizeof(int));
    get_array(arr1,m);
    get_array(arr2,n);
    
    find_pair(arr1,m,arr2,n);
    free(arr1);
    free(arr2);
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
void find_pair(int arr1[],int m,int arr2[],int n)
{
    int x,y,count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            x = arr1[i];
            y = arr2[j];
            if((pow(x,y))>(pow(y,x)))
                count++;
        }
    }
    printf("%d ",count);
}
