/*
Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5
*/
//Not completed
//solution

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void find_roman(char[]);
int main()
{
    int n;
    printf("enter size of word\n");
    scanf("%d",&n);
    char *roman =(char*)malloc(n*sizeof(char));
    char *x = (char*)malloc(n*sizeof(char));
    printf("enter roman letter\n");
    scanf("%s",roman);
    
    find_roman(roman);
    free(roman);
    return 0;
}
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
void find_roman(char roman[])
{
    for(int i=0;i<strlen(roman);i++)
    {
        printf("%d",value(roman[i]));
    }
}
