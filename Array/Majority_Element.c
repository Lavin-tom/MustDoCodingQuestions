//Given an array A of N elements. 
//Find the majority element in the array. 
//A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.

#include<stdio.h>
#include<stdlib.h>
void getArray(int[]);
void setArray(int[]);
void majorityElement(int []);
int size;
int main()
{
    printf("enter array size\n");
    scanf("%d",&size);
    int *array = (int*)malloc(size*sizeof(int));
    setArray(array);
    majorityElement(array);
    free(array);
}
void getArray(int array[])
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
void setArray(int array[])
{
    printf("enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
}
void majorityElement(int array[])
{
    int occurance=0;
    int top_index = 0;
    int top_value =0;
    for(int i=0;i<size;i++)
    {
        occurance=0;
        for(int j=0;j<size;j++)
        {
            if(i!=j && array[i]==array[j])
            {
                occurance++;
            }
        }
        if(top_value < occurance)
        {
            top_value=occurance;
            top_index=i;
        }
    }
    if(top_value+1>size/2)
        printf("%d\n",array[top_index]);
    else    
        printf("No majority element present\n");
}
