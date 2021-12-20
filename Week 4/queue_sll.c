#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node{
    int data;
    struct node *link;
};
struct node *front = NULL,*rear = NULL,*cur;
void enqueue(){
    cur = (struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&cur -> data);
    cur -> link = NULL;
    if(front == NULL){
        front = rear = cur;
    }
    else{
        rear -> link = cur;
        rear = cur;
    }
}
int dequeue(){
    if(front == NULL){
        printf("queue underflow\n");
    }
    else if(rear == front){
        printf("deleted element %d\n",front -> data);
        front = rear = NULL;
    }
    else{
        printf("deleted element %d\n",front -> data);
        front = front -> link;
    }
  }
void display(){
    printf("elements are:\n");
    if(front == NULL){
        printf("queue underflow\n");
    }
    else{
        cur = front;
        while(cur != NULL){
            printf("%d\n",cur -> data);
            cur = cur -> link;
        }
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
            enqueue();
            break;
            case 2:
            if(front == NULL){
                printf("queue underflow\n");
            }
            else{
                dequeue();
            }
            break;
            case 3:
            if(front == NULL){
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
enter data
2
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter data
4
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter data
6
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter data
8
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter data
10
1 - enqueue
2 - dequeue
3 - display
4 - exit
enter your choice
1
enter data
12
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
12
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
deleted element 12
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
