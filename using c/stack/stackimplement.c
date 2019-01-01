//01-01-2019
//stack implementation
#include<stdio.h>
int top=-1;
int isEmpty(){
    if(top==-1)
       return 1;
    else
       return 0;   
}
void showStack(int stack[],int top){
    int i;
    printf("\n your stack from top to bottom\n");
    for(i=top;i>=0;i--)
       printf("%d \n",stack[i]);
}
void push(int stack[], int element,int n){
    if(top==n-1)
    {
        printf("stack is full\n");
    }
    else
    {
        top=top+1;
        stack[top]=element;
        showStack(stack,top);
    }
}
void pop(int stack[],int n){
    if(isEmpty())
    {
        printf("stack underflow\n");
    }
    else
    {
        top=top-1;
        showStack(stack,top);
    }
}

int topElement(int stack[]){
    return stack[top];
}
 int main()
{
    int stack[5];
    int n=5;
    
    push(stack,20,n);
    push(stack,30,n);
    push(stack,40,n);
    push(stack,45,n);
      
    //pop first two elements in stack
    pop(stack,n);
      
}

