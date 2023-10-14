/*
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.


Example 1:

Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,
5, 9}, the arrangement 9534330 gives the
largest value.

*/
//Not completed
//solution

#include <stdio.h>
#include <stdlib.h>
void get_array(int[],int);
void find_pair(int[],int,int[]);
void print_array(int[],int);
int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *arr =(int*)malloc(n*sizeof(int));
    int *temp =(int*)malloc(n*sizeof(int));
    get_array(arr,n);
    
    find_pair(arr,n,temp);
    print_array(temp,n);
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
void find_pair(int arr[],int n,int temp[])
{
    int k;
    for(int i=0;i<n;i++)
    {
        int j = arr[i];
        do
        {
            k=j%10;
            j/=10;
        }while(j<0);
        temp[i]=k;
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
