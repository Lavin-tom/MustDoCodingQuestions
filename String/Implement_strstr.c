/*
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. 
The function returns an integer denoting the first occurrence of the string x in s (0 based indexing).
Note: You are not allowed to use inbuilt function.
Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
*/

//solution

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_index(char[],char[]);
int main()
{
    int n;
    printf("enter size of word\n");
    scanf("%d",&n);
    char *word =(char*)malloc(n*sizeof(char));
    char *x = (char*)malloc(n*sizeof(char));
    printf("enter string and x\n");
    scanf("%s %s",word,x);
    
    find_index(word,x);
    free(word);
    free(x);
    return 0;
}
void find_index(char word[],char x[])
{
    int count=0;
    int word_l = strlen(word);
    int x_l = strlen(x);
    int f = 0,i;
    for(i=0;i<word_l;i++)
    {
        if(word[i]==x[f])
        {
            int index = i;
            for(int j=i,k=f;j<i+x_l;j++,k++)
            {
                if(word[j]==x[k])
                {
                    count++;
                }
            }
            if(count==x_l)
            {
                printf("%d ",index);
                break;
            }
            f++;
        }
    }
    if(i==word_l)
        printf("-1\n");
}
