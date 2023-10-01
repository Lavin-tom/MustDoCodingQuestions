/*
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
Note: You are not allowed to use inbuilt function.

Example 1:

Input:
str = 123
Output: 123

*/

//solution

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_index(char[]);
int main()
{
    int n;
    printf("enter size of word\n");
    scanf("%d",&n);
    char *word =(char*)malloc(n*sizeof(char));
    printf("enter string\n");
    scanf("%s",word);
    
    find_index(word);
    free(word);
    return 0;
}
void find_index(char word[])
{
    int sum =0;
    int l = strlen(word);
    for(int i=0;i<l;i++)
    {
        int n = word[i];
        sum = (sum*10)+n-48;
    }
    printf("%d",sum);
}