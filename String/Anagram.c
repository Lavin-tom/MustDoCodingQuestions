/*
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.

Note:-
If the strings are anagrams you have to return True or else return False
|s| represents the length of string s.

Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have same characters with
        same frequency. So, both are anagrams.
*/

//solution
//not completed

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_index(char[],char[],int[]);
int main()
{
    int n;
    printf("enter size of word\n");
    scanf("%d",&n);
    char *a =(char*)malloc(n*sizeof(char));
    char *b = (char*)malloc(n*sizeof(char));
    int *arr =(int*)malloc(n*sizeof(int));
    printf("enter string a and b\n");
    scanf("%s %s",a,b);
    
    find_index(a,b,arr);
    free(a);
    free(b);
    free(arr);
    return 0;
}
void find_index(char a[],char b[],int arr[])
{
    int count=0;
    int a_l = strlen(a);
    int b_l = strlen(b);
    for(int i=0;i<a_l;i++)
    {
        count=0;
        for(int j=0;j<a_l;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        arr[i]=count;
    }
    for(int i=0;i<a_l;i++)
    {
        printf("%d ",arr[i]);
    }
}
