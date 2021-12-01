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





/*
OUTPUT:
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 1
Enter element to be pushed : 8
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 1
Enter element to be pushed : 3
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 1
Enter element to be pushed : 2
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 1
Enter element to be pushed : 3
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 1
Enter element to be pushed : 5
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 4
5
 3
 2
 3
 8
 1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 2
Deleted element is 5
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 3
Top element is 3
1 : push
2 : pop
3 : peek
4 : display
5 : exit
Enter your choice : 5


*/
