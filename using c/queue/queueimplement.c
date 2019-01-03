#include<stdio.h>
int front=0;
int rear=0;
int n=10;
int a[10];
int push(int);
int pop();
int display();
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    pop();
    pop();
    display();
}
int push(int element){
    if(rear==n-1){
        printf("\noverflow condition\n");
    }
    else{
        rear++;
        a[rear]=element;
        printf("%d ",element);
    }
    display();
}
int pop(){
    if(front==rear){
        printf("\nunderflow condition\n");
    }
    else{
        front++;
        if(front>rear){
            front=rear=0;
        }
    }
    display();
}
int display(){
    if(rear==0){
        printf("queue is empty\n");
    }
    else{
        int i;
        printf("\n");
        for(i=front+1;i<=rear;i++){
            printf("%d ",a[i]);
        }
    }
}