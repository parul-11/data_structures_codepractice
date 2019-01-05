#include<stdio.h>
int front=0;
int rear=0;
int n=10;
int a[10];
int insert_rear(int);
int insert_front(int);
int delete_front();
int delete_rear();
int display();
int main()
{
   insert_rear(3);
   insert_rear(4);
   insert_front(9);
   insert_front(5);
   delete_front();
   delete_rear();
   

    display();
}
int insert_rear(int element){
    if(rear==n){
        printf("\noverflow condition\n");
    }
    else{
        
        a[rear]=element;
        rear++;
        printf("%d ",element);
    }
    display();
}
int insert_front(int element){
    if(rear==n){
        printf("\noverflow\n");
    }
    else{
        int x=rear;
        for(x=rear;x>0;x--){
            a[rear]=a[rear-1];
        }
        rear=rear+1;
        a[front]=element;
        printf("%d",element);
   }
    display();
}
int delete_front(){
    if(front==rear){
        printf("\nunderflow condition\n");
    }
    else{
            int x=0;
            while(x<rear){
                a[x]=a[x+1];
            }
            rear=rear-1;
            display();    
    }
}
int delete_rear(){
    if(front==rear){
        printf("\nunderflow condition\n");
    }
    else{
        rear=rear-1;
        display();
    }
}
int display(){
    if(rear==0){
        printf("queue is empty\n");
    }
    else{
        int i=0;
        printf("\n");
        for(i=front;i<rear;i++){
            printf("%d ",a[i]);
        }
    }
}