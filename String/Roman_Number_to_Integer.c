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
s = MCMXCIV
Output: 1994 
Explanation: - 
M = 1000  
CM = 1000 - 100  
XC = 100 - 10  
IV = 5 - 1  
Decimal Value=1000 + 900 + 90 + 4 = 1994  
*/

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
    char val1,val2;
    int temp,sum=0,f,s;
    for(int i=0;i<strlen(roman);i++)
    {
        val1 = roman[i];
        val2 = roman[i+1];
        f = value(val1);
        s = value(val2);
        // If the current value is greater than or equal 
        // to the value of the symbol to the right
        if(f>=s)
            sum=sum+f;
        // If the current value is smaller than 
        // the value of the symbol to the right
        else
            sum = sum-s;
    }
    printf("Decimal value: %d",sum);
}
