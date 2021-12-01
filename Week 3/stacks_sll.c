#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* link;
};
struct node* top = NULL, *temp, *cur;

void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    if (top == NULL){
       cur -> link = NULL;
    }
    else{
        cur -> link = top;
    }
    top = cur;
}

int pop(){
    temp = top;
    if(top == NULL)
        printf("Stack Under flow");
    else{
        top = top -> link;}
        int ans = temp -> data;
        free(temp);
    return ans;
    }

int peek(){
    return top -> data;
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> link;
    }

}




int main(){
    int ch, ele;
    while(1){
    printf("1 : push\n2 : pop\n3 : peek\n4 : display\n5 : exit\n");
    printf("Enter your choice : ");
    scanf("%d", &ch);
    
   
        switch (ch){
            case 1:
                
               //     int ele;
                    printf("Enter element to be pushed : ");
                    scanf("%d", &ele);
                    push(ele);
                
            break;
            case 2:
                if (top == NULL){
                    printf("Stack Under flow\n");
                } else{
                printf("Deleted element is %d\n", pop()); 
                }
                break;
            case 3:
                if(top == NULL){
                    printf("Stack Under flow \n");
                } else{
                    printf("Top element is %d\n", peek());
                }
                break;
            case 4:
                if (top == NULL){
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
