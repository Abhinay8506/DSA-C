#include <stdio.h>
#include <conio.h>
#include<string.h>
int balancedcheck(char *arr)
{
    int len = strlen(arr);
    char stack[len];
    int top = -1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            stack[++top] = arr[i];
        }
        else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}')
        {
            if (top == -1)
            {
                return 0;
            }
            if ((arr[i] == ')' && stack[top] == '(')||(arr[i] == ']' && stack[top] == '[')||(arr[i] == '}' && stack[top] == '{'))
            {
                top--;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    char arr[n];
    scanf("%d",&arr);
    if(balancedcheck(arr)){
        printf("BALANCED\n");
    }
    else{
        printf("UNBALANCED");
    }
    return 0;
}