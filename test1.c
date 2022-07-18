#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[100];
int top =-1;
void push(char val)
{
    stack[++top]=val;
    return;
}
char peek(){
    return stack[top];
}
char pop(){
    return stack[top--];
}
void main(){
    int n;
    printf("Enter tha value of n  : ");
    scanf("%d",&n);
    char input[n+1];
    printf("enter the string : ");
    scanf("%s",input);    
    for(int i=0; i<n;i++)
    {
      if(input[i]=='a')
      {
        printf("%c pushed to stack !\n\n",input[i]);
        push(input[i]);
        printf("%d",top);
      }
      if(input[i]=='b')
      {
        printf("%c poped from stack !\n\n",input[i]);
        pop();
        printf("%d",top);
        if(input[i+1]=='a'){
         printf("......string rejected..........\n\n");
         return;
        }
      }
    }
    if(top==-1)
        printf(".........string accepted.........\n\n");
    else
        printf(".........string rejected.........\n\n");
}