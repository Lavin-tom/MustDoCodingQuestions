/*
Given an array of integers arr, length of the array  N, and an integer K, find all the unique combinations in arr where the sum of the combination is equal to K. Each number can only be used once in a combination.

Example 1:

Input: 
N = 5, K = 7
arr[] = { 1, 2, 3, 3, 5 }
Output:
{ { 1, 3, 3 }, { 2, 5 } }
Explanation:
1 + 3 + 3 = 7
2 + 5 = 7

*/
//solution

#include <stdio.h>
#include <stdlib.h>

void find_pair(int arr[], int n, int k, int combination[], int len, int index) {
    if (k == 0) {
        // Print the combination
        printf("{ ");
        for (int i = 0; i < len; i++) {
            printf("%d ", combination[i]);
        }
        printf("}\n");
        return;
    }

    if (k < 0 || index >= n) {
        return;
    }

    // Include the current element in the combination
    combination[len] = arr[index];
    find_pair(arr, n, k - arr[index], combination, len + 1, index + 1);

    // Exclude the current element from the combination
    find_pair(arr, n, k, combination, len, index + 1);
}

void find_combinations(int arr[], int n, int k) {
    int *combination = (int *)malloc(n * sizeof(int));
    find_pair(arr, n, k, combination, 0, 0);
    free(combination);
}

int main() {
    int n, k;
    printf("Enter N and K: ");
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    find_combinations(arr, n, k);
    free(arr);
    return 0;
}
