/*
Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.
Example 1:

Input:
S = 00001
Output:
4
Explanation:
Last index of  1 in given string is 4.

*/

//solution

#include <stdio.h>
#include <stdlib.h>
void find_index(char[]);
int main()
{
    int n;
    printf("enter size of array1\n");
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
    int flag =0;
    for(int i=0;word[i];i++)
    {
        if(word[i]==49)
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("-1\n");
}
