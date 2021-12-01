#include<stdio.h>
#include<stdlib.h>

#define SIZE 6

int top = -1;

int stack[SIZE];

void push(int ele){
    stack[++top] = ele;
}

int pop(){
    return stack[top--];
}

int peek(){
     return stack[top];
}

void display(){
    for(int i = top; i >= 0; i--){
        printf("%d\n " , stack[i]);
    }
}

int main(){
    int ch;
    while(1){
    printf("1 : push\n2 : pop\n3 : peek\n4 : display\n5 : exit\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    
   
        switch (ch){
            case 1:
                if( top == SIZE -1){
                    printf("Stack overflow\n");
                } else{
                    int ele;
                    printf("Enter element to be pushed : ");
                    scanf("%d", &ele);
                    push(ele);
                }
            break;
            case 2:
                if (top == -1){
                    printf("Stack Under flow\n");
                } else{
                printf("Deleted element is %d\n", pop()); 
                }
                break;
            case 3:
                if(top == -1){
                    printf("Stack Under flow \n");
                } else{
                    printf("Top element is %d\n", peek());
                }
                break;
            case 4:
                if (top == -1){
                    printf("Stack under flow\n");
                } else{
                    display();
                }
            break;
            case 5:
                    exit(0);
            break;
        }


    }
}



