#include<stdio.h>
#include<stdlib.h>
#define size 5
int front = -1,rear = -1,a[size];
void enqueue(){
    int ele;
    printf("enter element to be inserted\n");
    scanf("%d",&ele);
    a[++rear] = ele;
    if(front == -1){
        front = 0;
    }
}
int dequeue(){
    if(front == rear){
        printf("deleted element %d\n",a[front]);
        front = rear = -1;
    }
    else{
        printf("deleted element %d\n",a[front]);
        front++;
    }
}
void display(){
    printf("elements are:\n");
    for(int i = 0; i <= rear;i++){
        printf("%d\n",a[i]);
    }
}
int main(){
    int ch,ele;
    while(1){
        printf("1 - enqueue\n2 - dequeue\n3 - display\n4 - exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            if(rear == size - 1){
                printf("queue overflow\n");
            }
            else{
                enqueue();
            }
            break;
            case 2:
            if(front == -1){
                printf("queue underflow\n");
            }
            else{
                dequeue();
            }
            break;
            case 3:
            if(front == -1){
                printf("queue underflow\n");
            }
            else{
                display();
            }
            break;
            case 4:
            exit(0);
        }
    }
}
/*
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter element to be inserted
2
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter element to be inserted
4
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter element to be inserted
6
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter element to be inserted
8
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter element to be inserted
10
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
queue overflow
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
3
elements are:
2
4
6
8
10
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
deleted element 2
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
deleted element 4
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
deleted element 6
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
deleted element 8
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
deleted element 10
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
2
queue underflow
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
3
queue underflow
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
4

*/
