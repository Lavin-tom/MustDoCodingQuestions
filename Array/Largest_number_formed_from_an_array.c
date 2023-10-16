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
//solution

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) 
{
    char ab[20];
    char ba[20];

    sprintf(ab, "%d%d", *(int*)a, *(int*)b);
    sprintf(ba, "%d%d", *(int*)b, *(int*)a);

    return strcmp(ba, ab);
}

char* largestNumber(int arr[], int n) 
{
    char** strArr = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        strArr[i] = (char*)malloc(20 * sizeof(char));
        sprintf(strArr[i], "%d", arr[i]);
    }

    qsort(strArr, n, sizeof(char*), compare);

    char* result = (char*)malloc(100 * sizeof(char));
    strcpy(result, "");
    for (int i = 0; i < n; i++) {
        strcat(result, strArr[i]);
    }

    for (int i = 0; i < n; i++) {
        free(strArr[i]);
    }
    free(strArr);

    return result;
}

int main() 
{
    int arr[] = {3, 30, 34, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    char* result = largestNumber(arr, n);
    printf("%s\n", result); 

    free(result);

    return 0;
}
