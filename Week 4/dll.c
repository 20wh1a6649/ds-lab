#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node{
	    int data;
	    struct node *prev;
	    struct node *next;
};
struct node *head = NULL,*tail = NULL,*cur,*temp,*temp1;
struct node *create(){
	    int n;
	    printf("Enter number of nodes : ");
	    scanf("%d",&n);
	    while(n--){
	        cur = (struct node*)malloc(sizeof(struct node));
	        scanf("%d",&cur -> data);
	        cur -> next = NULL;
	        cur -> prev = NULL;
    	   if(head == NULL){
        	  head = tail = cur;
        	}
			else{
			     tail -> next = cur;
			     cur -> prev = tail;
			     tail = cur;
			}
		}
		return head;
}
struct node *insert_begin(int ele){
	    cur = (struct node*)malloc(sizeof(struct node));
	    cur -> data = ele;
	    cur -> next = head;
	    cur -> prev = NULL;
	    head -> prev = cur;
	    head = cur;
	    return head;
}
struct node *insert_end(int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> next = NULL;
	cur -> prev = tail;
	tail -> next = cur;
	tail = cur;

	return head;
}

struct node* insert_pos(int pos, int ele){
	int c = 1;
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	temp = head;
	while(c < pos){
		temp1 = temp;
		temp = temp -> next;
		c++;
		
	}
	temp1 -> next = cur;
	cur -> prev = temp1;
	cur -> next = temp;
	temp -> prev = cur;
	return head;
}
struct node *delete_begin(struct node *head){
	    temp = head;
	    head = head -> next;
	    head -> prev = NULL;
	    printf("deleted element %d\n",temp -> data);
	    free(temp);
	    return head;
}
struct node* delete_end(struct node *tail){
	temp = tail;
	tail = tail -> prev;
	tail -> next = NULL;
	printf("Deleted element is %d\n",  temp-> data);
	free(temp);
	return tail;
	
}

struct node *delete_pos(struct node *head, int pos){
	temp = head;
	int c = 1;
	while(c < pos){
		temp1 = temp;
		temp = temp -> next;
		c++;
	}
	temp1 -> next = temp -> next;
	temp -> next -> prev = temp1;
	printf("Deleted data %d\n", temp -> data);
	free(temp);
	return head;
	
}
void display(struct node *head){
	    printf("Elements are:\n");
	    temp = head;
	  while(temp != NULL){    
	  	printf("%d <-> ",temp -> data);
	        temp = temp -> next;
	    }
	    printf("NULL\n");
}
void reverse_display(struct node *head){
	printf("Elements are : \n");
	temp = tail;
	while(temp != NULL){
		printf("%d<->", temp->data);
		temp = temp -> prev;
	}
	printf("NULL\n");

}

int main(){
	    int ele,key,pos,ch;
		    while(1){
		        printf("1- create  2- display 3 - insert_begin 4 - insert_end 5-insert_pos 6 - delete_begin  7 - delete_end  8 - delete_pos 9 - reverse_display 10 - exit\n");
		        printf("enter your choice:\n");
		        scanf("%d",&ch);
		        switch(ch){
		        case 1:
			        head = create();
			        break;
			    case 2:
			        display(head);
			        break;
			    case 3:
			        scanf("%d",&ele);
			        head = insert_begin(ele);
			        break;
			    case 4:
			        scanf("%d",&ele);
			        head = insert_end(ele);
			        break;
			    case 5:
			        scanf("%d",&pos);
			        scanf("%d",&ele);
			        head = insert_pos(pos,ele);
			        break;
			    case 6:
				    head = delete_begin(head);
				    break;
				case 7:
				    tail = delete_end(tail);
				    break;
				case 8:
				    scanf("%d",&pos);
				    head = delete_pos(head,pos);
				    break;
				case 9:
				    reverse_display(head);
				    break;
				case 10:
				    exit(0);
				    break;
				}
		  }
}

